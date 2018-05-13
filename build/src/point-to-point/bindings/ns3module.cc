#include "ns3module.h"
static PyMethodDef point_to_point_FatalImpl_functions[] = {
    {NULL, NULL, 0, NULL}
};

static PyObject *
initpoint_to_point_FatalImpl(void)
{
    PyObject *m;
    m = Py_InitModule3((char *) "point_to_point.FatalImpl", point_to_point_FatalImpl_functions, NULL);
    if (m == NULL) {
        return NULL;
    }
    return m;
}
static PyMethodDef point_to_point_functions[] = {
    {NULL, NULL, 0, NULL}
};
/* --- classes --- */


PyTypeObject *_PyNs3Address_Type;
std::map<void*, PyObject*> *_PyNs3Address_wrapper_registry;


PyTypeObject *_PyNs3AsciiTraceHelper_Type;
std::map<void*, PyObject*> *_PyNs3AsciiTraceHelper_wrapper_registry;


PyTypeObject *_PyNs3AsciiTraceHelperForDevice_Type;
std::map<void*, PyObject*> *_PyNs3AsciiTraceHelperForDevice_wrapper_registry;


PyTypeObject *_PyNs3AttributeConstructionList_Type;
std::map<void*, PyObject*> *_PyNs3AttributeConstructionList_wrapper_registry;


PyTypeObject *_PyNs3AttributeConstructionListItem_Type;
std::map<void*, PyObject*> *_PyNs3AttributeConstructionListItem_wrapper_registry;


PyTypeObject *_PyNs3Buffer_Type;
std::map<void*, PyObject*> *_PyNs3Buffer_wrapper_registry;


PyTypeObject *_PyNs3BufferIterator_Type;
std::map<void*, PyObject*> *_PyNs3BufferIterator_wrapper_registry;


PyTypeObject *_PyNs3ByteTagIterator_Type;
std::map<void*, PyObject*> *_PyNs3ByteTagIterator_wrapper_registry;


PyTypeObject *_PyNs3ByteTagIteratorItem_Type;
std::map<void*, PyObject*> *_PyNs3ByteTagIteratorItem_wrapper_registry;


PyTypeObject *_PyNs3ByteTagList_Type;
std::map<void*, PyObject*> *_PyNs3ByteTagList_wrapper_registry;


PyTypeObject *_PyNs3ByteTagListIterator_Type;
std::map<void*, PyObject*> *_PyNs3ByteTagListIterator_wrapper_registry;


PyTypeObject *_PyNs3ByteTagListIteratorItem_Type;
std::map<void*, PyObject*> *_PyNs3ByteTagListIteratorItem_wrapper_registry;


PyTypeObject *_PyNs3CallbackBase_Type;
std::map<void*, PyObject*> *_PyNs3CallbackBase_wrapper_registry;


PyTypeObject *_PyNs3DataRate_Type;
std::map<void*, PyObject*> *_PyNs3DataRate_wrapper_registry;


PyTypeObject *_PyNs3EventId_Type;
std::map<void*, PyObject*> *_PyNs3EventId_wrapper_registry;


PyTypeObject *_PyNs3Ipv4Address_Type;
std::map<void*, PyObject*> *_PyNs3Ipv4Address_wrapper_registry;


PyTypeObject *_PyNs3Ipv4Mask_Type;
std::map<void*, PyObject*> *_PyNs3Ipv4Mask_wrapper_registry;


PyTypeObject *_PyNs3Ipv6Address_Type;
std::map<void*, PyObject*> *_PyNs3Ipv6Address_wrapper_registry;


PyTypeObject *_PyNs3Ipv6Prefix_Type;
std::map<void*, PyObject*> *_PyNs3Ipv6Prefix_wrapper_registry;


PyTypeObject *_PyNs3Mac48Address_Type;
std::map<void*, PyObject*> *_PyNs3Mac48Address_wrapper_registry;


PyTypeObject *_PyNs3NetDeviceContainer_Type;
std::map<void*, PyObject*> *_PyNs3NetDeviceContainer_wrapper_registry;


PyTypeObject *_PyNs3NodeContainer_Type;
std::map<void*, PyObject*> *_PyNs3NodeContainer_wrapper_registry;


PyTypeObject *_PyNs3ObjectBase_Type;
std::map<void*, PyObject*> *_PyNs3ObjectBase_wrapper_registry;


PyTypeObject *_PyNs3ObjectDeleter_Type;
std::map<void*, PyObject*> *_PyNs3ObjectDeleter_wrapper_registry;


PyTypeObject *_PyNs3ObjectFactory_Type;
std::map<void*, PyObject*> *_PyNs3ObjectFactory_wrapper_registry;


PyTypeObject *_PyNs3PacketMetadata_Type;
std::map<void*, PyObject*> *_PyNs3PacketMetadata_wrapper_registry;


PyTypeObject *_PyNs3PacketMetadataItem_Type;
std::map<void*, PyObject*> *_PyNs3PacketMetadataItem_wrapper_registry;


PyTypeObject *_PyNs3PacketMetadataItemIterator_Type;
std::map<void*, PyObject*> *_PyNs3PacketMetadataItemIterator_wrapper_registry;


PyTypeObject *_PyNs3PacketTagIterator_Type;
std::map<void*, PyObject*> *_PyNs3PacketTagIterator_wrapper_registry;


PyTypeObject *_PyNs3PacketTagIteratorItem_Type;
std::map<void*, PyObject*> *_PyNs3PacketTagIteratorItem_wrapper_registry;


PyTypeObject *_PyNs3PacketTagList_Type;
std::map<void*, PyObject*> *_PyNs3PacketTagList_wrapper_registry;


PyTypeObject *_PyNs3PacketTagListTagData_Type;
std::map<void*, PyObject*> *_PyNs3PacketTagListTagData_wrapper_registry;


PyTypeObject *_PyNs3PcapFile_Type;
std::map<void*, PyObject*> *_PyNs3PcapFile_wrapper_registry;


PyTypeObject *_PyNs3PcapHelper_Type;
std::map<void*, PyObject*> *_PyNs3PcapHelper_wrapper_registry;


PyTypeObject *_PyNs3PcapHelperForDevice_Type;
std::map<void*, PyObject*> *_PyNs3PcapHelperForDevice_wrapper_registry;


PyTypeObject *_PyNs3RandomVariable_Type;
std::map<void*, PyObject*> *_PyNs3RandomVariable_wrapper_registry;


PyTypeObject *_PyNs3SeedManager_Type;
std::map<void*, PyObject*> *_PyNs3SeedManager_wrapper_registry;


PyTypeObject *_PyNs3SequentialVariable_Type;


PyTypeObject *_PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter_Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map;


PyTypeObject *_PyNs3Simulator_Type;
std::map<void*, PyObject*> *_PyNs3Simulator_wrapper_registry;


PyTypeObject *_PyNs3Tag_Type;


PyTypeObject *_PyNs3TagBuffer_Type;
std::map<void*, PyObject*> *_PyNs3TagBuffer_wrapper_registry;


PyTypeObject *_PyNs3TriangularVariable_Type;


PyTypeObject *_PyNs3TypeId_Type;
std::map<void*, PyObject*> *_PyNs3TypeId_wrapper_registry;


PyTypeObject *_PyNs3TypeIdAttributeInformation_Type;
std::map<void*, PyObject*> *_PyNs3TypeIdAttributeInformation_wrapper_registry;


PyTypeObject *_PyNs3TypeIdTraceSourceInformation_Type;
std::map<void*, PyObject*> *_PyNs3TypeIdTraceSourceInformation_wrapper_registry;


PyTypeObject *_PyNs3UniformVariable_Type;


PyTypeObject *_PyNs3WeibullVariable_Type;


PyTypeObject *_PyNs3ZetaVariable_Type;


PyTypeObject *_PyNs3ZipfVariable_Type;


PyTypeObject *_PyNs3Empty_Type;
std::map<void*, PyObject*> *_PyNs3Empty_wrapper_registry;


PyTypeObject *_PyNs3Int64x64_t_Type;
std::map<void*, PyObject*> *_PyNs3Int64x64_t_wrapper_registry;


PyTypeObject *_PyNs3Chunk_Type;


PyTypeObject *_PyNs3ConstantVariable_Type;


PyTypeObject *_PyNs3DeterministicVariable_Type;


PyTypeObject *_PyNs3EmpiricalVariable_Type;


PyTypeObject *_PyNs3ErlangVariable_Type;


PyTypeObject *_PyNs3ExponentialVariable_Type;


PyTypeObject *_PyNs3GammaVariable_Type;


PyTypeObject *_PyNs3Header_Type;


PyTypeObject *_PyNs3IntEmpiricalVariable_Type;


PyTypeObject *_PyNs3LogNormalVariable_Type;


PyTypeObject *_PyNs3NormalVariable_Type;


PyTypeObject *_PyNs3Object_Type;


PyTypeObject *_PyNs3ObjectAggregateIterator_Type;
std::map<void*, PyObject*> *_PyNs3ObjectAggregateIterator_wrapper_registry;


PyTypeObject *_PyNs3ParetoVariable_Type;


PyTypeObject *_PyNs3PcapFileWrapper_Type;


PyTypeObject *_PyNs3Queue_Type;


PyTypeObject *_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map;


PyTypeObject *_PyNs3Time_Type;
std::map<void*, PyObject*> *_PyNs3Time_wrapper_registry;


PyTypeObject *_PyNs3TraceSourceAccessor_Type;


PyTypeObject *_PyNs3Trailer_Type;


PyTypeObject *_PyNs3AttributeAccessor_Type;


PyTypeObject *_PyNs3AttributeChecker_Type;


PyTypeObject *_PyNs3AttributeValue_Type;


PyTypeObject *_PyNs3CallbackChecker_Type;


PyTypeObject *_PyNs3CallbackImplBase_Type;


PyTypeObject *_PyNs3CallbackValue_Type;


PyTypeObject *_PyNs3Channel_Type;


PyTypeObject *_PyNs3DataRateChecker_Type;


PyTypeObject *_PyNs3DataRateValue_Type;


PyTypeObject *_PyNs3EmptyAttributeValue_Type;


PyTypeObject *_PyNs3ErrorModel_Type;


PyTypeObject *_PyNs3EventImpl_Type;


PyTypeObject *_PyNs3Ipv4AddressChecker_Type;


PyTypeObject *_PyNs3Ipv4AddressValue_Type;


PyTypeObject *_PyNs3Ipv4MaskChecker_Type;


PyTypeObject *_PyNs3Ipv4MaskValue_Type;


PyTypeObject *_PyNs3Ipv6AddressChecker_Type;


PyTypeObject *_PyNs3Ipv6AddressValue_Type;


PyTypeObject *_PyNs3Ipv6PrefixChecker_Type;


PyTypeObject *_PyNs3Ipv6PrefixValue_Type;


PyTypeObject *_PyNs3ListErrorModel_Type;


PyTypeObject *_PyNs3Mac48AddressChecker_Type;


PyTypeObject *_PyNs3Mac48AddressValue_Type;


PyTypeObject *_PyNs3NetDevice_Type;


PyTypeObject *_PyNs3NixVector_Type;


PyTypeObject *_PyNs3Node_Type;


PyTypeObject *_PyNs3ObjectFactoryChecker_Type;


PyTypeObject *_PyNs3ObjectFactoryValue_Type;


PyTypeObject *_PyNs3OutputStreamWrapper_Type;


PyTypeObject *_PyNs3Packet_Type;


PyTypeObject *_PyNs3RandomVariableChecker_Type;


PyTypeObject *_PyNs3RandomVariableValue_Type;


PyTypeObject *_PyNs3RateErrorModel_Type;


PyTypeObject *_PyNs3ReceiveListErrorModel_Type;


PyTypeObject *_PyNs3TimeChecker_Type;


PyTypeObject *_PyNs3TimeValue_Type;


PyTypeObject *_PyNs3TypeIdChecker_Type;


PyTypeObject *_PyNs3TypeIdValue_Type;


PyTypeObject *_PyNs3AddressChecker_Type;


PyTypeObject *_PyNs3AddressValue_Type;



void
PyNs3PointToPointHelper__PythonHelper::EnableAsciiInternal(ns3::Ptr< ns3::OutputStreamWrapper > stream, std::string prefix, ns3::Ptr< ns3::NetDevice > nd, bool explicitFilename)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::PointToPointHelper *self_obj_before;
    PyObject *py_retval;
    PyNs3OutputStreamWrapper *py_OutputStreamWrapper;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    const char *prefix_ptr;
    Py_ssize_t prefix_len;
    PyNs3NetDevice *py_NetDevice;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter2;
    PyTypeObject *wrapper_type2 = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_EnableAsciiInternal"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3PointToPointHelper* >(m_pyself)->obj;
    reinterpret_cast< PyNs3PointToPointHelper* >(m_pyself)->obj = (ns3::PointToPointHelper*) this;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::OutputStreamWrapper *> (ns3::PeekPointer (stream)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_OutputStreamWrapper = NULL;
    } else {
        py_OutputStreamWrapper = (PyNs3OutputStreamWrapper *) wrapper_lookup_iter->second;
        Py_INCREF(py_OutputStreamWrapper);
    }
    
    if (py_OutputStreamWrapper == NULL)
    {
        wrapper_type = PyNs3SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt____typeid_map.lookup_wrapper(typeid(*const_cast<ns3::OutputStreamWrapper *> (ns3::PeekPointer (stream))), &PyNs3OutputStreamWrapper_Type);
        py_OutputStreamWrapper = PyObject_New(PyNs3OutputStreamWrapper, wrapper_type);
        py_OutputStreamWrapper->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::OutputStreamWrapper *> (ns3::PeekPointer (stream))->Ref();
        py_OutputStreamWrapper->obj = const_cast<ns3::OutputStreamWrapper *> (ns3::PeekPointer (stream));
        PyNs3Empty_wrapper_registry[(void *) py_OutputStreamWrapper->obj] = (PyObject *) py_OutputStreamWrapper;
    }
    prefix_ptr = (prefix).c_str();
    prefix_len = (prefix).size();
    wrapper_lookup_iter2 = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::NetDevice *> (ns3::PeekPointer (nd)));
    if (wrapper_lookup_iter2 == PyNs3ObjectBase_wrapper_registry.end()) {
        py_NetDevice = NULL;
    } else {
        py_NetDevice = (PyNs3NetDevice *) wrapper_lookup_iter2->second;
        Py_INCREF(py_NetDevice);
    }
    
    if (py_NetDevice == NULL)
    {
        wrapper_type2 = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::NetDevice *> (ns3::PeekPointer (nd))), &PyNs3NetDevice_Type);
        py_NetDevice = PyObject_GC_New(PyNs3NetDevice, wrapper_type2);
        py_NetDevice->inst_dict = NULL;
        py_NetDevice->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::NetDevice *> (ns3::PeekPointer (nd))->Ref();
        py_NetDevice->obj = const_cast<ns3::NetDevice *> (ns3::PeekPointer (nd));
        PyNs3ObjectBase_wrapper_registry[(void *) py_NetDevice->obj] = (PyObject *) py_NetDevice;
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_EnableAsciiInternal", (char *) "Ns#NN", py_OutputStreamWrapper, prefix_ptr, prefix_len, py_NetDevice, PyBool_FromLong(explicitFilename));
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3PointToPointHelper* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3PointToPointHelper* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3PointToPointHelper* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3PointToPointHelper__PythonHelper::EnablePcapInternal(std::string prefix, ns3::Ptr< ns3::NetDevice > nd, bool promiscuous, bool explicitFilename)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::PointToPointHelper *self_obj_before;
    PyObject *py_retval;
    const char *prefix_ptr;
    Py_ssize_t prefix_len;
    PyNs3NetDevice *py_NetDevice;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_EnablePcapInternal"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3PointToPointHelper* >(m_pyself)->obj;
    reinterpret_cast< PyNs3PointToPointHelper* >(m_pyself)->obj = (ns3::PointToPointHelper*) this;
    prefix_ptr = (prefix).c_str();
    prefix_len = (prefix).size();
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::NetDevice *> (ns3::PeekPointer (nd)));
    if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
        py_NetDevice = NULL;
    } else {
        py_NetDevice = (PyNs3NetDevice *) wrapper_lookup_iter->second;
        Py_INCREF(py_NetDevice);
    }
    
    if (py_NetDevice == NULL)
    {
        wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::NetDevice *> (ns3::PeekPointer (nd))), &PyNs3NetDevice_Type);
        py_NetDevice = PyObject_GC_New(PyNs3NetDevice, wrapper_type);
        py_NetDevice->inst_dict = NULL;
        py_NetDevice->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::NetDevice *> (ns3::PeekPointer (nd))->Ref();
        py_NetDevice->obj = const_cast<ns3::NetDevice *> (ns3::PeekPointer (nd));
        PyNs3ObjectBase_wrapper_registry[(void *) py_NetDevice->obj] = (PyObject *) py_NetDevice;
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_EnablePcapInternal", (char *) "s#NNN", prefix_ptr, prefix_len, py_NetDevice, PyBool_FromLong(promiscuous), PyBool_FromLong(explicitFilename));
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3PointToPointHelper* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3PointToPointHelper* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3PointToPointHelper* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


