/* This file was generated by PyBindGen 0.15.0.795 */
#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include <stddef.h>


#if PY_VERSION_HEX < 0x020400F0

#define PyEval_ThreadsInitialized() 1

#define Py_CLEAR(op)				\
        do {                            	\
                if (op) {			\
                        PyObject *tmp = (PyObject *)(op);	\
                        (op) = NULL;		\
                        Py_DECREF(tmp);		\
                }				\
        } while (0)


#define Py_VISIT(op)							\
        do { 								\
                if (op) {						\
                        int vret = visit((PyObject *)(op), arg);	\
                        if (vret)					\
                                return vret;				\
                }							\
        } while (0)

#endif



#if PY_VERSION_HEX < 0x020500F0

typedef int Py_ssize_t;
# define PY_SSIZE_T_MAX INT_MAX
# define PY_SSIZE_T_MIN INT_MIN
typedef inquiry lenfunc;
typedef intargfunc ssizeargfunc;
typedef intobjargproc ssizeobjargproc;

#endif


#if     __GNUC__ > 2
# define PYBINDGEN_UNUSED(param) param __attribute__((__unused__))
#elif     __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ > 4)
# define PYBINDGEN_UNUSED(param) __attribute__((__unused__)) param
#else
# define PYBINDGEN_UNUSED(param) param
#endif  /* !__GNUC__ */

typedef enum _PyBindGenWrapperFlags {
   PYBINDGEN_WRAPPER_FLAG_NONE = 0,
   PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED = (1<<0),
} PyBindGenWrapperFlags;


#include "ns3/tools-module.h"
#include <typeinfo>
#include <ostream>
#include <sstream>
#include <map>
#include <iostream>
/* --- forward declarations --- */


typedef struct {
    PyObject_HEAD
    ns3::AttributeConstructionList *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3AttributeConstructionList;


extern PyTypeObject *_PyNs3AttributeConstructionList_Type;
#define PyNs3AttributeConstructionList_Type (*_PyNs3AttributeConstructionList_Type)

extern std::map<void*, PyObject*> *_PyNs3AttributeConstructionList_wrapper_registry;
#define PyNs3AttributeConstructionList_wrapper_registry (*_PyNs3AttributeConstructionList_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::AttributeConstructionList::Item *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3AttributeConstructionListItem;


extern PyTypeObject *_PyNs3AttributeConstructionListItem_Type;
#define PyNs3AttributeConstructionListItem_Type (*_PyNs3AttributeConstructionListItem_Type)

extern std::map<void*, PyObject*> *_PyNs3AttributeConstructionListItem_wrapper_registry;
#define PyNs3AttributeConstructionListItem_wrapper_registry (*_PyNs3AttributeConstructionListItem_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::Buffer *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3Buffer;


extern PyTypeObject *_PyNs3Buffer_Type;
#define PyNs3Buffer_Type (*_PyNs3Buffer_Type)

extern std::map<void*, PyObject*> *_PyNs3Buffer_wrapper_registry;
#define PyNs3Buffer_wrapper_registry (*_PyNs3Buffer_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::Buffer::Iterator *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3BufferIterator;


extern PyTypeObject *_PyNs3BufferIterator_Type;
#define PyNs3BufferIterator_Type (*_PyNs3BufferIterator_Type)

extern std::map<void*, PyObject*> *_PyNs3BufferIterator_wrapper_registry;
#define PyNs3BufferIterator_wrapper_registry (*_PyNs3BufferIterator_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::ByteTagIterator *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3ByteTagIterator;


extern PyTypeObject *_PyNs3ByteTagIterator_Type;
#define PyNs3ByteTagIterator_Type (*_PyNs3ByteTagIterator_Type)

extern std::map<void*, PyObject*> *_PyNs3ByteTagIterator_wrapper_registry;
#define PyNs3ByteTagIterator_wrapper_registry (*_PyNs3ByteTagIterator_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::ByteTagIterator::Item *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3ByteTagIteratorItem;


extern PyTypeObject *_PyNs3ByteTagIteratorItem_Type;
#define PyNs3ByteTagIteratorItem_Type (*_PyNs3ByteTagIteratorItem_Type)

extern std::map<void*, PyObject*> *_PyNs3ByteTagIteratorItem_wrapper_registry;
#define PyNs3ByteTagIteratorItem_wrapper_registry (*_PyNs3ByteTagIteratorItem_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::ByteTagList *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3ByteTagList;


extern PyTypeObject *_PyNs3ByteTagList_Type;
#define PyNs3ByteTagList_Type (*_PyNs3ByteTagList_Type)

extern std::map<void*, PyObject*> *_PyNs3ByteTagList_wrapper_registry;
#define PyNs3ByteTagList_wrapper_registry (*_PyNs3ByteTagList_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::ByteTagList::Iterator *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3ByteTagListIterator;


extern PyTypeObject *_PyNs3ByteTagListIterator_Type;
#define PyNs3ByteTagListIterator_Type (*_PyNs3ByteTagListIterator_Type)

extern std::map<void*, PyObject*> *_PyNs3ByteTagListIterator_wrapper_registry;
#define PyNs3ByteTagListIterator_wrapper_registry (*_PyNs3ByteTagListIterator_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::ByteTagList::Iterator::Item *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3ByteTagListIteratorItem;


extern PyTypeObject *_PyNs3ByteTagListIteratorItem_Type;
#define PyNs3ByteTagListIteratorItem_Type (*_PyNs3ByteTagListIteratorItem_Type)

extern std::map<void*, PyObject*> *_PyNs3ByteTagListIteratorItem_wrapper_registry;
#define PyNs3ByteTagListIteratorItem_wrapper_registry (*_PyNs3ByteTagListIteratorItem_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::CallbackBase *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3CallbackBase;


extern PyTypeObject *_PyNs3CallbackBase_Type;
#define PyNs3CallbackBase_Type (*_PyNs3CallbackBase_Type)

extern std::map<void*, PyObject*> *_PyNs3CallbackBase_wrapper_registry;
#define PyNs3CallbackBase_wrapper_registry (*_PyNs3CallbackBase_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::EventId *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3EventId;


extern PyTypeObject *_PyNs3EventId_Type;
#define PyNs3EventId_Type (*_PyNs3EventId_Type)

extern std::map<void*, PyObject*> *_PyNs3EventId_wrapper_registry;
#define PyNs3EventId_wrapper_registry (*_PyNs3EventId_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::ObjectBase *obj;
    PyObject *inst_dict;
    PyBindGenWrapperFlags flags:8;
} PyNs3ObjectBase;


