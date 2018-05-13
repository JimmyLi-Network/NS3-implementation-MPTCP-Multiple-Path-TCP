#ifndef MP_TCP_L4_PROTOCOL_H
#define MP_TCP_L4_PROTOCOL_H



#include <stdint.h>
#include <vector>


#include "ns3/packet.h"
#include "ns3/ipv4-address.h"
#include "ns3/ptr.h"
#include "ns3/object-factory.h"
#include "ns3/ipv4-l4-protocol.h"
#include "ns3/tcp-l4-protocol.h"
#include "ns3/tcp-typedefs.h"
#include "ns3/ipv4-end-point-demux.h"
#include "mp-tcp-header.h"
#include "mp-tcp-socket-base.h"


namespace ns3 {

class MpTcpL4Protocol : public TcpL4Protocol {

public:

  /////Pablo UC////////
  typedef Callback<void,Ptr<Packet>, Ipv4Header> MpTraceCallback;
  ///End Pablo UC////////

  static const uint8_t PROT_NUMBER;
  static TypeId GetTypeId (void);

  MpTcpL4Protocol ();
  virtual ~MpTcpL4Protocol ();

  virtual int GetProtocolNumber (void) const;
  virtual enum Ipv4L4Protocol::RxStatus Receive (Ptr<Packet> packet, Ipv4Header const &ipHeader, Ptr<Ipv4Interface> incomingInterface);
  void SendPacket (Ptr<Packet> p, MpTcpHeader l4Header, Ipv4Address src, Ipv4Address dst);

  ////Pablo UC //
  void SetMpTraceCallback(MpTraceCallback callback);
  ////End Pablo UC ///

protected:
  virtual void DoDispose (void);

  virtual void NotifyNewAggregate ();

  //std::vector<Ptr<MpTcpSocketImpl> > m_sockets;

  //Pablo UC/////////
private:
  MpTraceCallback m_mpTraceCallback;
  //End Pablo UC////
};

}; // namespace ns3


#endif /* MP_TCP_L4_PROTOCOL_H */