static int
_wrap_PyNs3PointToPointHelper__tp_init__0(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3PointToPointHelper *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3PointToPointHelper_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3PointToPointHelper_Type)
    {
        self->obj = new PyNs3PointToPointHelper__PythonHelper(*((PyNs3PointToPointHelper *) arg0)->obj);
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3PointToPointHelper__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        self->obj = new ns3::PointToPointHelper(*((PyNs3PointToPointHelper *) arg0)->obj);
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    }
    return 0;
}

static int
_wrap_PyNs3PointToPointHelper__tp_init__1(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3PointToPointHelper_Type)
    {
        self->obj = new PyNs3PointToPointHelper__PythonHelper();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3PointToPointHelper__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        self->obj = new ns3::PointToPointHelper();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    }
    return 0;
}

int _wrap_PyNs3PointToPointHelper__tp_init(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3PointToPointHelper__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3PointToPointHelper__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3PointToPointHelper_SetChannelAttribute(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *name;
    Py_ssize_t name_len;
    PyNs3AttributeValue *value;
    const char *keywords[] = {"name", "value", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!", (char **) keywords, &name, &name_len, &PyNs3AttributeValue_Type, &value)) {
        return NULL;
    }
    self->obj->SetChannelAttribute(std::string(name, name_len), *((PyNs3AttributeValue *) value)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointHelper_SetDeviceAttribute(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *name;
    Py_ssize_t name_len;
    PyNs3AttributeValue *value;
    const char *keywords[] = {"name", "value", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!", (char **) keywords, &name, &name_len, &PyNs3AttributeValue_Type, &value)) {
        return NULL;
    }
    self->obj->SetDeviceAttribute(std::string(name, name_len), *((PyNs3AttributeValue *) value)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointHelper_SetQueue(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *type;
    Py_ssize_t type_len;
    const char *n1 = NULL;
    Py_ssize_t n1_len;
    PyNs3AttributeValue *v1 = NULL;
    ns3::EmptyAttributeValue v1_default = ns3::EmptyAttributeValue();
    const char *n2 = NULL;
    Py_ssize_t n2_len;
    PyNs3AttributeValue *v2 = NULL;
    ns3::EmptyAttributeValue v2_default = ns3::EmptyAttributeValue();
    const char *n3 = NULL;
    Py_ssize_t n3_len;
    PyNs3AttributeValue *v3 = NULL;
    ns3::EmptyAttributeValue v3_default = ns3::EmptyAttributeValue();
    const char *n4 = NULL;
    Py_ssize_t n4_len;
    PyNs3AttributeValue *v4 = NULL;
    ns3::EmptyAttributeValue v4_default = ns3::EmptyAttributeValue();
    const char *keywords[] = {"type", "n1", "v1", "n2", "v2", "n3", "v3", "n4", "v4", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#|s#O!s#O!s#O!s#O!", (char **) keywords, &type, &type_len, &n1, &n1_len, &PyNs3AttributeValue_Type, &v1, &n2, &n2_len, &PyNs3AttributeValue_Type, &v2, &n3, &n3_len, &PyNs3AttributeValue_Type, &v3, &n4, &n4_len, &PyNs3AttributeValue_Type, &v4)) {
        return NULL;
    }
    self->obj->SetQueue(std::string(type, type_len), (n1 ? std::string(n1, n1_len) : ""), (v1 ? (*((PyNs3AttributeValue *) v1)->obj) : v1_default), (n2 ? std::string(n2, n2_len) : ""), (v2 ? (*((PyNs3AttributeValue *) v2)->obj) : v2_default), (n3 ? std::string(n3, n3_len) : ""), (v3 ? (*((PyNs3AttributeValue *) v3)->obj) : v3_default), (n4 ? std::string(n4, n4_len) : ""), (v4 ? (*((PyNs3AttributeValue *) v4)->obj) : v4_default));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}



PyObject *
_wrap_PyNs3PointToPointHelper_Install__0(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3NodeContainer *c;
    const char *keywords[] = {"c", NULL};
    PyNs3NetDeviceContainer *py_NetDeviceContainer;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3NodeContainer_Type, &c)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    ns3::NetDeviceContainer retval = self->obj->Install(*((PyNs3NodeContainer *) c)->obj);
    py_NetDeviceContainer = PyObject_New(PyNs3NetDeviceContainer, &PyNs3NetDeviceContainer_Type);
    py_NetDeviceContainer->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_NetDeviceContainer->obj = new ns3::NetDeviceContainer(retval);
    PyNs3NetDeviceContainer_wrapper_registry[(void *) py_NetDeviceContainer->obj] = (PyObject *) py_NetDeviceContainer;
    py_retval = Py_BuildValue((char *) "N", py_NetDeviceContainer);
    return py_retval;
}

PyObject *
_wrap_PyNs3PointToPointHelper_Install__1(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3Node *a;
    ns3::Node *a_ptr;
    PyNs3Node *b;
    ns3::Node *b_ptr;
    const char *keywords[] = {"a", "b", NULL};
    PyNs3NetDeviceContainer *py_NetDeviceContainer;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!", (char **) keywords, &PyNs3Node_Type, &a, &PyNs3Node_Type, &b)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    a_ptr = (a ? a->obj : NULL);
    b_ptr = (b ? b->obj : NULL);
    ns3::NetDeviceContainer retval = self->obj->Install(ns3::Ptr< ns3::Node  > (a_ptr), ns3::Ptr< ns3::Node  > (b_ptr));
    py_NetDeviceContainer = PyObject_New(PyNs3NetDeviceContainer, &PyNs3NetDeviceContainer_Type);
    py_NetDeviceContainer->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_NetDeviceContainer->obj = new ns3::NetDeviceContainer(retval);
    PyNs3NetDeviceContainer_wrapper_registry[(void *) py_NetDeviceContainer->obj] = (PyObject *) py_NetDeviceContainer;
    py_retval = Py_BuildValue((char *) "N", py_NetDeviceContainer);
    return py_retval;
}

PyObject *
_wrap_PyNs3PointToPointHelper_Install__2(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3Node *a;
    ns3::Node *a_ptr;
    const char *bName;
    Py_ssize_t bName_len;
    const char *keywords[] = {"a", "bName", NULL};
    PyNs3NetDeviceContainer *py_NetDeviceContainer;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!s#", (char **) keywords, &PyNs3Node_Type, &a, &bName, &bName_len)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    a_ptr = (a ? a->obj : NULL);
    ns3::NetDeviceContainer retval = self->obj->Install(ns3::Ptr< ns3::Node  > (a_ptr), std::string(bName, bName_len));
    py_NetDeviceContainer = PyObject_New(PyNs3NetDeviceContainer, &PyNs3NetDeviceContainer_Type);
    py_NetDeviceContainer->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_NetDeviceContainer->obj = new ns3::NetDeviceContainer(retval);
    PyNs3NetDeviceContainer_wrapper_registry[(void *) py_NetDeviceContainer->obj] = (PyObject *) py_NetDeviceContainer;
    py_retval = Py_BuildValue((char *) "N", py_NetDeviceContainer);
    return py_retval;
}

PyObject *
_wrap_PyNs3PointToPointHelper_Install__3(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *aName;
    Py_ssize_t aName_len;
    PyNs3Node *b;
    ns3::Node *b_ptr;
    const char *keywords[] = {"aName", "b", NULL};
    PyNs3NetDeviceContainer *py_NetDeviceContainer;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!", (char **) keywords, &aName, &aName_len, &PyNs3Node_Type, &b)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    b_ptr = (b ? b->obj : NULL);
    ns3::NetDeviceContainer retval = self->obj->Install(std::string(aName, aName_len), ns3::Ptr< ns3::Node  > (b_ptr));
    py_NetDeviceContainer = PyObject_New(PyNs3NetDeviceContainer, &PyNs3NetDeviceContainer_Type);
    py_NetDeviceContainer->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_NetDeviceContainer->obj = new ns3::NetDeviceContainer(retval);
    PyNs3NetDeviceContainer_wrapper_registry[(void *) py_NetDeviceContainer->obj] = (PyObject *) py_NetDeviceContainer;
    py_retval = Py_BuildValue((char *) "N", py_NetDeviceContainer);
    return py_retval;
}

PyObject *
_wrap_PyNs3PointToPointHelper_Install__4(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *aNode;
    Py_ssize_t aNode_len;
    const char *bNode;
    Py_ssize_t bNode_len;
    const char *keywords[] = {"aNode", "bNode", NULL};
    PyNs3NetDeviceContainer *py_NetDeviceContainer;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#s#", (char **) keywords, &aNode, &aNode_len, &bNode, &bNode_len)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    ns3::NetDeviceContainer retval = self->obj->Install(std::string(aNode, aNode_len), std::string(bNode, bNode_len));
    py_NetDeviceContainer = PyObject_New(PyNs3NetDeviceContainer, &PyNs3NetDeviceContainer_Type);
    py_NetDeviceContainer->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_NetDeviceContainer->obj = new ns3::NetDeviceContainer(retval);
    PyNs3NetDeviceContainer_wrapper_registry[(void *) py_NetDeviceContainer->obj] = (PyObject *) py_NetDeviceContainer;
    py_retval = Py_BuildValue((char *) "N", py_NetDeviceContainer);
    return py_retval;
}

PyObject * _wrap_PyNs3PointToPointHelper_Install(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[5] = {0,};
    retval = _wrap_PyNs3PointToPointHelper_Install__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3PointToPointHelper_Install__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    retval = _wrap_PyNs3PointToPointHelper_Install__2(self, args, kwargs, &exceptions[2]);
    if (!exceptions[2]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        return retval;
    }
    retval = _wrap_PyNs3PointToPointHelper_Install__3(self, args, kwargs, &exceptions[3]);
    if (!exceptions[3]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        Py_DECREF(exceptions[2]);
        return retval;
    }
    retval = _wrap_PyNs3PointToPointHelper_Install__4(self, args, kwargs, &exceptions[4]);
    if (!exceptions[4]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        Py_DECREF(exceptions[2]);
        Py_DECREF(exceptions[3]);
        return retval;
    }
    error_list = PyList_New(5);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyList_SET_ITEM(error_list, 2, PyObject_Str(exceptions[2]));
    Py_DECREF(exceptions[2]);
    PyList_SET_ITEM(error_list, 3, PyObject_Str(exceptions[3]));
    Py_DECREF(exceptions[3]);
    PyList_SET_ITEM(error_list, 4, PyObject_Str(exceptions[4]));
    Py_DECREF(exceptions[4]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return NULL;
}


PyObject *
_wrap_PyNs3PointToPointHelper_EnableAsciiAll__0(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *prefix;
    Py_ssize_t prefix_len;
    const char *keywords[] = {"prefix", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &prefix, &prefix_len)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    self->obj->EnableAsciiAll(std::string(prefix, prefix_len));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3PointToPointHelper_EnableAsciiAll__1(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3OutputStreamWrapper *stream;
    ns3::OutputStreamWrapper *stream_ptr;
    const char *keywords[] = {"stream", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3OutputStreamWrapper_Type, &stream)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    stream_ptr = (stream ? stream->obj : NULL);
    self->obj->EnableAsciiAll(ns3::Ptr< ns3::OutputStreamWrapper  > (stream_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject * _wrap_PyNs3PointToPointHelper_EnableAsciiAll(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3PointToPointHelper_EnableAsciiAll__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3PointToPointHelper_EnableAsciiAll__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return NULL;
}


PyObject *
_wrap_PyNs3PointToPointHelper_EnablePcap__0(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *prefix;
    Py_ssize_t prefix_len;
    PyNs3NetDevice *nd;
    ns3::NetDevice *nd_ptr;
    bool promiscuous;
    PyObject *py_promiscuous = NULL;
    bool explicitFilename;
    PyObject *py_explicitFilename = NULL;
    const char *keywords[] = {"prefix", "nd", "promiscuous", "explicitFilename", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!|OO", (char **) keywords, &prefix, &prefix_len, &PyNs3NetDevice_Type, &nd, &py_promiscuous, &py_explicitFilename)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    nd_ptr = (nd ? nd->obj : NULL);
    promiscuous = py_promiscuous? (bool) PyObject_IsTrue(py_promiscuous) : false;
    explicitFilename = py_explicitFilename? (bool) PyObject_IsTrue(py_explicitFilename) : false;
    self->obj->EnablePcap(std::string(prefix, prefix_len), ns3::Ptr< ns3::NetDevice  > (nd_ptr), promiscuous, explicitFilename);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3PointToPointHelper_EnablePcap__1(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *prefix;
    Py_ssize_t prefix_len;
    const char *ndName;
    Py_ssize_t ndName_len;
    bool promiscuous;
    PyObject *py_promiscuous = NULL;
    bool explicitFilename;
    PyObject *py_explicitFilename = NULL;
    const char *keywords[] = {"prefix", "ndName", "promiscuous", "explicitFilename", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#s#|OO", (char **) keywords, &prefix, &prefix_len, &ndName, &ndName_len, &py_promiscuous, &py_explicitFilename)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    promiscuous = py_promiscuous? (bool) PyObject_IsTrue(py_promiscuous) : false;
    explicitFilename = py_explicitFilename? (bool) PyObject_IsTrue(py_explicitFilename) : false;
    self->obj->EnablePcap(std::string(prefix, prefix_len), std::string(ndName, ndName_len), promiscuous, explicitFilename);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3PointToPointHelper_EnablePcap__2(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *prefix;
    Py_ssize_t prefix_len;
    PyNs3NetDeviceContainer *d;
    bool promiscuous;
    PyObject *py_promiscuous = NULL;
    const char *keywords[] = {"prefix", "d", "promiscuous", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!|O", (char **) keywords, &prefix, &prefix_len, &PyNs3NetDeviceContainer_Type, &d, &py_promiscuous)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    promiscuous = py_promiscuous? (bool) PyObject_IsTrue(py_promiscuous) : false;
    self->obj->EnablePcap(std::string(prefix, prefix_len), *((PyNs3NetDeviceContainer *) d)->obj, promiscuous);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3PointToPointHelper_EnablePcap__3(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *prefix;
    Py_ssize_t prefix_len;
    PyNs3NodeContainer *n;
    bool promiscuous;
    PyObject *py_promiscuous = NULL;
    const char *keywords[] = {"prefix", "n", "promiscuous", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!|O", (char **) keywords, &prefix, &prefix_len, &PyNs3NodeContainer_Type, &n, &py_promiscuous)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    promiscuous = py_promiscuous? (bool) PyObject_IsTrue(py_promiscuous) : false;
    self->obj->EnablePcap(std::string(prefix, prefix_len), *((PyNs3NodeContainer *) n)->obj, promiscuous);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3PointToPointHelper_EnablePcap__4(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *prefix;
    Py_ssize_t prefix_len;
    unsigned int nodeid;
    unsigned int deviceid;
    bool promiscuous;
    PyObject *py_promiscuous = NULL;
    const char *keywords[] = {"prefix", "nodeid", "deviceid", "promiscuous", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#II|O", (char **) keywords, &prefix, &prefix_len, &nodeid, &deviceid, &py_promiscuous)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    promiscuous = py_promiscuous? (bool) PyObject_IsTrue(py_promiscuous) : false;
    self->obj->EnablePcap(std::string(prefix, prefix_len), nodeid, deviceid, promiscuous);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject * _wrap_PyNs3PointToPointHelper_EnablePcap(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[5] = {0,};
    retval = _wrap_PyNs3PointToPointHelper_EnablePcap__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3PointToPointHelper_EnablePcap__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    retval = _wrap_PyNs3PointToPointHelper_EnablePcap__2(self, args, kwargs, &exceptions[2]);
    if (!exceptions[2]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        return retval;
    }
    retval = _wrap_PyNs3PointToPointHelper_EnablePcap__3(self, args, kwargs, &exceptions[3]);
    if (!exceptions[3]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        Py_DECREF(exceptions[2]);
        return retval;
    }
    retval = _wrap_PyNs3PointToPointHelper_EnablePcap__4(self, args, kwargs, &exceptions[4]);
    if (!exceptions[4]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        Py_DECREF(exceptions[2]);
        Py_DECREF(exceptions[3]);
        return retval;
    }
    error_list = PyList_New(5);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyList_SET_ITEM(error_list, 2, PyObject_Str(exceptions[2]));
    Py_DECREF(exceptions[2]);
    PyList_SET_ITEM(error_list, 3, PyObject_Str(exceptions[3]));
    Py_DECREF(exceptions[3]);
    PyList_SET_ITEM(error_list, 4, PyObject_Str(exceptions[4]));
    Py_DECREF(exceptions[4]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return NULL;
}


PyObject *
_wrap_PyNs3PointToPointHelper_EnableAscii__0(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *prefix;
    Py_ssize_t prefix_len;
    PyNs3NetDevice *nd;
    ns3::NetDevice *nd_ptr;
    bool explicitFilename;
    PyObject *py_explicitFilename = NULL;
    const char *keywords[] = {"prefix", "nd", "explicitFilename", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!|O", (char **) keywords, &prefix, &prefix_len, &PyNs3NetDevice_Type, &nd, &py_explicitFilename)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    nd_ptr = (nd ? nd->obj : NULL);
    explicitFilename = py_explicitFilename? (bool) PyObject_IsTrue(py_explicitFilename) : false;
    self->obj->EnableAscii(std::string(prefix, prefix_len), ns3::Ptr< ns3::NetDevice  > (nd_ptr), explicitFilename);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3PointToPointHelper_EnableAscii__1(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3OutputStreamWrapper *stream;
    ns3::OutputStreamWrapper *stream_ptr;
    PyNs3NetDevice *nd;
    ns3::NetDevice *nd_ptr;
    const char *keywords[] = {"stream", "nd", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!", (char **) keywords, &PyNs3OutputStreamWrapper_Type, &stream, &PyNs3NetDevice_Type, &nd)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    stream_ptr = (stream ? stream->obj : NULL);
    nd_ptr = (nd ? nd->obj : NULL);
    self->obj->EnableAscii(ns3::Ptr< ns3::OutputStreamWrapper  > (stream_ptr), ns3::Ptr< ns3::NetDevice  > (nd_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3PointToPointHelper_EnableAscii__2(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *prefix;
    Py_ssize_t prefix_len;
    const char *ndName;
    Py_ssize_t ndName_len;
    bool explicitFilename;
    PyObject *py_explicitFilename = NULL;
    const char *keywords[] = {"prefix", "ndName", "explicitFilename", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#s#|O", (char **) keywords, &prefix, &prefix_len, &ndName, &ndName_len, &py_explicitFilename)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    explicitFilename = py_explicitFilename? (bool) PyObject_IsTrue(py_explicitFilename) : false;
    self->obj->EnableAscii(std::string(prefix, prefix_len), std::string(ndName, ndName_len), explicitFilename);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3PointToPointHelper_EnableAscii__3(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3OutputStreamWrapper *stream;
    ns3::OutputStreamWrapper *stream_ptr;
    const char *ndName;
    Py_ssize_t ndName_len;
    const char *keywords[] = {"stream", "ndName", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!s#", (char **) keywords, &PyNs3OutputStreamWrapper_Type, &stream, &ndName, &ndName_len)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    stream_ptr = (stream ? stream->obj : NULL);
    self->obj->EnableAscii(ns3::Ptr< ns3::OutputStreamWrapper  > (stream_ptr), std::string(ndName, ndName_len));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3PointToPointHelper_EnableAscii__4(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *prefix;
    Py_ssize_t prefix_len;
    PyNs3NetDeviceContainer *d;
    const char *keywords[] = {"prefix", "d", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!", (char **) keywords, &prefix, &prefix_len, &PyNs3NetDeviceContainer_Type, &d)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    self->obj->EnableAscii(std::string(prefix, prefix_len), *((PyNs3NetDeviceContainer *) d)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3PointToPointHelper_EnableAscii__5(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3OutputStreamWrapper *stream;
    ns3::OutputStreamWrapper *stream_ptr;
    PyNs3NetDeviceContainer *d;
    const char *keywords[] = {"stream", "d", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!", (char **) keywords, &PyNs3OutputStreamWrapper_Type, &stream, &PyNs3NetDeviceContainer_Type, &d)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    stream_ptr = (stream ? stream->obj : NULL);
    self->obj->EnableAscii(ns3::Ptr< ns3::OutputStreamWrapper  > (stream_ptr), *((PyNs3NetDeviceContainer *) d)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3PointToPointHelper_EnableAscii__6(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *prefix;
    Py_ssize_t prefix_len;
    PyNs3NodeContainer *n;
    const char *keywords[] = {"prefix", "n", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!", (char **) keywords, &prefix, &prefix_len, &PyNs3NodeContainer_Type, &n)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    self->obj->EnableAscii(std::string(prefix, prefix_len), *((PyNs3NodeContainer *) n)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3PointToPointHelper_EnableAscii__7(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3OutputStreamWrapper *stream;
    ns3::OutputStreamWrapper *stream_ptr;
    PyNs3NodeContainer *n;
    const char *keywords[] = {"stream", "n", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!", (char **) keywords, &PyNs3OutputStreamWrapper_Type, &stream, &PyNs3NodeContainer_Type, &n)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    stream_ptr = (stream ? stream->obj : NULL);
    self->obj->EnableAscii(ns3::Ptr< ns3::OutputStreamWrapper  > (stream_ptr), *((PyNs3NodeContainer *) n)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3PointToPointHelper_EnableAscii__8(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *prefix;
    Py_ssize_t prefix_len;
    unsigned int nodeid;
    unsigned int deviceid;
    bool explicitFilename;
    PyObject *py_explicitFilename;
    const char *keywords[] = {"prefix", "nodeid", "deviceid", "explicitFilename", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#IIO", (char **) keywords, &prefix, &prefix_len, &nodeid, &deviceid, &py_explicitFilename)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    explicitFilename = (bool) PyObject_IsTrue(py_explicitFilename);
    self->obj->EnableAscii(std::string(prefix, prefix_len), nodeid, deviceid, explicitFilename);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3PointToPointHelper_EnableAscii__9(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3OutputStreamWrapper *stream;
    ns3::OutputStreamWrapper *stream_ptr;
    unsigned int nodeid;
    unsigned int deviceid;
    const char *keywords[] = {"stream", "nodeid", "deviceid", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!II", (char **) keywords, &PyNs3OutputStreamWrapper_Type, &stream, &nodeid, &deviceid)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    stream_ptr = (stream ? stream->obj : NULL);
    self->obj->EnableAscii(ns3::Ptr< ns3::OutputStreamWrapper  > (stream_ptr), nodeid, deviceid);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject * _wrap_PyNs3PointToPointHelper_EnableAscii(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[10] = {0,};
    retval = _wrap_PyNs3PointToPointHelper_EnableAscii__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3PointToPointHelper_EnableAscii__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    retval = _wrap_PyNs3PointToPointHelper_EnableAscii__2(self, args, kwargs, &exceptions[2]);
    if (!exceptions[2]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        return retval;
    }
    retval = _wrap_PyNs3PointToPointHelper_EnableAscii__3(self, args, kwargs, &exceptions[3]);
    if (!exceptions[3]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        Py_DECREF(exceptions[2]);
        return retval;
    }
    retval = _wrap_PyNs3PointToPointHelper_EnableAscii__4(self, args, kwargs, &exceptions[4]);
    if (!exceptions[4]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        Py_DECREF(exceptions[2]);
        Py_DECREF(exceptions[3]);
        return retval;
    }
    retval = _wrap_PyNs3PointToPointHelper_EnableAscii__5(self, args, kwargs, &exceptions[5]);
    if (!exceptions[5]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        Py_DECREF(exceptions[2]);
        Py_DECREF(exceptions[3]);
        Py_DECREF(exceptions[4]);
        return retval;
    }
    retval = _wrap_PyNs3PointToPointHelper_EnableAscii__6(self, args, kwargs, &exceptions[6]);
    if (!exceptions[6]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        Py_DECREF(exceptions[2]);
        Py_DECREF(exceptions[3]);
        Py_DECREF(exceptions[4]);
        Py_DECREF(exceptions[5]);
        return retval;
    }
    retval = _wrap_PyNs3PointToPointHelper_EnableAscii__7(self, args, kwargs, &exceptions[7]);
    if (!exceptions[7]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        Py_DECREF(exceptions[2]);
        Py_DECREF(exceptions[3]);
        Py_DECREF(exceptions[4]);
        Py_DECREF(exceptions[5]);
        Py_DECREF(exceptions[6]);
        return retval;
    }
    retval = _wrap_PyNs3PointToPointHelper_EnableAscii__8(self, args, kwargs, &exceptions[8]);
    if (!exceptions[8]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        Py_DECREF(exceptions[2]);
        Py_DECREF(exceptions[3]);
        Py_DECREF(exceptions[4]);
        Py_DECREF(exceptions[5]);
        Py_DECREF(exceptions[6]);
        Py_DECREF(exceptions[7]);
        return retval;
    }
    retval = _wrap_PyNs3PointToPointHelper_EnableAscii__9(self, args, kwargs, &exceptions[9]);
    if (!exceptions[9]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        Py_DECREF(exceptions[2]);
        Py_DECREF(exceptions[3]);
        Py_DECREF(exceptions[4]);
        Py_DECREF(exceptions[5]);
        Py_DECREF(exceptions[6]);
        Py_DECREF(exceptions[7]);
        Py_DECREF(exceptions[8]);
        return retval;
    }
    error_list = PyList_New(10);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyList_SET_ITEM(error_list, 2, PyObject_Str(exceptions[2]));
    Py_DECREF(exceptions[2]);
    PyList_SET_ITEM(error_list, 3, PyObject_Str(exceptions[3]));
    Py_DECREF(exceptions[3]);
    PyList_SET_ITEM(error_list, 4, PyObject_Str(exceptions[4]));
    Py_DECREF(exceptions[4]);
    PyList_SET_ITEM(error_list, 5, PyObject_Str(exceptions[5]));
    Py_DECREF(exceptions[5]);
    PyList_SET_ITEM(error_list, 6, PyObject_Str(exceptions[6]));
    Py_DECREF(exceptions[6]);
    PyList_SET_ITEM(error_list, 7, PyObject_Str(exceptions[7]));
    Py_DECREF(exceptions[7]);
    PyList_SET_ITEM(error_list, 8, PyObject_Str(exceptions[8]));
    Py_DECREF(exceptions[8]);
    PyList_SET_ITEM(error_list, 9, PyObject_Str(exceptions[9]));
    Py_DECREF(exceptions[9]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return NULL;
}

PyObject *
_wrap_PyNs3PointToPointHelper_EnablePcapAll(PyNs3PointToPointHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *prefix;
    Py_ssize_t prefix_len;
    bool promiscuous;
    PyObject *py_promiscuous = NULL;
    const char *keywords[] = {"prefix", "promiscuous", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#|O", (char **) keywords, &prefix, &prefix_len, &py_promiscuous)) {
        return NULL;
    }
    promiscuous = py_promiscuous? (bool) PyObject_IsTrue(py_promiscuous) : false;
    self->obj->EnablePcapAll(std::string(prefix, prefix_len), promiscuous);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3PointToPointHelper__copy__(PyNs3PointToPointHelper *self)
{

    PyNs3PointToPointHelper *py_copy;
    py_copy = PyObject_GC_New(PyNs3PointToPointHelper, &PyNs3PointToPointHelper_Type);
    py_copy->obj = new ns3::PointToPointHelper(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3PcapHelperForDevice_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3PointToPointHelper_methods[] = {
    {(char *) "SetChannelAttribute", (PyCFunction) _wrap_PyNs3PointToPointHelper_SetChannelAttribute, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetDeviceAttribute", (PyCFunction) _wrap_PyNs3PointToPointHelper_SetDeviceAttribute, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetQueue", (PyCFunction) _wrap_PyNs3PointToPointHelper_SetQueue, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Install", (PyCFunction) _wrap_PyNs3PointToPointHelper_Install, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "EnableAsciiAll", (PyCFunction) _wrap_PyNs3PointToPointHelper_EnableAsciiAll, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "EnablePcap", (PyCFunction) _wrap_PyNs3PointToPointHelper_EnablePcap, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "EnableAscii", (PyCFunction) _wrap_PyNs3PointToPointHelper_EnableAscii, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "EnablePcapAll", (PyCFunction) _wrap_PyNs3PointToPointHelper_EnablePcapAll, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3PointToPointHelper__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3PointToPointHelper__tp_clear(PyNs3PointToPointHelper *self)
{
    Py_CLEAR(self->inst_dict);
        ns3::PointToPointHelper *tmp = self->obj;
    self->obj = NULL;
    if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
        delete tmp;
    }
}


static int
PyNs3PointToPointHelper__tp_traverse(PyNs3PointToPointHelper *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj).name() == typeid(PyNs3PointToPointHelper__PythonHelper).name() )
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3PointToPointHelper__tp_dealloc(PyNs3PointToPointHelper *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3PcapHelperForDevice_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3PcapHelperForDevice_wrapper_registry.end()) {
        PyNs3PcapHelperForDevice_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3PointToPointHelper__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3PointToPointHelper__tp_richcompare (PyNs3PointToPointHelper *PYBINDGEN_UNUSED(self), PyNs3PointToPointHelper *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3PointToPointHelper_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3PointToPointHelper_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "point_to_point.PointToPointHelper",            /* tp_name */
    sizeof(PyNs3PointToPointHelper),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3PointToPointHelper__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3PointToPointHelper__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3PointToPointHelper__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3PointToPointHelper__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3PointToPointHelper_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3PointToPointHelper, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3PointToPointHelper__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};





static int
_wrap_PyNs3PppHeader__tp_init__0(PyNs3PppHeader *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3PppHeader *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3PppHeader_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::PppHeader(*((PyNs3PppHeader *) arg0)->obj);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

static int
_wrap_PyNs3PppHeader__tp_init__1(PyNs3PppHeader *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::PppHeader();
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

int _wrap_PyNs3PppHeader__tp_init(PyNs3PppHeader *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3PppHeader__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3PppHeader__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3PppHeader_Deserialize(PyNs3PppHeader *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint32_t retval;
    PyNs3BufferIterator *start;
    const char *keywords[] = {"start", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3BufferIterator_Type, &start)) {
        return NULL;
    }
    retval = self->obj->Deserialize(*((PyNs3BufferIterator *) start)->obj);
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3PppHeader_SetProtocol(PyNs3PppHeader *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int protocol;
    const char *keywords[] = {"protocol", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &protocol)) {
        return NULL;
    }
    if (protocol > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    self->obj->SetProtocol(protocol);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3PppHeader_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::PppHeader::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3PppHeader_Serialize(PyNs3PppHeader *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3BufferIterator *start;
    const char *keywords[] = {"start", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3BufferIterator_Type, &start)) {
        return NULL;
    }
    self->obj->Serialize(*((PyNs3BufferIterator *) start)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3PppHeader_GetProtocol(PyNs3PppHeader *self)
{
    PyObject *py_retval;
    uint16_t retval;
    
    retval = self->obj->GetProtocol();
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3PppHeader_GetInstanceTypeId(PyNs3PppHeader *self)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = self->obj->GetInstanceTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3PppHeader_GetSerializedSize(PyNs3PppHeader *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetSerializedSize();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


static PyObject*
_wrap_PyNs3PppHeader__copy__(PyNs3PppHeader *self)
{

    PyNs3PppHeader *py_copy;
    py_copy = PyObject_GC_New(PyNs3PppHeader, &PyNs3PppHeader_Type);
    py_copy->obj = new ns3::PppHeader(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3PppHeader_methods[] = {
    {(char *) "Deserialize", (PyCFunction) _wrap_PyNs3PppHeader_Deserialize, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetProtocol", (PyCFunction) _wrap_PyNs3PppHeader_SetProtocol, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3PppHeader_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Serialize", (PyCFunction) _wrap_PyNs3PppHeader_Serialize, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetProtocol", (PyCFunction) _wrap_PyNs3PppHeader_GetProtocol, METH_NOARGS, NULL },
    {(char *) "GetInstanceTypeId", (PyCFunction) _wrap_PyNs3PppHeader_GetInstanceTypeId, METH_NOARGS, NULL },
    {(char *) "GetSerializedSize", (PyCFunction) _wrap_PyNs3PppHeader_GetSerializedSize, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3PppHeader__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3PppHeader__tp_clear(PyNs3PppHeader *self)
{
    Py_CLEAR(self->inst_dict);
        ns3::PppHeader *tmp = self->obj;
    self->obj = NULL;
    if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
        delete tmp;
    }
}


static int
PyNs3PppHeader__tp_traverse(PyNs3PppHeader *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    return 0;
}


static void
_wrap_PyNs3PppHeader__tp_dealloc(PyNs3PppHeader *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3PppHeader__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3PppHeader__tp_richcompare (PyNs3PppHeader *PYBINDGEN_UNUSED(self), PyNs3PppHeader *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3PppHeader_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3PppHeader_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "point_to_point.PppHeader",            /* tp_name */
    sizeof(PyNs3PppHeader),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3PppHeader__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3PppHeader__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3PppHeader__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3PppHeader__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3PppHeader_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3PppHeader, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3PppHeader__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




PyObject *
PyNs3PointToPointChannel__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3PointToPointChannel *self)
{
    PyObject *py_retval;
    PyNs3PointToPointChannel__PythonHelper *helper = dynamic_cast< PyNs3PointToPointChannel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyConstructionCompleted of class ObjectBase is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyConstructionCompleted__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3PointToPointChannel__PythonHelper::_wrap_GetDelay(PyNs3PointToPointChannel *self)
{
    PyObject *py_retval;
    PyNs3PointToPointChannel__PythonHelper *helper = dynamic_cast< PyNs3PointToPointChannel__PythonHelper* >(self->obj);
    PyNs3Time *py_Time;
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method GetDelay of class PointToPointChannel is protected and can only be called by a subclass");
        return NULL;
    }
    ns3::Time retval = helper->GetDelay__parent_caller();
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}

PyObject *
PyNs3PointToPointChannel__PythonHelper::_wrap_DoDispose(PyNs3PointToPointChannel *self)
{
    PyObject *py_retval;
    PyNs3PointToPointChannel__PythonHelper *helper = dynamic_cast< PyNs3PointToPointChannel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3PointToPointChannel__PythonHelper::_wrap_TransmitStart(PyNs3PointToPointChannel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    PyNs3Packet *p;
    ns3::Packet *p_ptr;
    PyNs3PointToPointNetDevice *src;
    ns3::PointToPointNetDevice *src_ptr;
    PyNs3Time *txTime;
    PyNs3PointToPointChannel__PythonHelper *helper = dynamic_cast< PyNs3PointToPointChannel__PythonHelper* >(self->obj);
    const char *keywords[] = {"p", "src", "txTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!O!", (char **) keywords, &PyNs3Packet_Type, &p, &PyNs3PointToPointNetDevice_Type, &src, &PyNs3Time_Type, &txTime)) {
        return NULL;
    }
    p_ptr = (p ? p->obj : NULL);
    src_ptr = (src ? src->obj : NULL);
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method TransmitStart of class PointToPointChannel is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->TransmitStart__parent_caller(ns3::Ptr< ns3::Packet  > (p_ptr), ns3::Ptr< ns3::PointToPointNetDevice  > (src_ptr), *((PyNs3Time *) txTime)->obj);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}

PyObject *
PyNs3PointToPointChannel__PythonHelper::_wrap_NotifyNewAggregate(PyNs3PointToPointChannel *self)
{
    PyObject *py_retval;
    PyNs3PointToPointChannel__PythonHelper *helper = dynamic_cast< PyNs3PointToPointChannel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyNewAggregate of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyNewAggregate__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3PointToPointChannel__PythonHelper::_wrap_GetInstanceTypeId(PyNs3PointToPointChannel *self)
{
    PyObject *py_retval;
    PyNs3PointToPointChannel__PythonHelper *helper = dynamic_cast< PyNs3PointToPointChannel__PythonHelper* >(self->obj);
    PyNs3TypeId *py_TypeId;
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method GetInstanceTypeId of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    ns3::TypeId retval = helper->GetInstanceTypeId__parent_caller();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}

PyObject *
PyNs3PointToPointChannel__PythonHelper::_wrap_DoStart(PyNs3PointToPointChannel *self)
{
    PyObject *py_retval;
    PyNs3PointToPointChannel__PythonHelper *helper = dynamic_cast< PyNs3PointToPointChannel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoStart of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoStart__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3PointToPointChannel__PythonHelper::_wrap_GetNDevices(PyNs3PointToPointChannel *self)
{
    PyObject *py_retval;
    uint32_t retval;
    PyNs3PointToPointChannel__PythonHelper *helper = dynamic_cast< PyNs3PointToPointChannel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method GetNDevices of class PointToPointChannel is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->GetNDevices__parent_caller();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}

PyObject *
PyNs3PointToPointChannel__PythonHelper::_wrap_IsInitialized(PyNs3PointToPointChannel *self)
{
    PyObject *py_retval;
    bool retval;
    PyNs3PointToPointChannel__PythonHelper *helper = dynamic_cast< PyNs3PointToPointChannel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method IsInitialized of class PointToPointChannel is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->IsInitialized__parent_caller();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}

PyObject *
PyNs3PointToPointChannel__PythonHelper::_wrap_GetDestination(PyNs3PointToPointChannel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::PointToPointNetDevice > retval;
    unsigned int i;
    PyNs3PointToPointChannel__PythonHelper *helper = dynamic_cast< PyNs3PointToPointChannel__PythonHelper* >(self->obj);
    const char *keywords[] = {"i", NULL};
    PyNs3PointToPointNetDevice *py_PointToPointNetDevice;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &i)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method GetDestination of class PointToPointChannel is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->GetDestination__parent_caller(i);
    if (!(const_cast<ns3::PointToPointNetDevice *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::PointToPointNetDevice *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
        py_PointToPointNetDevice = NULL;
    } else {
        py_PointToPointNetDevice = (PyNs3PointToPointNetDevice *) wrapper_lookup_iter->second;
        Py_INCREF(py_PointToPointNetDevice);
    }
    
    if (py_PointToPointNetDevice == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::PointToPointNetDevice *> (ns3::PeekPointer (retval)))), &PyNs3PointToPointNetDevice_Type);
        py_PointToPointNetDevice = PyObject_GC_New(PyNs3PointToPointNetDevice, wrapper_type);
        py_PointToPointNetDevice->inst_dict = NULL;
        py_PointToPointNetDevice->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::PointToPointNetDevice *> (ns3::PeekPointer (retval))->Ref();
        py_PointToPointNetDevice->obj = const_cast<ns3::PointToPointNetDevice *> (ns3::PeekPointer (retval));
        PyNs3ObjectBase_wrapper_registry[(void *) py_PointToPointNetDevice->obj] = (PyObject *) py_PointToPointNetDevice;
    }
    py_retval = Py_BuildValue((char *) "N", py_PointToPointNetDevice);
    return py_retval;
}

PyObject *
PyNs3PointToPointChannel__PythonHelper::_wrap_GetDevice(PyNs3PointToPointChannel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::NetDevice > retval;
    unsigned int i;
    PyNs3PointToPointChannel__PythonHelper *helper = dynamic_cast< PyNs3PointToPointChannel__PythonHelper* >(self->obj);
    const char *keywords[] = {"i", NULL};
    PyNs3NetDevice *py_NetDevice;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &i)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method GetDevice of class PointToPointChannel is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->GetDevice__parent_caller(i);
    if (!(const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
        py_NetDevice = NULL;
    } else {
        py_NetDevice = (PyNs3NetDevice *) wrapper_lookup_iter->second;
        Py_INCREF(py_NetDevice);
    }
    
    if (py_NetDevice == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval)))), &PyNs3NetDevice_Type);
        py_NetDevice = PyObject_GC_New(PyNs3NetDevice, wrapper_type);
        py_NetDevice->inst_dict = NULL;
        py_NetDevice->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval))->Ref();
        py_NetDevice->obj = const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval));
        PyNs3ObjectBase_wrapper_registry[(void *) py_NetDevice->obj] = (PyObject *) py_NetDevice;
    }
    py_retval = Py_BuildValue((char *) "N", py_NetDevice);
    return py_retval;
}

PyObject *
PyNs3PointToPointChannel__PythonHelper::_wrap_GetSource(PyNs3PointToPointChannel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::PointToPointNetDevice > retval;
    unsigned int i;
    PyNs3PointToPointChannel__PythonHelper *helper = dynamic_cast< PyNs3PointToPointChannel__PythonHelper* >(self->obj);
    const char *keywords[] = {"i", NULL};
    PyNs3PointToPointNetDevice *py_PointToPointNetDevice;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &i)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method GetSource of class PointToPointChannel is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->GetSource__parent_caller(i);
    if (!(const_cast<ns3::PointToPointNetDevice *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::PointToPointNetDevice *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
        py_PointToPointNetDevice = NULL;
    } else {
        py_PointToPointNetDevice = (PyNs3PointToPointNetDevice *) wrapper_lookup_iter->second;
        Py_INCREF(py_PointToPointNetDevice);
    }
    
    if (py_PointToPointNetDevice == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::PointToPointNetDevice *> (ns3::PeekPointer (retval)))), &PyNs3PointToPointNetDevice_Type);
        py_PointToPointNetDevice = PyObject_GC_New(PyNs3PointToPointNetDevice, wrapper_type);
        py_PointToPointNetDevice->inst_dict = NULL;
        py_PointToPointNetDevice->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::PointToPointNetDevice *> (ns3::PeekPointer (retval))->Ref();
        py_PointToPointNetDevice->obj = const_cast<ns3::PointToPointNetDevice *> (ns3::PeekPointer (retval));
        PyNs3ObjectBase_wrapper_registry[(void *) py_PointToPointNetDevice->obj] = (PyObject *) py_PointToPointNetDevice;
    }
    py_retval = Py_BuildValue((char *) "N", py_PointToPointNetDevice);
    return py_retval;
}

ns3::Ptr< ns3::NetDevice >
PyNs3PointToPointChannel__PythonHelper::GetDevice(uint32_t i) const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::PointToPointChannel *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::NetDevice > retval;
    PyNs3NetDevice *tmp_NetDevice;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_GetDevice"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::PointToPointChannel::GetDevice(i);
    }
    self_obj_before = reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj = const_cast< ns3::PointToPointChannel* >((const ns3::PointToPointChannel*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_GetDevice", (char *) "N", PyLong_FromUnsignedLong(i));
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::PointToPointChannel::GetDevice(i);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3NetDevice_Type, &tmp_NetDevice)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::PointToPointChannel::GetDevice(i);
    }
    // dangerous!
    retval = ns3::Ptr< ns3::NetDevice  > (tmp_NetDevice->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

uint32_t
PyNs3PointToPointChannel__PythonHelper::GetNDevices() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::PointToPointChannel *self_obj_before;
    PyObject *py_retval;
    uint32_t retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_GetNDevices"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::PointToPointChannel::GetNDevices();
    }
    self_obj_before = reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj = const_cast< ns3::PointToPointChannel* >((const ns3::PointToPointChannel*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_GetNDevices", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::PointToPointChannel::GetNDevices();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "I", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::PointToPointChannel::GetNDevices();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

bool
PyNs3PointToPointChannel__PythonHelper::TransmitStart(ns3::Ptr< ns3::Packet > p, ns3::Ptr< ns3::PointToPointNetDevice > src, ns3::Time txTime)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::PointToPointChannel *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyNs3Packet *py_Packet;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    PyNs3PointToPointNetDevice *py_PointToPointNetDevice;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter2;
    PyTypeObject *wrapper_type2 = 0;
    PyNs3Time *py_Time;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_TransmitStart"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::PointToPointChannel::TransmitStart(p, src, txTime);
    }
    self_obj_before = reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj = (ns3::PointToPointChannel*) this;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::Packet *> (ns3::PeekPointer (p)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_Packet = NULL;
    } else {
        py_Packet = (PyNs3Packet *) wrapper_lookup_iter->second;
        Py_INCREF(py_Packet);
    }
    
    if (py_Packet == NULL)
    {
        wrapper_type = PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map.lookup_wrapper(typeid(*const_cast<ns3::Packet *> (ns3::PeekPointer (p))), &PyNs3Packet_Type);
        py_Packet = PyObject_New(PyNs3Packet, wrapper_type);
        py_Packet->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::Packet *> (ns3::PeekPointer (p))->Ref();
        py_Packet->obj = const_cast<ns3::Packet *> (ns3::PeekPointer (p));
        PyNs3Empty_wrapper_registry[(void *) py_Packet->obj] = (PyObject *) py_Packet;
    }
    wrapper_lookup_iter2 = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::PointToPointNetDevice *> (ns3::PeekPointer (src)));
    if (wrapper_lookup_iter2 == PyNs3ObjectBase_wrapper_registry.end()) {
        py_PointToPointNetDevice = NULL;
    } else {
        py_PointToPointNetDevice = (PyNs3PointToPointNetDevice *) wrapper_lookup_iter2->second;
        Py_INCREF(py_PointToPointNetDevice);
    }
    
    if (py_PointToPointNetDevice == NULL)
    {
        wrapper_type2 = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::PointToPointNetDevice *> (ns3::PeekPointer (src))), &PyNs3PointToPointNetDevice_Type);
        py_PointToPointNetDevice = PyObject_GC_New(PyNs3PointToPointNetDevice, wrapper_type2);
        py_PointToPointNetDevice->inst_dict = NULL;
        py_PointToPointNetDevice->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::PointToPointNetDevice *> (ns3::PeekPointer (src))->Ref();
        py_PointToPointNetDevice->obj = const_cast<ns3::PointToPointNetDevice *> (ns3::PeekPointer (src));
        PyNs3ObjectBase_wrapper_registry[(void *) py_PointToPointNetDevice->obj] = (PyObject *) py_PointToPointNetDevice;
    }
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(txTime);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_TransmitStart", (char *) "NNN", py_Packet, py_PointToPointNetDevice, py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::PointToPointChannel::TransmitStart(p, src, txTime);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::PointToPointChannel::TransmitStart(p, src, txTime);
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::TypeId
PyNs3PointToPointChannel__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = const_cast< ns3::Object* >((const ns3::Object*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3PointToPointChannel__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::DoDispose();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3PointToPointChannel__PythonHelper::DoStart()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_DoStart"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::DoStart();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_DoStart", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3PointToPointChannel__PythonHelper::NotifyNewAggregate()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_NotifyNewAggregate"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::NotifyNewAggregate();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_NotifyNewAggregate", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3PointToPointChannel__PythonHelper::NotifyConstructionCompleted()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ObjectBase *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_NotifyConstructionCompleted"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::ObjectBase::NotifyConstructionCompleted();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = (ns3::ObjectBase*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_NotifyConstructionCompleted", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


static int
_wrap_PyNs3PointToPointChannel__tp_init__0(PyNs3PointToPointChannel *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3PointToPointChannel *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3PointToPointChannel_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3PointToPointChannel_Type)
    {
        self->obj = new PyNs3PointToPointChannel__PythonHelper(*((PyNs3PointToPointChannel *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3PointToPointChannel__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::PointToPointChannel(*((PyNs3PointToPointChannel *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3PointToPointChannel__tp_init__1(PyNs3PointToPointChannel *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3PointToPointChannel_Type)
    {
        self->obj = new PyNs3PointToPointChannel__PythonHelper();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3PointToPointChannel__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::PointToPointChannel();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3PointToPointChannel__tp_init(PyNs3PointToPointChannel *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3PointToPointChannel__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3PointToPointChannel__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3PointToPointChannel_TransmitStart(PyNs3PointToPointChannel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    PyNs3Packet *p;
    ns3::Packet *p_ptr;
    PyNs3PointToPointNetDevice *src;
    ns3::PointToPointNetDevice *src_ptr;
    PyNs3Time *txTime;
    const char *keywords[] = {"p", "src", "txTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!O!", (char **) keywords, &PyNs3Packet_Type, &p, &PyNs3PointToPointNetDevice_Type, &src, &PyNs3Time_Type, &txTime)) {
        return NULL;
    }
    p_ptr = (p ? p->obj : NULL);
    src_ptr = (src ? src->obj : NULL);
    retval = self->obj->TransmitStart(ns3::Ptr< ns3::Packet  > (p_ptr), ns3::Ptr< ns3::PointToPointNetDevice  > (src_ptr), *((PyNs3Time *) txTime)->obj);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointChannel_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::PointToPointChannel::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointChannel_GetNDevices(PyNs3PointToPointChannel *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetNDevices();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointChannel_Attach(PyNs3PointToPointChannel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3PointToPointNetDevice *device;
    ns3::PointToPointNetDevice *device_ptr;
    const char *keywords[] = {"device", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3PointToPointNetDevice_Type, &device)) {
        return NULL;
    }
    device_ptr = (device ? device->obj : NULL);
    self->obj->Attach(ns3::Ptr< ns3::PointToPointNetDevice  > (device_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointChannel_GetPointToPointDevice(PyNs3PointToPointChannel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::PointToPointNetDevice > retval;
    unsigned int i;
    const char *keywords[] = {"i", NULL};
    PyNs3PointToPointNetDevice *py_PointToPointNetDevice;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &i)) {
        return NULL;
    }
    retval = self->obj->GetPointToPointDevice(i);
    if (!(const_cast<ns3::PointToPointNetDevice *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::PointToPointNetDevice *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
        py_PointToPointNetDevice = NULL;
    } else {
        py_PointToPointNetDevice = (PyNs3PointToPointNetDevice *) wrapper_lookup_iter->second;
        Py_INCREF(py_PointToPointNetDevice);
    }
    
    if (py_PointToPointNetDevice == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::PointToPointNetDevice *> (ns3::PeekPointer (retval)))), &PyNs3PointToPointNetDevice_Type);
        py_PointToPointNetDevice = PyObject_GC_New(PyNs3PointToPointNetDevice, wrapper_type);
        py_PointToPointNetDevice->inst_dict = NULL;
        py_PointToPointNetDevice->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::PointToPointNetDevice *> (ns3::PeekPointer (retval))->Ref();
        py_PointToPointNetDevice->obj = const_cast<ns3::PointToPointNetDevice *> (ns3::PeekPointer (retval));
        PyNs3ObjectBase_wrapper_registry[(void *) py_PointToPointNetDevice->obj] = (PyObject *) py_PointToPointNetDevice;
    }
    py_retval = Py_BuildValue((char *) "N", py_PointToPointNetDevice);
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointChannel_GetDevice(PyNs3PointToPointChannel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::NetDevice > retval;
    unsigned int i;
    const char *keywords[] = {"i", NULL};
    PyNs3NetDevice *py_NetDevice;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &i)) {
        return NULL;
    }
    retval = self->obj->GetDevice(i);
    if (!(const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
        py_NetDevice = NULL;
    } else {
        py_NetDevice = (PyNs3NetDevice *) wrapper_lookup_iter->second;
        Py_INCREF(py_NetDevice);
    }
    
    if (py_NetDevice == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval)))), &PyNs3NetDevice_Type);
        py_NetDevice = PyObject_GC_New(PyNs3NetDevice, wrapper_type);
        py_NetDevice->inst_dict = NULL;
        py_NetDevice->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval))->Ref();
        py_NetDevice->obj = const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval));
        PyNs3ObjectBase_wrapper_registry[(void *) py_NetDevice->obj] = (PyObject *) py_NetDevice;
    }
    py_retval = Py_BuildValue((char *) "N", py_NetDevice);
    return py_retval;
}


static PyObject*
_wrap_PyNs3PointToPointChannel__copy__(PyNs3PointToPointChannel *self)
{

    PyNs3PointToPointChannel *py_copy;
    py_copy = PyObject_GC_New(PyNs3PointToPointChannel, &PyNs3PointToPointChannel_Type);
    py_copy->obj = new ns3::PointToPointChannel(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3PointToPointChannel_methods[] = {
    {(char *) "TransmitStart", (PyCFunction) _wrap_PyNs3PointToPointChannel_TransmitStart, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3PointToPointChannel_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "GetNDevices", (PyCFunction) _wrap_PyNs3PointToPointChannel_GetNDevices, METH_NOARGS, NULL },
    {(char *) "Attach", (PyCFunction) _wrap_PyNs3PointToPointChannel_Attach, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetPointToPointDevice", (PyCFunction) _wrap_PyNs3PointToPointChannel_GetPointToPointDevice, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetDevice", (PyCFunction) _wrap_PyNs3PointToPointChannel_GetDevice, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_NotifyConstructionCompleted", (PyCFunction) PyNs3PointToPointChannel__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "_GetDelay", (PyCFunction) PyNs3PointToPointChannel__PythonHelper::_wrap_GetDelay, METH_NOARGS, NULL },
    {(char *) "_DoDispose", (PyCFunction) PyNs3PointToPointChannel__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "_TransmitStart", (PyCFunction) PyNs3PointToPointChannel__PythonHelper::_wrap_TransmitStart, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_NotifyNewAggregate", (PyCFunction) PyNs3PointToPointChannel__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "_GetInstanceTypeId", (PyCFunction) PyNs3PointToPointChannel__PythonHelper::_wrap_GetInstanceTypeId, METH_NOARGS, NULL },
    {(char *) "_DoStart", (PyCFunction) PyNs3PointToPointChannel__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "_GetNDevices", (PyCFunction) PyNs3PointToPointChannel__PythonHelper::_wrap_GetNDevices, METH_NOARGS, NULL },
    {(char *) "_IsInitialized", (PyCFunction) PyNs3PointToPointChannel__PythonHelper::_wrap_IsInitialized, METH_NOARGS, NULL },
    {(char *) "_GetDestination", (PyCFunction) PyNs3PointToPointChannel__PythonHelper::_wrap_GetDestination, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_GetDevice", (PyCFunction) PyNs3PointToPointChannel__PythonHelper::_wrap_GetDevice, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_GetSource", (PyCFunction) PyNs3PointToPointChannel__PythonHelper::_wrap_GetSource, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3PointToPointChannel__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3PointToPointChannel__tp_clear(PyNs3PointToPointChannel *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::PointToPointChannel *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3PointToPointChannel__tp_traverse(PyNs3PointToPointChannel *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj).name() == typeid(PyNs3PointToPointChannel__PythonHelper).name()  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3PointToPointChannel__tp_dealloc(PyNs3PointToPointChannel *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3PointToPointChannel__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3PointToPointChannel__tp_richcompare (PyNs3PointToPointChannel *PYBINDGEN_UNUSED(self), PyNs3PointToPointChannel *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3PointToPointChannel_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3PointToPointChannel_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "point_to_point.PointToPointChannel",            /* tp_name */
    sizeof(PyNs3PointToPointChannel),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3PointToPointChannel__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3PointToPointChannel__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3PointToPointChannel__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3PointToPointChannel__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3PointToPointChannel_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3PointToPointChannel, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3PointToPointChannel__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static int
_wrap_PyNs3PointToPointNetDevice__tp_init(PyNs3PointToPointNetDevice *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        return -1;
    }
    self->obj = new ns3::PointToPointNetDevice();
    self->obj->Ref ();
    ns3::CompleteConstruct(self->obj);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}



PyObject *
_wrap_PyNs3PointToPointNetDevice_GetMulticast__0(PyNs3PointToPointNetDevice *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3Ipv4Address *multicastGroup;
    const char *keywords[] = {"multicastGroup", NULL};
    PyNs3Address *py_Address;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Ipv4Address_Type, &multicastGroup)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    ns3::Address retval = self->obj->GetMulticast(*((PyNs3Ipv4Address *) multicastGroup)->obj);
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(retval);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = Py_BuildValue((char *) "N", py_Address);
    return py_retval;
}

PyObject *
_wrap_PyNs3PointToPointNetDevice_GetMulticast__1(PyNs3PointToPointNetDevice *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3Ipv6Address *addr;
    const char *keywords[] = {"addr", NULL};
    PyNs3Address *py_Address;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Ipv6Address_Type, &addr)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    ns3::Address retval = self->obj->GetMulticast(*((PyNs3Ipv6Address *) addr)->obj);
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(retval);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = Py_BuildValue((char *) "N", py_Address);
    return py_retval;
}

PyObject * _wrap_PyNs3PointToPointNetDevice_GetMulticast(PyNs3PointToPointNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3PointToPointNetDevice_GetMulticast__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3PointToPointNetDevice_GetMulticast__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return NULL;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_IsPointToPoint(PyNs3PointToPointNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsPointToPoint();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::PointToPointNetDevice::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_Send(PyNs3PointToPointNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    PyNs3Packet *packet;
    ns3::Packet *packet_ptr;
    PyObject *dest;
    ns3::Address dest2;
    int protocolNumber;
    const char *keywords[] = {"packet", "dest", "protocolNumber", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!Oi", (char **) keywords, &PyNs3Packet_Type, &packet, &dest, &protocolNumber)) {
        return NULL;
    }
    packet_ptr = (packet ? packet->obj : NULL);
    if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Address_Type)) {
        dest2 = *((PyNs3Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Ipv4Address_Type)) {
        dest2 = *((PyNs3Ipv4Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Ipv6Address_Type)) {
        dest2 = *((PyNs3Ipv6Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Mac48Address_Type)) {
        dest2 = *((PyNs3Mac48Address *) dest)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Address, Ipv4Address, Ipv6Address, Mac48Address), not %s", dest->ob_type->tp_name);
        return NULL;
    }
    if (protocolNumber > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    retval = self->obj->Send(ns3::Ptr< ns3::Packet  > (packet_ptr), dest2, protocolNumber);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_GetIfIndex(PyNs3PointToPointNetDevice *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetIfIndex();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_NeedsArp(PyNs3PointToPointNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->NeedsArp();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_GetChannel(PyNs3PointToPointNetDevice *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::Channel > retval;
    PyNs3Channel *py_Channel;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = self->obj->GetChannel();
    if (!(const_cast<ns3::Channel *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    if (typeid((*const_cast<ns3::Channel *> (ns3::PeekPointer (retval)))).name() == typeid(PyNs3Channel__PythonHelper).name())
    {
        py_Channel = reinterpret_cast< PyNs3Channel* >(reinterpret_cast< PyNs3Channel__PythonHelper* >(const_cast<ns3::Channel *> (ns3::PeekPointer (retval)))->m_pyself);
        py_Channel->obj = const_cast<ns3::Channel *> (ns3::PeekPointer (retval));
        Py_INCREF(py_Channel);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Channel *> (ns3::PeekPointer (retval)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Channel = NULL;
        } else {
            py_Channel = (PyNs3Channel *) wrapper_lookup_iter->second;
            Py_INCREF(py_Channel);
        }
    
        if (py_Channel == NULL) {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::Channel *> (ns3::PeekPointer (retval)))), &PyNs3Channel_Type);
            py_Channel = PyObject_GC_New(PyNs3Channel, wrapper_type);
            py_Channel->inst_dict = NULL;
            py_Channel->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Channel *> (ns3::PeekPointer (retval))->Ref();
            py_Channel->obj = const_cast<ns3::Channel *> (ns3::PeekPointer (retval));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Channel->obj] = (PyObject *) py_Channel;
        }
    }
    py_retval = Py_BuildValue((char *) "N", py_Channel);
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_SetPromiscReceiveCallback(PyNs3PointToPointNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *cb;
    ns3::Ptr<PythonCallbackImpl0> cb_cb_impl;
    const char *keywords[] = {"cb", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &cb)) {
        return NULL;
    }
    if (!PyCallable_Check(cb)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'cb' must be callbale");
        return NULL;
    }
    cb_cb_impl = ns3::Create<PythonCallbackImpl0> (cb);
    self->obj->SetPromiscReceiveCallback(ns3::Callback<bool, ns3::Ptr<ns3::NetDevice>, ns3::Ptr<ns3::Packet const>, unsigned short, ns3::Address const&, ns3::Address const&, ns3::NetDevice::PacketType, ns3::empty, ns3::empty, ns3::empty> (cb_cb_impl));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_GetNode(PyNs3PointToPointNetDevice *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::Node > retval;
    PyNs3Node *py_Node;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = self->obj->GetNode();
    if (!(const_cast<ns3::Node *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    if (typeid((*const_cast<ns3::Node *> (ns3::PeekPointer (retval)))).name() == typeid(PyNs3Node__PythonHelper).name())
    {
        py_Node = reinterpret_cast< PyNs3Node* >(reinterpret_cast< PyNs3Node__PythonHelper* >(const_cast<ns3::Node *> (ns3::PeekPointer (retval)))->m_pyself);
        py_Node->obj = const_cast<ns3::Node *> (ns3::PeekPointer (retval));
        Py_INCREF(py_Node);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Node *> (ns3::PeekPointer (retval)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Node = NULL;
        } else {
            py_Node = (PyNs3Node *) wrapper_lookup_iter->second;
            Py_INCREF(py_Node);
        }
    
        if (py_Node == NULL) {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::Node *> (ns3::PeekPointer (retval)))), &PyNs3Node_Type);
            py_Node = PyObject_GC_New(PyNs3Node, wrapper_type);
            py_Node->inst_dict = NULL;
            py_Node->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Node *> (ns3::PeekPointer (retval))->Ref();
            py_Node->obj = const_cast<ns3::Node *> (ns3::PeekPointer (retval));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Node->obj] = (PyObject *) py_Node;
        }
    }
    py_retval = Py_BuildValue((char *) "N", py_Node);
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_SendFrom(PyNs3PointToPointNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    PyNs3Packet *packet;
    ns3::Packet *packet_ptr;
    PyObject *source;
    ns3::Address source2;
    PyObject *dest;
    ns3::Address dest2;
    int protocolNumber;
    const char *keywords[] = {"packet", "source", "dest", "protocolNumber", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!OOi", (char **) keywords, &PyNs3Packet_Type, &packet, &source, &dest, &protocolNumber)) {
        return NULL;
    }
    packet_ptr = (packet ? packet->obj : NULL);
    if (PyObject_IsInstance(source, (PyObject*) &PyNs3Address_Type)) {
        source2 = *((PyNs3Address *) source)->obj;
    } else if (PyObject_IsInstance(source, (PyObject*) &PyNs3Ipv4Address_Type)) {
        source2 = *((PyNs3Ipv4Address *) source)->obj;
    } else if (PyObject_IsInstance(source, (PyObject*) &PyNs3Ipv6Address_Type)) {
        source2 = *((PyNs3Ipv6Address *) source)->obj;
    } else if (PyObject_IsInstance(source, (PyObject*) &PyNs3Mac48Address_Type)) {
        source2 = *((PyNs3Mac48Address *) source)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Address, Ipv4Address, Ipv6Address, Mac48Address), not %s", source->ob_type->tp_name);
        return NULL;
    }
    if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Address_Type)) {
        dest2 = *((PyNs3Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Ipv4Address_Type)) {
        dest2 = *((PyNs3Ipv4Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Ipv6Address_Type)) {
        dest2 = *((PyNs3Ipv6Address *) dest)->obj;
    } else if (PyObject_IsInstance(dest, (PyObject*) &PyNs3Mac48Address_Type)) {
        dest2 = *((PyNs3Mac48Address *) dest)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Address, Ipv4Address, Ipv6Address, Mac48Address), not %s", dest->ob_type->tp_name);
        return NULL;
    }
    if (protocolNumber > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    retval = self->obj->SendFrom(ns3::Ptr< ns3::Packet  > (packet_ptr), source2, dest2, protocolNumber);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_IsBroadcast(PyNs3PointToPointNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsBroadcast();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_GetMtu(PyNs3PointToPointNetDevice *self)
{
    PyObject *py_retval;
    uint16_t retval;
    
    retval = self->obj->GetMtu();
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_IsBridge(PyNs3PointToPointNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsBridge();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_GetQueue(PyNs3PointToPointNetDevice *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::Queue > retval;
    PyNs3Queue *py_Queue;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = self->obj->GetQueue();
    if (!(const_cast<ns3::Queue *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    if (typeid((*const_cast<ns3::Queue *> (ns3::PeekPointer (retval)))).name() == typeid(PyNs3Queue__PythonHelper).name())
    {
        py_Queue = reinterpret_cast< PyNs3Queue* >(reinterpret_cast< PyNs3Queue__PythonHelper* >(const_cast<ns3::Queue *> (ns3::PeekPointer (retval)))->m_pyself);
        py_Queue->obj = const_cast<ns3::Queue *> (ns3::PeekPointer (retval));
        Py_INCREF(py_Queue);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Queue *> (ns3::PeekPointer (retval)));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Queue = NULL;
        } else {
            py_Queue = (PyNs3Queue *) wrapper_lookup_iter->second;
            Py_INCREF(py_Queue);
        }
    
        if (py_Queue == NULL) {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::Queue *> (ns3::PeekPointer (retval)))), &PyNs3Queue_Type);
            py_Queue = PyObject_GC_New(PyNs3Queue, wrapper_type);
            py_Queue->inst_dict = NULL;
            py_Queue->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Queue *> (ns3::PeekPointer (retval))->Ref();
            py_Queue->obj = const_cast<ns3::Queue *> (ns3::PeekPointer (retval));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Queue->obj] = (PyObject *) py_Queue;
        }
    }
    py_retval = Py_BuildValue((char *) "N", py_Queue);
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_SetNode(PyNs3PointToPointNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Node *node;
    ns3::Node *node_ptr;
    const char *keywords[] = {"node", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Node_Type, &node)) {
        return NULL;
    }
    node_ptr = (node ? node->obj : NULL);
    self->obj->SetNode(ns3::Ptr< ns3::Node  > (node_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_SetDataRate(PyNs3PointToPointNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3DataRate *bps;
    const char *keywords[] = {"bps", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DataRate_Type, &bps)) {
        return NULL;
    }
    self->obj->SetDataRate(*((PyNs3DataRate *) bps)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_Receive(PyNs3PointToPointNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Packet *p;
    ns3::Packet *p_ptr;
    const char *keywords[] = {"p", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Packet_Type, &p)) {
        return NULL;
    }
    p_ptr = (p ? p->obj : NULL);
    self->obj->Receive(ns3::Ptr< ns3::Packet  > (p_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_GetAddress(PyNs3PointToPointNetDevice *self)
{
    PyObject *py_retval;
    PyNs3Address *py_Address;
    
    ns3::Address retval = self->obj->GetAddress();
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(retval);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = Py_BuildValue((char *) "N", py_Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_IsLinkUp(PyNs3PointToPointNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsLinkUp();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_SetReceiveErrorModel(PyNs3PointToPointNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3ErrorModel *em;
    ns3::ErrorModel *em_ptr;
    const char *keywords[] = {"em", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3ErrorModel_Type, &em)) {
        return NULL;
    }
    em_ptr = (em ? em->obj : NULL);
    self->obj->SetReceiveErrorModel(ns3::Ptr< ns3::ErrorModel  > (em_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_SetAddress(PyNs3PointToPointNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *address;
    ns3::Address address2;
    const char *keywords[] = {"address", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &address)) {
        return NULL;
    }
    if (PyObject_IsInstance(address, (PyObject*) &PyNs3Address_Type)) {
        address2 = *((PyNs3Address *) address)->obj;
    } else if (PyObject_IsInstance(address, (PyObject*) &PyNs3Ipv4Address_Type)) {
        address2 = *((PyNs3Ipv4Address *) address)->obj;
    } else if (PyObject_IsInstance(address, (PyObject*) &PyNs3Ipv6Address_Type)) {
        address2 = *((PyNs3Ipv6Address *) address)->obj;
    } else if (PyObject_IsInstance(address, (PyObject*) &PyNs3Mac48Address_Type)) {
        address2 = *((PyNs3Mac48Address *) address)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Address, Ipv4Address, Ipv6Address, Mac48Address), not %s", address->ob_type->tp_name);
        return NULL;
    }
    self->obj->SetAddress(address2);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_GetBroadcast(PyNs3PointToPointNetDevice *self)
{
    PyObject *py_retval;
    PyNs3Address *py_Address;
    
    ns3::Address retval = self->obj->GetBroadcast();
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(retval);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = Py_BuildValue((char *) "N", py_Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_Attach(PyNs3PointToPointNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    PyNs3PointToPointChannel *ch;
    ns3::PointToPointChannel *ch_ptr;
    const char *keywords[] = {"ch", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3PointToPointChannel_Type, &ch)) {
        return NULL;
    }
    ch_ptr = (ch ? ch->obj : NULL);
    retval = self->obj->Attach(ns3::Ptr< ns3::PointToPointChannel  > (ch_ptr));
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_SetReceiveCallback(PyNs3PointToPointNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *cb;
    ns3::Ptr<PythonCallbackImpl1> cb_cb_impl;
    const char *keywords[] = {"cb", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &cb)) {
        return NULL;
    }
    if (!PyCallable_Check(cb)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'cb' must be callbale");
        return NULL;
    }
    cb_cb_impl = ns3::Create<PythonCallbackImpl1> (cb);
    self->obj->SetReceiveCallback(ns3::Callback<bool, ns3::Ptr<ns3::NetDevice>, ns3::Ptr<ns3::Packet const>, unsigned short, ns3::Address const&, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (cb_cb_impl));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_IsMulticast(PyNs3PointToPointNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsMulticast();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_SetMtu(PyNs3PointToPointNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    int mtu;
    const char *keywords[] = {"mtu", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &mtu)) {
        return NULL;
    }
    if (mtu > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    retval = self->obj->SetMtu(mtu);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_SupportsSendFrom(PyNs3PointToPointNetDevice *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->SupportsSendFrom();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_SetInterframeGap(PyNs3PointToPointNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Time *t;
    const char *keywords[] = {"t", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Time_Type, &t)) {
        return NULL;
    }
    self->obj->SetInterframeGap(*((PyNs3Time *) t)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_SetQueue(PyNs3PointToPointNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Queue *queue;
    ns3::Queue *queue_ptr;
    const char *keywords[] = {"queue", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Queue_Type, &queue)) {
        return NULL;
    }
    queue_ptr = (queue ? queue->obj : NULL);
    self->obj->SetQueue(ns3::Ptr< ns3::Queue  > (queue_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointNetDevice_SetIfIndex(PyNs3PointToPointNetDevice *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int index;
    const char *keywords[] = {"index", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &index)) {
        return NULL;
    }
    self->obj->SetIfIndex(index);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

static PyMethodDef PyNs3PointToPointNetDevice_methods[] = {
    {(char *) "GetMulticast", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_GetMulticast, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsPointToPoint", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_IsPointToPoint, METH_NOARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Send", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_Send, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetIfIndex", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_GetIfIndex, METH_NOARGS, NULL },
    {(char *) "NeedsArp", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_NeedsArp, METH_NOARGS, NULL },
    {(char *) "GetChannel", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_GetChannel, METH_NOARGS, NULL },
    {(char *) "SetPromiscReceiveCallback", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_SetPromiscReceiveCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetNode", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_GetNode, METH_NOARGS, NULL },
    {(char *) "SendFrom", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_SendFrom, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsBroadcast", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_IsBroadcast, METH_NOARGS, NULL },
    {(char *) "GetMtu", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_GetMtu, METH_NOARGS, NULL },
    {(char *) "IsBridge", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_IsBridge, METH_NOARGS, NULL },
    {(char *) "GetQueue", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_GetQueue, METH_NOARGS, NULL },
    {(char *) "SetNode", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_SetNode, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetDataRate", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_SetDataRate, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Receive", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_Receive, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetAddress", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_GetAddress, METH_NOARGS, NULL },
    {(char *) "IsLinkUp", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_IsLinkUp, METH_NOARGS, NULL },
    {(char *) "SetReceiveErrorModel", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_SetReceiveErrorModel, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetAddress", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_SetAddress, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetBroadcast", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_GetBroadcast, METH_NOARGS, NULL },
    {(char *) "Attach", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_Attach, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetReceiveCallback", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_SetReceiveCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsMulticast", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_IsMulticast, METH_NOARGS, NULL },
    {(char *) "SetMtu", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_SetMtu, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SupportsSendFrom", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_SupportsSendFrom, METH_NOARGS, NULL },
    {(char *) "SetInterframeGap", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_SetInterframeGap, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetQueue", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_SetQueue, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetIfIndex", (PyCFunction) _wrap_PyNs3PointToPointNetDevice_SetIfIndex, METH_KEYWORDS|METH_VARARGS, NULL },
    {NULL, NULL, 0, NULL}
};

static void
PyNs3PointToPointNetDevice__tp_clear(PyNs3PointToPointNetDevice *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::PointToPointNetDevice *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3PointToPointNetDevice__tp_traverse(PyNs3PointToPointNetDevice *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    return 0;
}


static void
_wrap_PyNs3PointToPointNetDevice__tp_dealloc(PyNs3PointToPointNetDevice *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3PointToPointNetDevice__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3PointToPointNetDevice__tp_richcompare (PyNs3PointToPointNetDevice *PYBINDGEN_UNUSED(self), PyNs3PointToPointNetDevice *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3PointToPointNetDevice_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3PointToPointNetDevice_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "point_to_point.PointToPointNetDevice",            /* tp_name */
    sizeof(PyNs3PointToPointNetDevice),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3PointToPointNetDevice__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3PointToPointNetDevice__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3PointToPointNetDevice__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3PointToPointNetDevice__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3PointToPointNetDevice_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3PointToPointNetDevice, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3PointToPointNetDevice__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




PyObject *
PyNs3PointToPointRemoteChannel__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3PointToPointRemoteChannel *self)
{
    PyObject *py_retval;
    PyNs3PointToPointRemoteChannel__PythonHelper *helper = dynamic_cast< PyNs3PointToPointRemoteChannel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyConstructionCompleted of class ObjectBase is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyConstructionCompleted__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3PointToPointRemoteChannel__PythonHelper::_wrap_TransmitStart(PyNs3PointToPointRemoteChannel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    PyNs3Packet *p;
    ns3::Packet *p_ptr;
    PyNs3PointToPointNetDevice *src;
    ns3::PointToPointNetDevice *src_ptr;
    PyNs3Time *txTime;
    PyNs3PointToPointRemoteChannel__PythonHelper *helper = dynamic_cast< PyNs3PointToPointRemoteChannel__PythonHelper* >(self->obj);
    const char *keywords[] = {"p", "src", "txTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!O!", (char **) keywords, &PyNs3Packet_Type, &p, &PyNs3PointToPointNetDevice_Type, &src, &PyNs3Time_Type, &txTime)) {
        return NULL;
    }
    p_ptr = (p ? p->obj : NULL);
    src_ptr = (src ? src->obj : NULL);
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method TransmitStart of class PointToPointRemoteChannel is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->TransmitStart__parent_caller(ns3::Ptr< ns3::Packet  > (p_ptr), ns3::Ptr< ns3::PointToPointNetDevice  > (src_ptr), *((PyNs3Time *) txTime)->obj);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}

PyObject *
PyNs3PointToPointRemoteChannel__PythonHelper::_wrap_NotifyNewAggregate(PyNs3PointToPointRemoteChannel *self)
{
    PyObject *py_retval;
    PyNs3PointToPointRemoteChannel__PythonHelper *helper = dynamic_cast< PyNs3PointToPointRemoteChannel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyNewAggregate of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyNewAggregate__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3PointToPointRemoteChannel__PythonHelper::_wrap_GetInstanceTypeId(PyNs3PointToPointRemoteChannel *self)
{
    PyObject *py_retval;
    PyNs3PointToPointRemoteChannel__PythonHelper *helper = dynamic_cast< PyNs3PointToPointRemoteChannel__PythonHelper* >(self->obj);
    PyNs3TypeId *py_TypeId;
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method GetInstanceTypeId of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    ns3::TypeId retval = helper->GetInstanceTypeId__parent_caller();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}

PyObject *
PyNs3PointToPointRemoteChannel__PythonHelper::_wrap_DoStart(PyNs3PointToPointRemoteChannel *self)
{
    PyObject *py_retval;
    PyNs3PointToPointRemoteChannel__PythonHelper *helper = dynamic_cast< PyNs3PointToPointRemoteChannel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoStart of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoStart__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3PointToPointRemoteChannel__PythonHelper::_wrap_GetNDevices(PyNs3PointToPointRemoteChannel *self)
{
    PyObject *py_retval;
    uint32_t retval;
    PyNs3PointToPointRemoteChannel__PythonHelper *helper = dynamic_cast< PyNs3PointToPointRemoteChannel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method GetNDevices of class PointToPointChannel is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->GetNDevices__parent_caller();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}

PyObject *
PyNs3PointToPointRemoteChannel__PythonHelper::_wrap_DoDispose(PyNs3PointToPointRemoteChannel *self)
{
    PyObject *py_retval;
    PyNs3PointToPointRemoteChannel__PythonHelper *helper = dynamic_cast< PyNs3PointToPointRemoteChannel__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3PointToPointRemoteChannel__PythonHelper::_wrap_GetDevice(PyNs3PointToPointRemoteChannel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::NetDevice > retval;
    unsigned int i;
    PyNs3PointToPointRemoteChannel__PythonHelper *helper = dynamic_cast< PyNs3PointToPointRemoteChannel__PythonHelper* >(self->obj);
    const char *keywords[] = {"i", NULL};
    PyNs3NetDevice *py_NetDevice;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &i)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method GetDevice of class PointToPointChannel is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->GetDevice__parent_caller(i);
    if (!(const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
        py_NetDevice = NULL;
    } else {
        py_NetDevice = (PyNs3NetDevice *) wrapper_lookup_iter->second;
        Py_INCREF(py_NetDevice);
    }
    
    if (py_NetDevice == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval)))), &PyNs3NetDevice_Type);
        py_NetDevice = PyObject_GC_New(PyNs3NetDevice, wrapper_type);
        py_NetDevice->inst_dict = NULL;
        py_NetDevice->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval))->Ref();
        py_NetDevice->obj = const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval));
        PyNs3ObjectBase_wrapper_registry[(void *) py_NetDevice->obj] = (PyObject *) py_NetDevice;
    }
    py_retval = Py_BuildValue((char *) "N", py_NetDevice);
    return py_retval;
}

bool
PyNs3PointToPointRemoteChannel__PythonHelper::TransmitStart(ns3::Ptr< ns3::Packet > p, ns3::Ptr< ns3::PointToPointNetDevice > src, ns3::Time txTime)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::PointToPointRemoteChannel *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyNs3Packet *py_Packet;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    PyNs3PointToPointNetDevice *py_PointToPointNetDevice;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter2;
    PyTypeObject *wrapper_type2 = 0;
    PyNs3Time *py_Time;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_TransmitStart"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::PointToPointRemoteChannel::TransmitStart(p, src, txTime);
    }
    self_obj_before = reinterpret_cast< PyNs3PointToPointRemoteChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3PointToPointRemoteChannel* >(m_pyself)->obj = (ns3::PointToPointRemoteChannel*) this;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::Packet *> (ns3::PeekPointer (p)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_Packet = NULL;
    } else {
        py_Packet = (PyNs3Packet *) wrapper_lookup_iter->second;
        Py_INCREF(py_Packet);
    }
    
    if (py_Packet == NULL)
    {
        wrapper_type = PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map.lookup_wrapper(typeid(*const_cast<ns3::Packet *> (ns3::PeekPointer (p))), &PyNs3Packet_Type);
        py_Packet = PyObject_New(PyNs3Packet, wrapper_type);
        py_Packet->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::Packet *> (ns3::PeekPointer (p))->Ref();
        py_Packet->obj = const_cast<ns3::Packet *> (ns3::PeekPointer (p));
        PyNs3Empty_wrapper_registry[(void *) py_Packet->obj] = (PyObject *) py_Packet;
    }
    wrapper_lookup_iter2 = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::PointToPointNetDevice *> (ns3::PeekPointer (src)));
    if (wrapper_lookup_iter2 == PyNs3ObjectBase_wrapper_registry.end()) {
        py_PointToPointNetDevice = NULL;
    } else {
        py_PointToPointNetDevice = (PyNs3PointToPointNetDevice *) wrapper_lookup_iter2->second;
        Py_INCREF(py_PointToPointNetDevice);
    }
    
    if (py_PointToPointNetDevice == NULL)
    {
        wrapper_type2 = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::PointToPointNetDevice *> (ns3::PeekPointer (src))), &PyNs3PointToPointNetDevice_Type);
        py_PointToPointNetDevice = PyObject_GC_New(PyNs3PointToPointNetDevice, wrapper_type2);
        py_PointToPointNetDevice->inst_dict = NULL;
        py_PointToPointNetDevice->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::PointToPointNetDevice *> (ns3::PeekPointer (src))->Ref();
        py_PointToPointNetDevice->obj = const_cast<ns3::PointToPointNetDevice *> (ns3::PeekPointer (src));
        PyNs3ObjectBase_wrapper_registry[(void *) py_PointToPointNetDevice->obj] = (PyObject *) py_PointToPointNetDevice;
    }
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(txTime);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_TransmitStart", (char *) "NNN", py_Packet, py_PointToPointNetDevice, py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3PointToPointRemoteChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::PointToPointRemoteChannel::TransmitStart(p, src, txTime);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3PointToPointRemoteChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::PointToPointRemoteChannel::TransmitStart(p, src, txTime);
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3PointToPointRemoteChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

uint32_t
PyNs3PointToPointRemoteChannel__PythonHelper::GetNDevices() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::PointToPointChannel *self_obj_before;
    PyObject *py_retval;
    uint32_t retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_GetNDevices"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::PointToPointChannel::GetNDevices();
    }
    self_obj_before = reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj = const_cast< ns3::PointToPointChannel* >((const ns3::PointToPointChannel*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_GetNDevices", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::PointToPointChannel::GetNDevices();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "I", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::PointToPointChannel::GetNDevices();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Ptr< ns3::NetDevice >
PyNs3PointToPointRemoteChannel__PythonHelper::GetDevice(uint32_t i) const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::PointToPointChannel *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::NetDevice > retval;
    PyNs3NetDevice *tmp_NetDevice;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_GetDevice"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::PointToPointChannel::GetDevice(i);
    }
    self_obj_before = reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj;
    reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj = const_cast< ns3::PointToPointChannel* >((const ns3::PointToPointChannel*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_GetDevice", (char *) "N", PyLong_FromUnsignedLong(i));
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::PointToPointChannel::GetDevice(i);
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3NetDevice_Type, &tmp_NetDevice)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::PointToPointChannel::GetDevice(i);
    }
    // dangerous!
    retval = ns3::Ptr< ns3::NetDevice  > (tmp_NetDevice->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3PointToPointChannel* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::TypeId
PyNs3PointToPointRemoteChannel__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = const_cast< ns3::Object* >((const ns3::Object*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3PointToPointRemoteChannel__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::DoDispose();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3PointToPointRemoteChannel__PythonHelper::DoStart()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_DoStart"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::DoStart();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_DoStart", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3PointToPointRemoteChannel__PythonHelper::NotifyNewAggregate()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_NotifyNewAggregate"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::Object::NotifyNewAggregate();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_NotifyNewAggregate", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3PointToPointRemoteChannel__PythonHelper::NotifyConstructionCompleted()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ObjectBase *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_NotifyConstructionCompleted"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::ObjectBase::NotifyConstructionCompleted();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = (ns3::ObjectBase*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_NotifyConstructionCompleted", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


static int
_wrap_PyNs3PointToPointRemoteChannel__tp_init__0(PyNs3PointToPointRemoteChannel *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3PointToPointRemoteChannel *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3PointToPointRemoteChannel_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3PointToPointRemoteChannel_Type)
    {
        self->obj = new PyNs3PointToPointRemoteChannel__PythonHelper(*((PyNs3PointToPointRemoteChannel *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3PointToPointRemoteChannel__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::PointToPointRemoteChannel(*((PyNs3PointToPointRemoteChannel *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3PointToPointRemoteChannel__tp_init__1(PyNs3PointToPointRemoteChannel *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3PointToPointRemoteChannel_Type)
    {
        self->obj = new PyNs3PointToPointRemoteChannel__PythonHelper();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3PointToPointRemoteChannel__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::PointToPointRemoteChannel();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3PointToPointRemoteChannel__tp_init(PyNs3PointToPointRemoteChannel *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3PointToPointRemoteChannel__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3PointToPointRemoteChannel__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3PointToPointRemoteChannel_TransmitStart(PyNs3PointToPointRemoteChannel *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    PyNs3Packet *p;
    ns3::Packet *p_ptr;
    PyNs3PointToPointNetDevice *src;
    ns3::PointToPointNetDevice *src_ptr;
    PyNs3Time *txTime;
    const char *keywords[] = {"p", "src", "txTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!O!", (char **) keywords, &PyNs3Packet_Type, &p, &PyNs3PointToPointNetDevice_Type, &src, &PyNs3Time_Type, &txTime)) {
        return NULL;
    }
    p_ptr = (p ? p->obj : NULL);
    src_ptr = (src ? src->obj : NULL);
    retval = self->obj->TransmitStart(ns3::Ptr< ns3::Packet  > (p_ptr), ns3::Ptr< ns3::PointToPointNetDevice  > (src_ptr), *((PyNs3Time *) txTime)->obj);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3PointToPointRemoteChannel_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::PointToPointRemoteChannel::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


static PyObject*
_wrap_PyNs3PointToPointRemoteChannel__copy__(PyNs3PointToPointRemoteChannel *self)
{

    PyNs3PointToPointRemoteChannel *py_copy;
    py_copy = PyObject_GC_New(PyNs3PointToPointRemoteChannel, &PyNs3PointToPointRemoteChannel_Type);
    py_copy->obj = new ns3::PointToPointRemoteChannel(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3PointToPointRemoteChannel_methods[] = {
    {(char *) "TransmitStart", (PyCFunction) _wrap_PyNs3PointToPointRemoteChannel_TransmitStart, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3PointToPointRemoteChannel_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "_NotifyConstructionCompleted", (PyCFunction) PyNs3PointToPointRemoteChannel__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "_TransmitStart", (PyCFunction) PyNs3PointToPointRemoteChannel__PythonHelper::_wrap_TransmitStart, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_NotifyNewAggregate", (PyCFunction) PyNs3PointToPointRemoteChannel__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "_GetInstanceTypeId", (PyCFunction) PyNs3PointToPointRemoteChannel__PythonHelper::_wrap_GetInstanceTypeId, METH_NOARGS, NULL },
    {(char *) "_DoStart", (PyCFunction) PyNs3PointToPointRemoteChannel__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "_GetNDevices", (PyCFunction) PyNs3PointToPointRemoteChannel__PythonHelper::_wrap_GetNDevices, METH_NOARGS, NULL },
    {(char *) "_DoDispose", (PyCFunction) PyNs3PointToPointRemoteChannel__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "_GetDevice", (PyCFunction) PyNs3PointToPointRemoteChannel__PythonHelper::_wrap_GetDevice, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3PointToPointRemoteChannel__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3PointToPointRemoteChannel__tp_clear(PyNs3PointToPointRemoteChannel *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::PointToPointRemoteChannel *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3PointToPointRemoteChannel__tp_traverse(PyNs3PointToPointRemoteChannel *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj).name() == typeid(PyNs3PointToPointRemoteChannel__PythonHelper).name()  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3PointToPointRemoteChannel__tp_dealloc(PyNs3PointToPointRemoteChannel *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3PointToPointRemoteChannel__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3PointToPointRemoteChannel__tp_richcompare (PyNs3PointToPointRemoteChannel *PYBINDGEN_UNUSED(self), PyNs3PointToPointRemoteChannel *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3PointToPointRemoteChannel_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3PointToPointRemoteChannel_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "point_to_point.PointToPointRemoteChannel",            /* tp_name */
    sizeof(PyNs3PointToPointRemoteChannel),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3PointToPointRemoteChannel__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3PointToPointRemoteChannel__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3PointToPointRemoteChannel__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3PointToPointRemoteChannel__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3PointToPointRemoteChannel_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3PointToPointRemoteChannel, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3PointToPointRemoteChannel__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};


/* --- containers --- */



static void
Pystd__list__lt___unsigned_int___gt__Iter__tp_clear(Pystd__list__lt___unsigned_int___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__list__lt___unsigned_int___gt__Iter__tp_traverse(Pystd__list__lt___unsigned_int___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__list__lt___unsigned_int___gt____tp_dealloc(Pystd__list__lt___unsigned_int___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    self->ob_type->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__list__lt___unsigned_int___gt__Iter__tp_dealloc(Pystd__list__lt___unsigned_int___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    self->ob_type->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__list__lt___unsigned_int___gt____tp_iter(Pystd__list__lt___unsigned_int___gt__ *self)
{
    Pystd__list__lt___unsigned_int___gt__Iter *iter = PyObject_GC_New(Pystd__list__lt___unsigned_int___gt__Iter, &Pystd__list__lt___unsigned_int___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::list< unsigned int >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__list__lt___unsigned_int___gt__Iter__tp_iter(Pystd__list__lt___unsigned_int___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__list__lt___unsigned_int___gt__Iter__tp_iternext(Pystd__list__lt___unsigned_int___gt__Iter *self)
{
    PyObject *py_retval;
    std::list< unsigned int >::iterator iter;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong((*iter)));
    return py_retval;
}

int _wrap_convert_py2c__unsigned_int(PyObject *value, unsigned int *address)
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "I", &*address)) {
        Py_DECREF(py_retval);
        return 0;
    }
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__list__lt___unsigned_int___gt__(PyObject *arg, std::list< unsigned int > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__list__lt___unsigned_int___gt___Type)) {
        *container = *((Pystd__list__lt___unsigned_int___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            unsigned int item;
            if (!_wrap_convert_py2c__unsigned_int(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__list__lt___unsigned_int___gt__ instance, or a list of unsigned int");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__list__lt___unsigned_int___gt____tp_init(Pystd__list__lt___unsigned_int___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::list< unsigned int >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__list__lt___unsigned_int___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__list__lt___unsigned_int___gt___Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "point_to_point.Std__list__lt___unsigned_int___gt__",            /* tp_name */
    sizeof(Pystd__list__lt___unsigned_int___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___unsigned_int___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___unsigned_int___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__list__lt___unsigned_int___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__list__lt___unsigned_int___gt__Iter_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "point_to_point.Std__list__lt___unsigned_int___gt__Iter",            /* tp_name */
    sizeof(Pystd__list__lt___unsigned_int___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___unsigned_int___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__list__lt___unsigned_int___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__list__lt___unsigned_int___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___unsigned_int___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__list__lt___unsigned_int___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};


/* --- enumerations --- */

















PyMODINIT_FUNC
#if defined(__GNUC__) && __GNUC__ >= 4
__attribute__ ((visibility("default")))
#endif
initpoint_to_point(void)
{
    PyObject *m;
    PyObject *submodule;
    m = Py_InitModule3((char *) "point_to_point", point_to_point_functions, NULL);
    if (m == NULL) {
        return;
    }
    PyModule_AddIntConstant(m, (char *) "STD_IOS_IN", std::ios::in);
    PyModule_AddIntConstant(m, (char *) "STD_IOS_OUT", std::ios::out);
    PyModule_AddIntConstant(m, (char *) "STD_IOS_ATE", std::ios::ate);
    PyModule_AddIntConstant(m, (char *) "STD_IOS_APP", std::ios::app);
    PyModule_AddIntConstant(m, (char *) "STD_IOS_TRUNC", std::ios::trunc);
    PyModule_AddIntConstant(m, (char *) "STD_IOS_BINARY", std::ios::binary);
    /* Import the 'ns3::Address' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Address_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Address");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3Address_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Address_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Address_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::AsciiTraceHelper' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3AsciiTraceHelper_Type = (PyTypeObject*) PyObject_GetAttrString(module, "AsciiTraceHelper");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3AsciiTraceHelper_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3AsciiTraceHelper_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3AsciiTraceHelper_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::AsciiTraceHelperForDevice' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3AsciiTraceHelperForDevice_Type = (PyTypeObject*) PyObject_GetAttrString(module, "AsciiTraceHelperForDevice");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3AsciiTraceHelperForDevice_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3AsciiTraceHelperForDevice_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3AsciiTraceHelperForDevice_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::AttributeConstructionList' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3AttributeConstructionList_Type = (PyTypeObject*) PyObject_GetAttrString(module, "AttributeConstructionList");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3AttributeConstructionList_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3AttributeConstructionList_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3AttributeConstructionList_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::AttributeConstructionList::Item' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3AttributeConstructionListItem_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Item");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3AttributeConstructionListItem_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3AttributeConstructionListItem_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3AttributeConstructionListItem_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Buffer' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Buffer_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Buffer");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3Buffer_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Buffer_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Buffer_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Buffer::Iterator' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3BufferIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Iterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3BufferIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3BufferIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3BufferIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ByteTagIterator' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3ByteTagIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, "ByteTagIterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3ByteTagIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ByteTagIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ByteTagIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ByteTagIterator::Item' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3ByteTagIteratorItem_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Item");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3ByteTagIteratorItem_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ByteTagIteratorItem_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ByteTagIteratorItem_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ByteTagList' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3ByteTagList_Type = (PyTypeObject*) PyObject_GetAttrString(module, "ByteTagList");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3ByteTagList_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ByteTagList_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ByteTagList_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ByteTagList::Iterator' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3ByteTagListIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Iterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3ByteTagListIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ByteTagListIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ByteTagListIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ByteTagList::Iterator::Item' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3ByteTagListIteratorItem_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Item");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3ByteTagListIteratorItem_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ByteTagListIteratorItem_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ByteTagListIteratorItem_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::CallbackBase' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3CallbackBase_Type = (PyTypeObject*) PyObject_GetAttrString(module, "CallbackBase");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3CallbackBase_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3CallbackBase_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3CallbackBase_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::DataRate' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3DataRate_Type = (PyTypeObject*) PyObject_GetAttrString(module, "DataRate");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3DataRate_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3DataRate_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3DataRate_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::EventId' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3EventId_Type = (PyTypeObject*) PyObject_GetAttrString(module, "EventId");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3EventId_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3EventId_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3EventId_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Ipv4Address' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Ipv4Address_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Ipv4Address");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3Ipv4Address_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Ipv4Address_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Ipv4Address_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Ipv4Mask' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Ipv4Mask_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Ipv4Mask");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3Ipv4Mask_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Ipv4Mask_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Ipv4Mask_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Ipv6Address' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Ipv6Address_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Ipv6Address");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3Ipv6Address_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Ipv6Address_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Ipv6Address_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Ipv6Prefix' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Ipv6Prefix_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Ipv6Prefix");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3Ipv6Prefix_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Ipv6Prefix_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Ipv6Prefix_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Mac48Address' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Mac48Address_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Mac48Address");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3Mac48Address_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Mac48Address_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Mac48Address_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::NetDeviceContainer' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3NetDeviceContainer_Type = (PyTypeObject*) PyObject_GetAttrString(module, "NetDeviceContainer");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3NetDeviceContainer_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3NetDeviceContainer_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3NetDeviceContainer_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::NodeContainer' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3NodeContainer_Type = (PyTypeObject*) PyObject_GetAttrString(module, "NodeContainer");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3NodeContainer_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3NodeContainer_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3NodeContainer_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ObjectBase' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3ObjectBase_Type = (PyTypeObject*) PyObject_GetAttrString(module, "ObjectBase");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3ObjectBase_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ObjectBase_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ObjectBase_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ObjectDeleter' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3ObjectDeleter_Type = (PyTypeObject*) PyObject_GetAttrString(module, "ObjectDeleter");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3ObjectDeleter_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ObjectDeleter_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ObjectDeleter_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ObjectFactory' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3ObjectFactory_Type = (PyTypeObject*) PyObject_GetAttrString(module, "ObjectFactory");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3ObjectFactory_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ObjectFactory_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ObjectFactory_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketMetadata' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3PacketMetadata_Type = (PyTypeObject*) PyObject_GetAttrString(module, "PacketMetadata");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3PacketMetadata_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketMetadata_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketMetadata_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketMetadata::Item' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3PacketMetadataItem_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Item");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3PacketMetadataItem_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketMetadataItem_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketMetadataItem_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketMetadata::ItemIterator' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3PacketMetadataItemIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, "ItemIterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3PacketMetadataItemIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketMetadataItemIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketMetadataItemIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketTagIterator' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3PacketTagIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, "PacketTagIterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3PacketTagIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketTagIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketTagIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketTagIterator::Item' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3PacketTagIteratorItem_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Item");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3PacketTagIteratorItem_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketTagIteratorItem_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketTagIteratorItem_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketTagList' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3PacketTagList_Type = (PyTypeObject*) PyObject_GetAttrString(module, "PacketTagList");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3PacketTagList_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketTagList_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketTagList_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketTagList::TagData' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3PacketTagListTagData_Type = (PyTypeObject*) PyObject_GetAttrString(module, "TagData");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3PacketTagListTagData_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketTagListTagData_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketTagListTagData_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PcapFile' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3PcapFile_Type = (PyTypeObject*) PyObject_GetAttrString(module, "PcapFile");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3PcapFile_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PcapFile_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PcapFile_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PcapHelper' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3PcapHelper_Type = (PyTypeObject*) PyObject_GetAttrString(module, "PcapHelper");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3PcapHelper_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PcapHelper_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PcapHelper_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PcapHelperForDevice' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3PcapHelperForDevice_Type = (PyTypeObject*) PyObject_GetAttrString(module, "PcapHelperForDevice");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3PcapHelperForDevice_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PcapHelperForDevice_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PcapHelperForDevice_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::RandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3RandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, "RandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3RandomVariable_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3RandomVariable_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3RandomVariable_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SeedManager' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3SeedManager_Type = (PyTypeObject*) PyObject_GetAttrString(module, "SeedManager");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3SeedManager_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3SeedManager_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3SeedManager_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SequentialVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3SequentialVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, "SequentialVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SimpleRefCount< ns3::Object, ns3::ObjectBase, ns3::ObjectDeleter >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter_Type = (PyTypeObject*) PyObject_GetAttrString(module, "SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::Object, ns3::ObjectBase, ns3::ObjectDeleter >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Simulator' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3Simulator_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Simulator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3Simulator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Simulator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Simulator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Tag' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Tag_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Tag");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::TagBuffer' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3TagBuffer_Type = (PyTypeObject*) PyObject_GetAttrString(module, "TagBuffer");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3TagBuffer_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3TagBuffer_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3TagBuffer_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::TriangularVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3TriangularVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, "TriangularVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::TypeId' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3TypeId_Type = (PyTypeObject*) PyObject_GetAttrString(module, "TypeId");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3TypeId_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3TypeId_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3TypeId_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::TypeId::AttributeInformation' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3TypeIdAttributeInformation_Type = (PyTypeObject*) PyObject_GetAttrString(module, "AttributeInformation");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3TypeIdAttributeInformation_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3TypeIdAttributeInformation_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3TypeIdAttributeInformation_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::TypeId::TraceSourceInformation' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3TypeIdTraceSourceInformation_Type = (PyTypeObject*) PyObject_GetAttrString(module, "TraceSourceInformation");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3TypeIdTraceSourceInformation_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3TypeIdTraceSourceInformation_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3TypeIdTraceSourceInformation_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::UniformVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3UniformVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, "UniformVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::WeibullVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3WeibullVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, "WeibullVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ZetaVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3ZetaVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, "ZetaVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ZipfVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3ZipfVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, "ZipfVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::empty' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3Empty_Type = (PyTypeObject*) PyObject_GetAttrString(module, "empty");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3Empty_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Empty_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Empty_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::int64x64_t' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3Int64x64_t_Type = (PyTypeObject*) PyObject_GetAttrString(module, "int64x64_t");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3Int64x64_t_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Int64x64_t_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Int64x64_t_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Chunk' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Chunk_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Chunk");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ConstantVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3ConstantVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, "ConstantVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::DeterministicVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3DeterministicVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, "DeterministicVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::EmpiricalVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3EmpiricalVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, "EmpiricalVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ErlangVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3ErlangVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, "ErlangVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ExponentialVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3ExponentialVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, "ExponentialVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::GammaVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3GammaVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, "GammaVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Header' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Header_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Header");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::IntEmpiricalVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3IntEmpiricalVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, "IntEmpiricalVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::LogNormalVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3LogNormalVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, "LogNormalVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::NormalVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3NormalVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, "NormalVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Object' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3Object_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Object");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Object::AggregateIterator' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3ObjectAggregateIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, "AggregateIterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3ObjectAggregateIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ObjectAggregateIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ObjectAggregateIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ParetoVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3ParetoVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, "ParetoVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::PcapFileWrapper' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3PcapFileWrapper_Type = (PyTypeObject*) PyObject_GetAttrString(module, "PcapFileWrapper");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Queue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Queue_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Queue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SimpleRefCount< ns3::AttributeAccessor, ns3::empty, ns3::DefaultDeleter<ns3::AttributeAccessor> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, "SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::AttributeAccessor, ns3::empty, ns3::DefaultDeleter<ns3::AttributeAccessor> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::AttributeChecker, ns3::empty, ns3::DefaultDeleter<ns3::AttributeChecker> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, "SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::AttributeChecker, ns3::empty, ns3::DefaultDeleter<ns3::AttributeChecker> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::AttributeValue, ns3::empty, ns3::DefaultDeleter<ns3::AttributeValue> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, "SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::AttributeValue, ns3::empty, ns3::DefaultDeleter<ns3::AttributeValue> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::CallbackImplBase, ns3::empty, ns3::DefaultDeleter<ns3::CallbackImplBase> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, "SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::CallbackImplBase, ns3::empty, ns3::DefaultDeleter<ns3::CallbackImplBase> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::EventImpl, ns3::empty, ns3::DefaultDeleter<ns3::EventImpl> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, "SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::EventImpl, ns3::empty, ns3::DefaultDeleter<ns3::EventImpl> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::NixVector, ns3::empty, ns3::DefaultDeleter<ns3::NixVector> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, "SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::NixVector, ns3::empty, ns3::DefaultDeleter<ns3::NixVector> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::OutputStreamWrapper, ns3::empty, ns3::DefaultDeleter<ns3::OutputStreamWrapper> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, "SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::OutputStreamWrapper, ns3::empty, ns3::DefaultDeleter<ns3::OutputStreamWrapper> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::Packet, ns3::empty, ns3::DefaultDeleter<ns3::Packet> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, "SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::Packet, ns3::empty, ns3::DefaultDeleter<ns3::Packet> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::TraceSourceAccessor, ns3::empty, ns3::DefaultDeleter<ns3::TraceSourceAccessor> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, "SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::TraceSourceAccessor, ns3::empty, ns3::DefaultDeleter<ns3::TraceSourceAccessor> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Time' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3Time_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Time");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, "_PyNs3Time_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Time_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Time_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::TraceSourceAccessor' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3TraceSourceAccessor_Type = (PyTypeObject*) PyObject_GetAttrString(module, "TraceSourceAccessor");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Trailer' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Trailer_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Trailer");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::AttributeAccessor' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3AttributeAccessor_Type = (PyTypeObject*) PyObject_GetAttrString(module, "AttributeAccessor");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::AttributeChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3AttributeChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, "AttributeChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::AttributeValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3AttributeValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, "AttributeValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::CallbackChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3CallbackChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, "CallbackChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::CallbackImplBase' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3CallbackImplBase_Type = (PyTypeObject*) PyObject_GetAttrString(module, "CallbackImplBase");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::CallbackValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3CallbackValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, "CallbackValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Channel' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Channel_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Channel");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::DataRateChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3DataRateChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, "DataRateChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::DataRateValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3DataRateValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, "DataRateValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::EmptyAttributeValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3EmptyAttributeValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, "EmptyAttributeValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ErrorModel' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3ErrorModel_Type = (PyTypeObject*) PyObject_GetAttrString(module, "ErrorModel");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::EventImpl' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3EventImpl_Type = (PyTypeObject*) PyObject_GetAttrString(module, "EventImpl");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4AddressChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Ipv4AddressChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Ipv4AddressChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4AddressValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Ipv4AddressValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Ipv4AddressValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4MaskChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Ipv4MaskChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Ipv4MaskChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4MaskValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Ipv4MaskValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Ipv4MaskValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv6AddressChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Ipv6AddressChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Ipv6AddressChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv6AddressValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Ipv6AddressValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Ipv6AddressValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv6PrefixChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Ipv6PrefixChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Ipv6PrefixChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv6PrefixValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Ipv6PrefixValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Ipv6PrefixValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ListErrorModel' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3ListErrorModel_Type = (PyTypeObject*) PyObject_GetAttrString(module, "ListErrorModel");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Mac48AddressChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Mac48AddressChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Mac48AddressChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Mac48AddressValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Mac48AddressValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Mac48AddressValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::NetDevice' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3NetDevice_Type = (PyTypeObject*) PyObject_GetAttrString(module, "NetDevice");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::NixVector' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3NixVector_Type = (PyTypeObject*) PyObject_GetAttrString(module, "NixVector");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Node' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Node_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Node");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ObjectFactoryChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3ObjectFactoryChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, "ObjectFactoryChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ObjectFactoryValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3ObjectFactoryValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, "ObjectFactoryValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::OutputStreamWrapper' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3OutputStreamWrapper_Type = (PyTypeObject*) PyObject_GetAttrString(module, "OutputStreamWrapper");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Packet' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Packet_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Packet");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::RandomVariableChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3RandomVariableChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, "RandomVariableChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::RandomVariableValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3RandomVariableValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, "RandomVariableValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::RateErrorModel' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3RateErrorModel_Type = (PyTypeObject*) PyObject_GetAttrString(module, "RateErrorModel");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ReceiveListErrorModel' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3ReceiveListErrorModel_Type = (PyTypeObject*) PyObject_GetAttrString(module, "ReceiveListErrorModel");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::TimeChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3TimeChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, "TimeChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::TimeValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3TimeValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, "TimeValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::TypeIdChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3TypeIdChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, "TypeIdChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::TypeIdValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3TypeIdValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, "TypeIdValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::AddressChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3AddressChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, "AddressChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::AddressValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3AddressValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, "AddressValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Register the 'ns3::PointToPointHelper' class */
    PyNs3PointToPointHelper_Type.tp_base = &PyNs3PcapHelperForDevice_Type;
    PyNs3PointToPointHelper_Type.tp_bases = PyTuple_New(2);
        Py_INCREF((PyObject *) &PyNs3PcapHelperForDevice_Type);
        PyTuple_SET_ITEM(PyNs3PointToPointHelper_Type.tp_bases, 0, (PyObject *) &PyNs3PcapHelperForDevice_Type);
        Py_INCREF((PyObject *) &PyNs3AsciiTraceHelperForDevice_Type);
        PyTuple_SET_ITEM(PyNs3PointToPointHelper_Type.tp_bases, 1, (PyObject *) &PyNs3AsciiTraceHelperForDevice_Type);
    if (PyType_Ready(&PyNs3PointToPointHelper_Type)) {
        return;
    }
    PyModule_AddObject(m, (char *) "PointToPointHelper", (PyObject *) &PyNs3PointToPointHelper_Type);
    /* Register the 'ns3::PppHeader' class */
    PyNs3PppHeader_Type.tp_base = &PyNs3Header_Type;
    if (PyType_Ready(&PyNs3PppHeader_Type)) {
        return;
    }
    PyModule_AddObject(m, (char *) "PppHeader", (PyObject *) &PyNs3PppHeader_Type);
    PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.register_wrapper(typeid(ns3::PointToPointChannel), &PyNs3PointToPointChannel_Type);
    /* Register the 'ns3::PointToPointChannel' class */
    PyNs3PointToPointChannel_Type.tp_base = &PyNs3Channel_Type;
    if (PyType_Ready(&PyNs3PointToPointChannel_Type)) {
        return;
    }
    PyModule_AddObject(m, (char *) "PointToPointChannel", (PyObject *) &PyNs3PointToPointChannel_Type);
    PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.register_wrapper(typeid(ns3::PointToPointNetDevice), &PyNs3PointToPointNetDevice_Type);
    /* Register the 'ns3::PointToPointNetDevice' class */
    PyNs3PointToPointNetDevice_Type.tp_base = &PyNs3NetDevice_Type;
    if (PyType_Ready(&PyNs3PointToPointNetDevice_Type)) {
        return;
    }
    PyModule_AddObject(m, (char *) "PointToPointNetDevice", (PyObject *) &PyNs3PointToPointNetDevice_Type);
    PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.register_wrapper(typeid(ns3::PointToPointRemoteChannel), &PyNs3PointToPointRemoteChannel_Type);
    /* Register the 'ns3::PointToPointRemoteChannel' class */
    PyNs3PointToPointRemoteChannel_Type.tp_base = &PyNs3PointToPointChannel_Type;
    if (PyType_Ready(&PyNs3PointToPointRemoteChannel_Type)) {
        return;
    }
    PyModule_AddObject(m, (char *) "PointToPointRemoteChannel", (PyObject *) &PyNs3PointToPointRemoteChannel_Type);
    /* Register the 'std::list< unsigned int >' class */
    if (PyType_Ready(&Pystd__list__lt___unsigned_int___gt___Type)) {
        return;
    }
    if (PyType_Ready(&Pystd__list__lt___unsigned_int___gt__Iter_Type)) {
        return;
    }
    PyModule_AddObject(m, (char *) "Std__list__lt___unsigned_int___gt__", (PyObject *) &Pystd__list__lt___unsigned_int___gt___Type);
    PyModule_AddObject(m, (char *) "Std__list__lt___unsigned_int___gt__Iter", (PyObject *) &Pystd__list__lt___unsigned_int___gt__Iter_Type);
    submodule = initpoint_to_point_FatalImpl();
    if (submodule == NULL) {
        return;
    }
    Py_INCREF(submodule);
    PyModule_AddObject(m, (char *) "FatalImpl", submodule);
}