extern PyTypeObject *_PyNs3ObjectBase_Type;
#define PyNs3ObjectBase_Type (*_PyNs3ObjectBase_Type)

class PyNs3ObjectBase__PythonHelper : public ns3::ObjectBase
{
public:
    PyObject *m_pyself;

    void set_pyobj(PyObject *pyobj)
    {
        Py_XDECREF(m_pyself);
        Py_INCREF(pyobj);
        m_pyself = pyobj;
    }

    virtual ~PyNs3ObjectBase__PythonHelper()
    {
        Py_CLEAR(m_pyself);
    }

};

extern std::map<void*, PyObject*> *_PyNs3ObjectBase_wrapper_registry;
#define PyNs3ObjectBase_wrapper_registry (*_PyNs3ObjectBase_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::ObjectDeleter *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3ObjectDeleter;


extern PyTypeObject *_PyNs3ObjectDeleter_Type;
#define PyNs3ObjectDeleter_Type (*_PyNs3ObjectDeleter_Type)

extern std::map<void*, PyObject*> *_PyNs3ObjectDeleter_wrapper_registry;
#define PyNs3ObjectDeleter_wrapper_registry (*_PyNs3ObjectDeleter_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::ObjectFactory *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3ObjectFactory;


extern PyTypeObject *_PyNs3ObjectFactory_Type;
#define PyNs3ObjectFactory_Type (*_PyNs3ObjectFactory_Type)

extern std::map<void*, PyObject*> *_PyNs3ObjectFactory_wrapper_registry;
#define PyNs3ObjectFactory_wrapper_registry (*_PyNs3ObjectFactory_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::PacketMetadata *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3PacketMetadata;


extern PyTypeObject *_PyNs3PacketMetadata_Type;
#define PyNs3PacketMetadata_Type (*_PyNs3PacketMetadata_Type)

