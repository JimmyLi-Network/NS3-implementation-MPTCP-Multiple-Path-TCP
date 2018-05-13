
/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2010 Adrian Sai-wah Tam
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Author: Adrian Sai-wah Tam <adrian.sw.tam@gmail.com>
 */

#ifndef MP_TCP_SOCKET_BASE_H
#define MP_TCP_SOCKET_BASE_H

#include "ns3/tcp-socket-base.h"

#include <stdint.h>
#include <queue>
#include "ns3/callback.h"
#include "ns3/traced-value.h"
#include "ns3/tcp-socket.h"
#include "ns3/ptr.h"
#include "ns3/ipv4-address.h"
#include "ns3/event-id.h"
#include "ns3/tcp-typedefs.h"
#include "ns3/pending-data.h"
#include "ns3/sequence-number.h"
#include "ns3/rtt-estimator.h"
#include "mp-tcp-l4-protocol.h"


#include "mp-tcp-typedefs.h"

#include <vector>
#include <list>
#include <map>

using namespace std;

namespace ns3 {

/**
 * \ingroup socket
 * \ingroup tcp
 *
 * \brief Implémentation de MPTCP (Multipath TCP).
 *
 *  Cette classe contient l'implémentation de TCP Multipath, ainsi que les interfaces permettant à l'application de dialoguer avec la couche transport (Bind, Listen, Connect, Close, etc.). Elle regroupe la liste des différents sous-flux utilisés, la fenêtre de congestion totale, etc.
 *
 */

class Ipv4EndPoint;
class Node;
class Packet;

class MpTcpL4Protocol;


class MpTcpSocketBase : public TcpSocketBase
{
public:

  static TypeId GetTypeId (void);
  MpTcpStateMachine *m_stateMachine;
  /**
   * Create an unbound tcp socket.
   */
  MpTcpSocketBase (void);
  MpTcpSocketBase (Ptr<Node> node);
  virtual ~MpTcpSocketBase (void);

  // From TcpSocketBase
  virtual int Connect (Address &address);
  virtual int Connect(Ipv4Address servAddr, uint16_t servPort);
  virtual int Close (void);
  virtual int Bind ();
  virtual int Bind (const Address &address);
  virtual int Listen (void);

  virtual uint32_t Recv (uint8_t* buf, uint32_t size);
  virtual uint32_t AvailableWindow(uint8_t sFlowIdx);// Return unfilled portion of window
  void     SetNode (Ptr<Node> node);
  Ptr<Node>   GetNode ();
  void     SetMpTcp (Ptr<MpTcpL4Protocol> mptcp);

  bool     SendBufferedData ();
  int      FillBuffer (uint8_t* buf, uint32_t size);
  uint32_t GetTxAvailable();


  uint8_t  GetMaxSubFlowNumber();
  void     SetMaxSubFlowNumber(uint8_t num);
  uint8_t  GetMinSubFlowNumber();
  void     SetMinSubFlowNumber(uint8_t num);
  bool     SetLossThreshold(uint8_t sFlowIdx, double lossThreshold);

  void SetSourceAddress(Ipv4Address src);
  Ipv4Address GetSourceAddress();

  // extended Socket API for Multipath support
  bool isMultipath();
  void AdvertiseAvailableAddresses();
  bool InitiateSubflows();

  void allocateSendingBuffer(uint32_t size);
  void allocateRecvingBuffer(uint32_t size);
  void SetunOrdBufMaxSize(uint32_t size);
      /**
       * Permet de déterminer le délai sur un chemin.
         * @param idxPath est le numéro de chemin qui correspand à une interface réseau
         * @return le délai sur le chemin identifié par idxPath
         */
  double getPathDelay(uint8_t idxPath);
      /**
         * Permet de déterminer la bande passante d'un chemin.
         * @param idxPath est le numéro de chemin qui correspand à une interface réseau
         * @return la bande passante sur le chemin identifié par idxPath
         */
  uint64_t getPathBandwidth(uint8_t idxPath);
  double getConnectionEfficiency();
        /**
         * Permet de calculer de façon aléatoire une probabilité, et de la comparer au seuil en paramètre.
         * @param threshold est un seuil
         * @return le résultat de comparaison
         */
  bool rejectPacket(double threshold);

  MpTcpSubFlow *GetSubflow (uint8_t sFlowIdx);

  uint32_t GetOutputInf (Ipv4Address addr);
      /**
      * Permet de spécifier l'algorithme à utiliser pour le controle de congestion
      * par exemple: Fully Coupled, Linked Increases, Uncoupled TCPs, RTT Compensator.
      * @param ccalgo algorithme de controle de congestion.
      */
  void SetCongestionCtrlAlgo (CongestionCtrl_t ccalgo);
      /**
      * Permet de spécifier l'algorithme à utiliser pour la distribution des données sur les différents chemins.
      * par exemple: Round Robin.
      * @param ddalgo algorithme de distribution de données.
      */
  void SetDataDistribAlgo    (DataDistribAlgo_t ddalgo);
    /**
      * Permet de spécifier l'algorithme à utiliser pour la détection et/ou la réaction au phénomène de réorganisation des paquets du au multipath.
      * par exemple: Round Robin.
      * @param pralgo algorithme de détection et/ou réaction à la réorganisation des paquets.
      */
  void SetPacketReorderAlgo  (PacketReorder_t pralgo);



protected:


  /*/*////ANTIGUO/////////////////////*/*/*/*/*/

  //virtual void DupAck (const TcpHeader& t, uint32_t count);  // Fast retransmit
  //virtual void Retransmit (void); // Retransmit timeout

  TracedValue<uint32_t>  m_cWnd;
  //uint32_t               m_ssThresh;     //< Slow Start Threshold
  //uint32_t               m_initialCWnd;  //< Initial cWnd value
  uint32_t               m_retxThresh;   //< Fast Retransmit threshold
  bool                   m_inFastRec;    //< currently in fast recover

  /*/*////ANTIGUO/////////////////////*/*/*/*/*/


  Ptr<Node>     m_node;
  Ipv4EndPoint *m_endPoint;
  Ptr<MpTcpL4Protocol> m_mptcp;
  Ipv4Address   m_localAddress;
  uint16_t      m_localPort;
  Ipv4Address   m_remoteAddress;
  uint16_t      m_remotePort;
  enum Socket::SocketErrno m_errno;

  TcpStates_t   m_state;
  bool       m_connected; // used for listen state

  // Multipath related variables
  uint8_t    m_maxSubFlowNumber;
  uint8_t    m_minSubFlowNumber;
  uint8_t    m_subFlowNumber;
  MpStates_t m_mpState;
  MpStates_t m_mpSendState;
  MpStates_t m_mpRecvState;
  bool       m_mpEnabled;
  bool       m_addrAdvertised;
  vector<MpTcpSubFlow *>     subflows;
  vector<MpTcpAddressInfo *> localAddrs;
  vector<MpTcpAddressInfo *> remoteAddrs;
  map<Ipv4Address, uint32_t> sfInitSeqNb;
  list<DSNMapping *>         unOrdered;    // buffer that hold the out of sequence received packet
  uint32_t                   unOrdMaxSize; // maximum size of the buf that hold temporary the out of sequence data
  // add list to store received part of not lost data
  void      GenerateRTTPlot();

  uint8_t   m_lastUsedsFlowIdx;

  double    totalCwnd;
  double    meanTotalCwnd;
  double    alpha;
  CongestionCtrl_t  m_algoCC;         // Algorithm for Congestion Control
  DataDistribAlgo_t m_distribAlgo;    // Algorithm for Data Distribution
  PacketReorder_t   m_algoPR;         // Algorithm for Handling Packet Reordering
     /**
      * Permet de traiter les options (ex: OPT_MPC, OPT_JOIN) contenus dans le segment MPTCP.
      * @param sFlowIdx l'identifiant du chemin
      * @param pkt un pointeur vers le paquet
      * @param mptcpHeader l'entete du segment MPTCP
      * @return l'action à faire
      */
  Actions_t ProcessHeaderOptions(uint8_t sFlowIdx, Ptr<Packet> pkt, uint32_t *dataLen, MpTcpHeader mptcpHeader);
  bool      StoreUnOrderedData(DSNMapping *ptr1);
  void      ReadUnOrderedData ();
  void      ProcessMultipathState();
  void      OpenCWND(uint8_t sFlowIdx, uint32_t ackedBytes);
  void      calculate_alpha ();
  void      calculateTotalCWND ();
  void      calculateSmoothedCWND (uint8_t sFlowIdx);
  void      reduceCWND (uint8_t sFlowIdx);
  DSNMapping* getAckedSegment(uint8_t sFlowIdx, uint32_t ack);
  DSNMapping* getAckedSegment(uint64_t lEdge, uint64_t rEdge);
  double    getGlobalThroughput();


  uint8_t   getSubflowToUse();


  // Multipath tockens
  uint32_t  m_localToken;
  uint32_t  m_remoteToken;


  uint64_t  m_aggregatedBandwidth;

  DataBuffer *sendingBuffer;
  DataBuffer *recvingBuffer;

  // Rx buffer state
  uint32_t m_rxAvailable; // amo  unt of data available for reading through Recv
  uint32_t m_rxBufSize;   // size in bytes of the data in the rx buf
  // note that these two are not the same: rxAvailbale is the number of
  // contiguous sequenced bytes that can be read, rxBufSize is the TOTAL size
  // including out of sequence data, such that m_rxAvailable <= m_rxBufSize


  //Funciones añadidas por ser virtuales = 0 en tcp-socket-base
    virtual Ptr<TcpSocketBase> Fork (void); // Call CopyObject<TcpNewReno> to clone me
    virtual void     SetSSThresh (uint32_t threshold);
    virtual uint32_t GetSSThresh (void) const;
    virtual void     SetInitialCwnd (uint32_t cwnd);
    virtual uint32_t GetInitialCwnd (void) const;
    virtual void DupAck (const TcpHeader& t, uint32_t count); // Received dupack


private:
  friend class Tcp;
    // invoked by Tcp class
    bool      client;
    bool      server;