extern std::map<void*, PyObject*> *_PyNs3PacketMetadata_wrapper_registry;
#define PyNs3PacketMetadata_wrapper_registry (*_PyNs3PacketMetadata_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::PacketMetadata::Item *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3PacketMetadataItem;


extern PyTypeObject *_PyNs3PacketMetadataItem_Type;
#define PyNs3PacketMetadataItem_Type (*_PyNs3PacketMetadataItem_Type)

extern std::map<void*, PyObject*> *_PyNs3PacketMetadataItem_wrapper_registry;
#define PyNs3PacketMetadataItem_wrapper_registry (*_PyNs3PacketMetadataItem_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::PacketMetadata::ItemIterator *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3PacketMetadataItemIterator;


extern PyTypeObject *_PyNs3PacketMetadataItemIterator_Type;
#define PyNs3PacketMetadataItemIterator_Type (*_PyNs3PacketMetadataItemIterator_Type)

extern std::map<void*, PyObject*> *_PyNs3PacketMetadataItemIterator_wrapper_registry;
#define PyNs3PacketMetadataItemIterator_wrapper_registry (*_PyNs3PacketMetadataItemIterator_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::PacketTagIterator *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3PacketTagIterator;


extern PyTypeObject *_PyNs3PacketTagIterator_Type;
#define PyNs3PacketTagIterator_Type (*_PyNs3PacketTagIterator_Type)

extern std::map<void*, PyObject*> *_PyNs3PacketTagIterator_wrapper_registry;
#define PyNs3PacketTagIterator_wrapper_registry (*_PyNs3PacketTagIterator_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::PacketTagIterator::Item *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3PacketTagIteratorItem;


extern PyTypeObject *_PyNs3PacketTagIteratorItem_Type;
#define PyNs3PacketTagIteratorItem_Type (*_PyNs3PacketTagIteratorItem_Type)

extern std::map<void*, PyObject*> *_PyNs3PacketTagIteratorItem_wrapper_registry;
#define PyNs3PacketTagIteratorItem_wrapper_registry (*_PyNs3PacketTagIteratorItem_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::PacketTagList *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3PacketTagList;


extern PyTypeObject *_PyNs3PacketTagList_Type;
#define PyNs3PacketTagList_Type (*_PyNs3PacketTagList_Type)

extern std::map<void*, PyObject*> *_PyNs3PacketTagList_wrapper_registry;
#define PyNs3PacketTagList_wrapper_registry (*_PyNs3PacketTagList_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::PacketTagList::TagData *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3PacketTagListTagData;


extern PyTypeObject *_PyNs3PacketTagListTagData_Type;
#define PyNs3PacketTagListTagData_Type (*_PyNs3PacketTagListTagData_Type)

extern std::map<void*, PyObject*> *_PyNs3PacketTagListTagData_wrapper_registry;
#define PyNs3PacketTagListTagData_wrapper_registry (*_PyNs3PacketTagListTagData_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::SimpleRefCount< ns3::Object, ns3::ObjectBase, ns3::ObjectDeleter > *obj;
    PyObject *inst_dict;
    PyBindGenWrapperFlags flags:8;
} PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter;


extern PyTypeObject *_PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter_Type;
#define PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter_Type (*_PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter_Type)



#include <map>
#include <string>
#include <typeinfo>
#if defined(__GNUC__) && __GNUC__ >= 3
# include <cxxabi.h>
#endif

#define PBG_TYPEMAP_DEBUG 0

namespace pybindgen {

class TypeMap
{
   std::map<std::string, PyTypeObject *> m_map;

public:

   TypeMap() {}

   void register_wrapper(const std::type_info &cpp_type_info, PyTypeObject *python_wrapper)
   {

#if PBG_TYPEMAP_DEBUG
   std::cerr << "register_wrapper(this=" << this << ", type_name=" << cpp_type_info.name()
             << ", python_wrapper=" << python_wrapper->tp_name << ")" << std::endl;
#endif

       m_map[std::string(cpp_type_info.name())] = python_wrapper;
   }



   PyTypeObject * lookup_wrapper(const std::type_info &cpp_type_info, PyTypeObject *fallback_wrapper)
   {

#if PBG_TYPEMAP_DEBUG
   std::cerr << "lookup_wrapper(this=" << this << ", type_name=" << cpp_type_info.name() << ")" << std::endl;
#endif

       PyTypeObject *python_wrapper = m_map[cpp_type_info.name()];
       if (python_wrapper)
           return python_wrapper;
       else {
#if defined(__GNUC__) && __GNUC__ >= 3

           // Get closest (in the single inheritance tree provided by cxxabi.h)
           // registered python wrapper.
           const abi::__si_class_type_info *_typeinfo =
               dynamic_cast<const abi::__si_class_type_info*> (&cpp_type_info);
#if PBG_TYPEMAP_DEBUG
          std::cerr << "  -> looking at C++ type " << _typeinfo->name() << std::endl;
#endif
           while (_typeinfo && (python_wrapper = m_map[std::string(_typeinfo->name())]) == 0) {
               _typeinfo = dynamic_cast<const abi::__si_class_type_info*> (_typeinfo->__base_type);
#if PBG_TYPEMAP_DEBUG
               std::cerr << "  -> looking at C++ type " << _typeinfo->name() << std::endl;
#endif
           }

#if PBG_TYPEMAP_DEBUG
          if (python_wrapper) {
              std::cerr << "  -> found match " << std::endl;
          } else {
              std::cerr << "  -> return fallback wrapper" << std::endl;
          }
#endif

           return python_wrapper? python_wrapper : fallback_wrapper;

#else // non gcc 3+ compilers can only match against explicitly registered classes, not hidden subclasses
           return fallback_wrapper;
#endif
       }
   }
};

}


extern pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map;

#define PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map (*_PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map)


typedef struct {
    PyObject_HEAD
    ns3::Simulator *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3Simulator;


extern PyTypeObject *_PyNs3Simulator_Type;
#define PyNs3Simulator_Type (*_PyNs3Simulator_Type)

extern std::map<void*, PyObject*> *_PyNs3Simulator_wrapper_registry;
#define PyNs3Simulator_wrapper_registry (*_PyNs3Simulator_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::Tag *obj;
    PyObject *inst_dict;
    PyBindGenWrapperFlags flags:8;
} PyNs3Tag;


extern PyTypeObject *_PyNs3Tag_Type;
#define PyNs3Tag_Type (*_PyNs3Tag_Type)


typedef struct {
    PyObject_HEAD
    ns3::TagBuffer *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3TagBuffer;


extern PyTypeObject *_PyNs3TagBuffer_Type;
#define PyNs3TagBuffer_Type (*_PyNs3TagBuffer_Type)

extern std::map<void*, PyObject*> *_PyNs3TagBuffer_wrapper_registry;
#define PyNs3TagBuffer_wrapper_registry (*_PyNs3TagBuffer_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::TypeId *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3TypeId;


extern PyTypeObject *_PyNs3TypeId_Type;
#define PyNs3TypeId_Type (*_PyNs3TypeId_Type)

extern std::map<void*, PyObject*> *_PyNs3TypeId_wrapper_registry;
#define PyNs3TypeId_wrapper_registry (*_PyNs3TypeId_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::TypeId::AttributeInformation *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3TypeIdAttributeInformation;


extern PyTypeObject *_PyNs3TypeIdAttributeInformation_Type;
#define PyNs3TypeIdAttributeInformation_Type (*_PyNs3TypeIdAttributeInformation_Type)

extern std::map<void*, PyObject*> *_PyNs3TypeIdAttributeInformation_wrapper_registry;
#define PyNs3TypeIdAttributeInformation_wrapper_registry (*_PyNs3TypeIdAttributeInformation_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::TypeId::TraceSourceInformation *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3TypeIdTraceSourceInformation;


extern PyTypeObject *_PyNs3TypeIdTraceSourceInformation_Type;
#define PyNs3TypeIdTraceSourceInformation_Type (*_PyNs3TypeIdTraceSourceInformation_Type)

extern std::map<void*, PyObject*> *_PyNs3TypeIdTraceSourceInformation_wrapper_registry;
#define PyNs3TypeIdTraceSourceInformation_wrapper_registry (*_PyNs3TypeIdTraceSourceInformation_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::empty *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3Empty;


extern PyTypeObject *_PyNs3Empty_Type;
#define PyNs3Empty_Type (*_PyNs3Empty_Type)

extern std::map<void*, PyObject*> *_PyNs3Empty_wrapper_registry;
#define PyNs3Empty_wrapper_registry (*_PyNs3Empty_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::int64x64_t *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3Int64x64_t;


extern PyTypeObject *_PyNs3Int64x64_t_Type;
#define PyNs3Int64x64_t_Type (*_PyNs3Int64x64_t_Type)

extern std::map<void*, PyObject*> *_PyNs3Int64x64_t_wrapper_registry;
#define PyNs3Int64x64_t_wrapper_registry (*_PyNs3Int64x64_t_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::Chunk *obj;
    PyObject *inst_dict;
    PyBindGenWrapperFlags flags:8;
} PyNs3Chunk;