    /*/*////////////ANTIGUO////////////////////////7

    void InitializeCwnd (void);            // set m_cWnd when connection starts

    /*/*////////////ANTIGUO////////////////////////7

    int       Binding ();
    //void      ForwardUp (Ptr<Packet> p, Ipv4Address ipv4Remote, uint16_t port, Ptr<Ipv4Interface> inter);
    void      ForwardUp (Ptr<Packet> p, Ipv4Header ipv4Head, uint16_t port, Ptr<Ipv4Interface> inter);
    void      Destroy (void);

    void      SendEmptyPacket (uint8_t sFlowId, uint8_t flags);
    void      SendAcknowledge (uint8_t sFlowId, uint8_t flags, TcpOptions *opt);

    bool      SendPendingData ();
    bool      ProcessAction   (uint8_t sFlowIdx, Actions_t a);
    bool      ProcessAction   (uint8_t sFlowIdx, MpTcpHeader mptcpHeader, Ptr<Packet> pkt, uint32_t dataLen, Actions_t a);
    Actions_t ProcessEvent    (uint8_t sFlowId, Events_t e);
      /**
      * Au coté émetteur, permet de traiter une option reçue dans un acquittement avant de vérifier si ce dernier est dupliqué ou non.
      * @param opt classe représentant l'option reçue
      * @return the subflow index on which the missed segment have been originally transmitted
      */
    uint8_t   ProcessOption   (TcpOptions *opt);
    void      SetReTxTimeout  (uint8_t sFlowIdx);
    void      ReTxTimeout     (uint8_t sFlowIdx);
    void      Retransmit      (uint8_t sFlowIdx);
    bool      IsRetransmitted (uint64_t leftEdge, uint64_t rightEdge);
    bool      IsDuplicatedAck (uint8_t sFlowIdx, MpTcpHeader l4Header, TcpOptions *opt);
    void      DupDSACK (uint8_t sFlowIdx, MpTcpHeader mptcpHeader, OptDSACK *dsack);
    void      DupAck (uint8_t sFlowIdx, DSNMapping * ptrDSN);
    void      NewACK (uint8_t sFlowIdx, MpTcpHeader mptcpHeader, TcpOptions *opt);


    uint8_t   LookupByAddrs   (Ipv4Address src, Ipv4Address dst);
    void      DetectLocalAddresses();
    uint32_t  getL3MTU        (Ipv4Address addr);
    uint64_t  getBandwidth    (Ipv4Address addr);

      //methods for window management
    virtual uint32_t  BytesInFlight();  // Return total bytes in flight

    virtual bool IsThereRoute  (Ipv4Address src, Ipv4Address dst);
    virtual bool IsLocalAddress(Ipv4Address addr);

    virtual bool CloseMultipathConnection();

    //methods for Rx buffer management
    uint16_t AdvertisedWindowSize();

    // Window management variables
    uint32_t                       m_rxWindowSize;         //Flow control window
    uint32_t                       m_ssThresh;             //Slow Start Threshold
    uint32_t                       m_initialCWnd;          //Initial cWnd value

    uint32_t                       remoteRecvWnd; //Congestion window

    //persist timer management
    Time                           m_persistTime;
    EventId                        m_persistEvent;

    Ptr<MpTcpSocketBase> Copy ();

    PendingData*   m_pendingData;
    SequenceNumber32 m_firstPendingSequence;

    //sequence info, next expected sequence number for sender & receiver side
    uint64_t nextTxSequence;       // sequence number used by the multipath capable sender
    uint32_t unAckedDataCount;     // Number of outstanding bytes
    uint32_t congestionWnd;
    uint64_t nextRxSequence;
    DSNMapping* lastRetransmit;

    SequenceNumber32 m_lastRxAck;

    bool     m_skipRetxResched;
    uint32_t m_dupAckCount;

    EventId  m_lastAckEvent;

    EventId  m_delAckEvent;
    uint32_t m_delAckCount;
    uint32_t m_delAckMaxCount;
    Time     m_delAckTimeout;

      // statistical variables
      uint32_t nbRejected;
      uint32_t nbReceived;

      // methods for packet reordering
      OptDSACK* createOptDSACK(OptDataSeqMapping * optDSN);

      // we need this map because when an ACK is received all segments with lower sequence number are droped from the temporary buffer
      map<uint64_t, uint32_t> retransSeg; // Retransmitted_Segment (data_Seq_Number, data_length)
      map<uint64_t, uint8_t>  ackedSeg;   // Acked_Segment (data_Seq_Number, number_of_ack)
      FRtoStep_t frtoStep;
      bool useFastRecovery;

};

} // namespace ns3

#endif /* MP_TCP_SOCKET_BASE_H */