extern PyTypeObject *_PyNs3Chunk_Type;
#define PyNs3Chunk_Type (*_PyNs3Chunk_Type)


typedef struct {
    PyObject_HEAD
    ns3::Header *obj;
    PyObject *inst_dict;
    PyBindGenWrapperFlags flags:8;
} PyNs3Header;


extern PyTypeObject *_PyNs3Header_Type;
#define PyNs3Header_Type (*_PyNs3Header_Type)


typedef struct {
    PyObject_HEAD
    ns3::Object *obj;
    PyObject *inst_dict;
    PyBindGenWrapperFlags flags:8;
} PyNs3Object;


extern PyTypeObject *_PyNs3Object_Type;
#define PyNs3Object_Type (*_PyNs3Object_Type)

class PyNs3Object__PythonHelper : public ns3::Object
{
public:
    PyObject *m_pyself;

    void set_pyobj(PyObject *pyobj)
    {
        Py_XDECREF(m_pyself);
        Py_INCREF(pyobj);
        m_pyself = pyobj;
    }

    virtual ~PyNs3Object__PythonHelper()
    {
        Py_CLEAR(m_pyself);
    }

};


typedef struct {
    PyObject_HEAD
    ns3::Object::AggregateIterator *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3ObjectAggregateIterator;


extern PyTypeObject *_PyNs3ObjectAggregateIterator_Type;
#define PyNs3ObjectAggregateIterator_Type (*_PyNs3ObjectAggregateIterator_Type)

extern std::map<void*, PyObject*> *_PyNs3ObjectAggregateIterator_wrapper_registry;
#define PyNs3ObjectAggregateIterator_wrapper_registry (*_PyNs3ObjectAggregateIterator_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::SimpleRefCount< ns3::AttributeAccessor, ns3::empty, ns3::DefaultDeleter<ns3::AttributeAccessor> > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt__;


extern PyTypeObject *_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt___Type;
#define PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt___Type (*_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt___Type)


extern pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map;

#define PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map (*_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map)


typedef struct {
    PyObject_HEAD
    ns3::SimpleRefCount< ns3::AttributeChecker, ns3::empty, ns3::DefaultDeleter<ns3::AttributeChecker> > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt__;


extern PyTypeObject *_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt___Type;
#define PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt___Type (*_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt___Type)


extern pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map;

#define PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map (*_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map)


typedef struct {
    PyObject_HEAD
    ns3::SimpleRefCount< ns3::AttributeValue, ns3::empty, ns3::DefaultDeleter<ns3::AttributeValue> > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt__;


extern PyTypeObject *_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt___Type;
#define PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt___Type (*_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt___Type)


extern pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map;

#define PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map (*_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map)


typedef struct {
    PyObject_HEAD
    ns3::SimpleRefCount< ns3::CallbackImplBase, ns3::empty, ns3::DefaultDeleter<ns3::CallbackImplBase> > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt__;


extern PyTypeObject *_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt___Type;
#define PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt___Type (*_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt___Type)


extern pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map;

#define PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map (*_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map)


typedef struct {
    PyObject_HEAD
    ns3::SimpleRefCount< ns3::EventImpl, ns3::empty, ns3::DefaultDeleter<ns3::EventImpl> > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt__;


extern PyTypeObject *_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt___Type;
#define PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt___Type (*_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt___Type)


extern pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____typeid_map;

#define PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____typeid_map (*_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____typeid_map)


typedef struct {
    PyObject_HEAD
    ns3::SimpleRefCount< ns3::NixVector, ns3::empty, ns3::DefaultDeleter<ns3::NixVector> > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt__;


extern PyTypeObject *_PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt___Type;
#define PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt___Type (*_PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt___Type)


extern pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt____typeid_map;

#define PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt____typeid_map (*_PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt____typeid_map)


typedef struct {
    PyObject_HEAD
    ns3::SimpleRefCount< ns3::Packet, ns3::empty, ns3::DefaultDeleter<ns3::Packet> > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt__;


extern PyTypeObject *_PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt___Type;
#define PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt___Type (*_PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt___Type)


extern pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map;

#define PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map (*_PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map)


typedef struct {
    PyObject_HEAD
    ns3::SimpleRefCount< ns3::TraceSourceAccessor, ns3::empty, ns3::DefaultDeleter<ns3::TraceSourceAccessor> > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt__;


extern PyTypeObject *_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt___Type;
#define PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt___Type (*_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt___Type)


extern pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map;

#define PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map (*_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map)


typedef struct {
    PyObject_HEAD
    ns3::Time *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3Time;


extern PyTypeObject *_PyNs3Time_Type;
#define PyNs3Time_Type (*_PyNs3Time_Type)

extern std::map<void*, PyObject*> *_PyNs3Time_wrapper_registry;
#define PyNs3Time_wrapper_registry (*_PyNs3Time_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::TraceSourceAccessor *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3TraceSourceAccessor;


extern PyTypeObject *_PyNs3TraceSourceAccessor_Type;
#define PyNs3TraceSourceAccessor_Type (*_PyNs3TraceSourceAccessor_Type)


typedef struct {
    PyObject_HEAD
    ns3::Trailer *obj;
    PyObject *inst_dict;
    PyBindGenWrapperFlags flags:8;
} PyNs3Trailer;


extern PyTypeObject *_PyNs3Trailer_Type;
#define PyNs3Trailer_Type (*_PyNs3Trailer_Type)


typedef struct {
    PyObject_HEAD
    ns3::AttributeAccessor *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3AttributeAccessor;


extern PyTypeObject *_PyNs3AttributeAccessor_Type;
#define PyNs3AttributeAccessor_Type (*_PyNs3AttributeAccessor_Type)


typedef struct {
    PyObject_HEAD
    ns3::AttributeChecker *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3AttributeChecker;


extern PyTypeObject *_PyNs3AttributeChecker_Type;
#define PyNs3AttributeChecker_Type (*_PyNs3AttributeChecker_Type)


typedef struct {
    PyObject_HEAD
    ns3::AttributeValue *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3AttributeValue;


extern PyTypeObject *_PyNs3AttributeValue_Type;
#define PyNs3AttributeValue_Type (*_PyNs3AttributeValue_Type)


typedef struct {
    PyObject_HEAD
    ns3::CallbackChecker *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3CallbackChecker;


extern PyTypeObject *_PyNs3CallbackChecker_Type;
#define PyNs3CallbackChecker_Type (*_PyNs3CallbackChecker_Type)


typedef struct {
    PyObject_HEAD
    ns3::CallbackImplBase *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3CallbackImplBase;


extern PyTypeObject *_PyNs3CallbackImplBase_Type;
#define PyNs3CallbackImplBase_Type (*_PyNs3CallbackImplBase_Type)


typedef struct {
    PyObject_HEAD
    ns3::CallbackValue *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3CallbackValue;


extern PyTypeObject *_PyNs3CallbackValue_Type;
#define PyNs3CallbackValue_Type (*_PyNs3CallbackValue_Type)


typedef struct {
    PyObject_HEAD
    ns3::EmptyAttributeValue *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3EmptyAttributeValue;


extern PyTypeObject *_PyNs3EmptyAttributeValue_Type;
#define PyNs3EmptyAttributeValue_Type (*_PyNs3EmptyAttributeValue_Type)


typedef struct {
    PyObject_HEAD
    ns3::EventImpl *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3EventImpl;


extern PyTypeObject *_PyNs3EventImpl_Type;
#define PyNs3EventImpl_Type (*_PyNs3EventImpl_Type)


typedef struct {
    PyObject_HEAD
    ns3::NixVector *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3NixVector;


extern PyTypeObject *_PyNs3NixVector_Type;
#define PyNs3NixVector_Type (*_PyNs3NixVector_Type)


typedef struct {
    PyObject_HEAD
    ns3::ObjectFactoryChecker *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3ObjectFactoryChecker;


extern PyTypeObject *_PyNs3ObjectFactoryChecker_Type;
#define PyNs3ObjectFactoryChecker_Type (*_PyNs3ObjectFactoryChecker_Type)


typedef struct {
    PyObject_HEAD
    ns3::ObjectFactoryValue *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3ObjectFactoryValue;


extern PyTypeObject *_PyNs3ObjectFactoryValue_Type;
#define PyNs3ObjectFactoryValue_Type (*_PyNs3ObjectFactoryValue_Type)


typedef struct {
    PyObject_HEAD
    ns3::Packet *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3Packet;


extern PyTypeObject *_PyNs3Packet_Type;
#define PyNs3Packet_Type (*_PyNs3Packet_Type)


typedef struct {
    PyObject_HEAD
    ns3::TimeChecker *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3TimeChecker;


extern PyTypeObject *_PyNs3TimeChecker_Type;
#define PyNs3TimeChecker_Type (*_PyNs3TimeChecker_Type)


typedef struct {
    PyObject_HEAD
    ns3::TimeValue *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3TimeValue;


extern PyTypeObject *_PyNs3TimeValue_Type;
#define PyNs3TimeValue_Type (*_PyNs3TimeValue_Type)


typedef struct {
    PyObject_HEAD
    ns3::TypeIdChecker *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3TypeIdChecker;


extern PyTypeObject *_PyNs3TypeIdChecker_Type;
#define PyNs3TypeIdChecker_Type (*_PyNs3TypeIdChecker_Type)


typedef struct {
    PyObject_HEAD
    ns3::TypeIdValue *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3TypeIdValue;


extern PyTypeObject *_PyNs3TypeIdValue_Type;
#define PyNs3TypeIdValue_Type (*_PyNs3TypeIdValue_Type)


typedef struct {
    PyObject_HEAD
    ns3::DelayJitterEstimation *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3DelayJitterEstimation;


extern PyTypeObject PyNs3DelayJitterEstimation_Type;

extern std::map<void*, PyObject*> PyNs3DelayJitterEstimation_wrapper_registry;

typedef struct {
    PyObject_HEAD
    ns3::EventGarbageCollector *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3EventGarbageCollector;


extern PyTypeObject PyNs3EventGarbageCollector_Type;

extern std::map<void*, PyObject*> PyNs3EventGarbageCollector_wrapper_registry;

typedef struct {
    PyObject_HEAD
    ns3::Gnuplot *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3Gnuplot;


extern PyTypeObject PyNs3Gnuplot_Type;

extern std::map<void*, PyObject*> PyNs3Gnuplot_wrapper_registry;

typedef struct {
    PyObject_HEAD
    ns3::GnuplotCollection *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3GnuplotCollection;


extern PyTypeObject PyNs3GnuplotCollection_Type;

extern std::map<void*, PyObject*> PyNs3GnuplotCollection_wrapper_registry;

typedef struct {
    PyObject_HEAD
    ns3::GnuplotDataset *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3GnuplotDataset;


extern PyTypeObject PyNs3GnuplotDataset_Type;

extern std::map<void*, PyObject*> PyNs3GnuplotDataset_wrapper_registry;

typedef struct {
    PyObject_HEAD
    ns3::Gnuplot2dDataset *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3Gnuplot2dDataset;


extern PyTypeObject PyNs3Gnuplot2dDataset_Type;


typedef struct {
    PyObject_HEAD
    ns3::Gnuplot2dFunction *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3Gnuplot2dFunction;


extern PyTypeObject PyNs3Gnuplot2dFunction_Type;


typedef struct {
    PyObject_HEAD
    ns3::Gnuplot3dDataset *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3Gnuplot3dDataset;


extern PyTypeObject PyNs3Gnuplot3dDataset_Type;


typedef struct {
    PyObject_HEAD
    ns3::Gnuplot3dFunction *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3Gnuplot3dFunction;


extern PyTypeObject PyNs3Gnuplot3dFunction_Type;
