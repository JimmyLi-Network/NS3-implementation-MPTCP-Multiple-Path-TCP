#include "ns3module.h"
static PyMethodDef stats_FatalImpl_functions[] = {
    {NULL, NULL, 0, NULL}
};

static PyObject *
initstats_FatalImpl(void)
{
    PyObject *m;
    m = Py_InitModule3((char *) "stats.FatalImpl", stats_FatalImpl_functions, NULL);
    if (m == NULL) {
        return NULL;
    }
    return m;
}
/* --- module functions --- */


PyObject *
_wrap_stats_isNaN(PyObject * PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    double x;
    const char *keywords[] = {"x", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "d", (char **) keywords, &x)) {
        return NULL;
    }
    retval = ns3::isNaN(x);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}
PyObject * _wrap_stats_isNaN(PyObject * PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs);

static PyMethodDef stats_functions[] = {
    {(char *) "isNaN", (PyCFunction) _wrap_stats_isNaN, METH_KEYWORDS|METH_VARARGS, NULL },
    {NULL, NULL, 0, NULL}
};
/* --- classes --- */


PyTypeObject *_PyNs3Address_Type;
std::map<void*, PyObject*> *_PyNs3Address_wrapper_registry;


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


PyTypeObject *_PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter_Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map;


PyTypeObject *_PyNs3Simulator_Type;
std::map<void*, PyObject*> *_PyNs3Simulator_wrapper_registry;


PyTypeObject *_PyNs3Tag_Type;


PyTypeObject *_PyNs3TagBuffer_Type;
std::map<void*, PyObject*> *_PyNs3TagBuffer_wrapper_registry;


PyTypeObject *_PyNs3TypeId_Type;
std::map<void*, PyObject*> *_PyNs3TypeId_wrapper_registry;


PyTypeObject *_PyNs3TypeIdAttributeInformation_Type;
std::map<void*, PyObject*> *_PyNs3TypeIdAttributeInformation_wrapper_registry;


PyTypeObject *_PyNs3TypeIdTraceSourceInformation_Type;
std::map<void*, PyObject*> *_PyNs3TypeIdTraceSourceInformation_wrapper_registry;


PyTypeObject *_PyNs3Empty_Type;
std::map<void*, PyObject*> *_PyNs3Empty_wrapper_registry;


PyTypeObject *_PyNs3Int64x64_t_Type;
std::map<void*, PyObject*> *_PyNs3Int64x64_t_wrapper_registry;


PyTypeObject *_PyNs3Chunk_Type;


PyTypeObject *_PyNs3Header_Type;


PyTypeObject *_PyNs3Object_Type;


PyTypeObject *_PyNs3ObjectAggregateIterator_Type;
std::map<void*, PyObject*> *_PyNs3ObjectAggregateIterator_wrapper_registry;


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


PyTypeObject *_PyNs3EmptyAttributeValue_Type;


PyTypeObject *_PyNs3EventImpl_Type;


PyTypeObject *_PyNs3Ipv4AddressChecker_Type;


PyTypeObject *_PyNs3Ipv4AddressValue_Type;


PyTypeObject *_PyNs3Ipv4MaskChecker_Type;


PyTypeObject *_PyNs3Ipv4MaskValue_Type;


PyTypeObject *_PyNs3Ipv6AddressChecker_Type;


PyTypeObject *_PyNs3Ipv6AddressValue_Type;


PyTypeObject *_PyNs3Ipv6PrefixChecker_Type;


PyTypeObject *_PyNs3Ipv6PrefixValue_Type;


PyTypeObject *_PyNs3Mac48AddressChecker_Type;


PyTypeObject *_PyNs3Mac48AddressValue_Type;


PyTypeObject *_PyNs3NixVector_Type;


PyTypeObject *_PyNs3ObjectFactoryChecker_Type;


PyTypeObject *_PyNs3ObjectFactoryValue_Type;


PyTypeObject *_PyNs3Packet_Type;


PyTypeObject *_PyNs3TimeChecker_Type;


PyTypeObject *_PyNs3TimeValue_Type;


PyTypeObject *_PyNs3TypeIdChecker_Type;


PyTypeObject *_PyNs3TypeIdValue_Type;


PyTypeObject *_PyNs3AddressChecker_Type;


PyTypeObject *_PyNs3AddressValue_Type;


std::map<void*, PyObject*> PyNs3DataOutputCallback_wrapper_registry;

static int
_wrap_PyNs3DataOutputCallback__tp_init(void)
{
    PyErr_SetString(PyExc_TypeError, "class 'DataOutputCallback' cannot be constructed (have pure virtual methods but no helper class)");
    return -1;
}


PyObject *
_wrap_PyNs3DataOutputCallback_OutputStatistic(PyNs3DataOutputCallback *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *key;
    Py_ssize_t key_len;
    const char *variable;
    Py_ssize_t variable_len;
    PyNs3StatisticalSummary *statSum;
    ns3::StatisticalSummary *statSum_ptr;
    const char *keywords[] = {"key", "variable", "statSum", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#s#O!", (char **) keywords, &key, &key_len, &variable, &variable_len, &PyNs3StatisticalSummary_Type, &statSum)) {
        return NULL;
    }
    statSum_ptr = (statSum ? statSum->obj : NULL);
    self->obj->OutputStatistic(std::string(key, key_len), std::string(variable, variable_len), statSum_ptr);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}



PyObject *
_wrap_PyNs3DataOutputCallback_OutputSingleton__0(PyNs3DataOutputCallback *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *key;
    Py_ssize_t key_len;
    const char *variable;
    Py_ssize_t variable_len;
    int val;
    const char *keywords[] = {"key", "variable", "val", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#s#i", (char **) keywords, &key, &key_len, &variable, &variable_len, &val)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    self->obj->OutputSingleton(std::string(key, key_len), std::string(variable, variable_len), val);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3DataOutputCallback_OutputSingleton__1(PyNs3DataOutputCallback *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *key;
    Py_ssize_t key_len;
    const char *variable;
    Py_ssize_t variable_len;
    unsigned int val;
    const char *keywords[] = {"key", "variable", "val", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#s#I", (char **) keywords, &key, &key_len, &variable, &variable_len, &val)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    self->obj->OutputSingleton(std::string(key, key_len), std::string(variable, variable_len), val);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3DataOutputCallback_OutputSingleton__2(PyNs3DataOutputCallback *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *key;
    Py_ssize_t key_len;
    const char *variable;
    Py_ssize_t variable_len;
    double val;
    const char *keywords[] = {"key", "variable", "val", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#s#d", (char **) keywords, &key, &key_len, &variable, &variable_len, &val)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    self->obj->OutputSingleton(std::string(key, key_len), std::string(variable, variable_len), val);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3DataOutputCallback_OutputSingleton__3(PyNs3DataOutputCallback *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *key;
    Py_ssize_t key_len;
    const char *variable;
    Py_ssize_t variable_len;
    const char *val;
    Py_ssize_t val_len;
    const char *keywords[] = {"key", "variable", "val", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#s#s#", (char **) keywords, &key, &key_len, &variable, &variable_len, &val, &val_len)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    self->obj->OutputSingleton(std::string(key, key_len), std::string(variable, variable_len), std::string(val, val_len));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3DataOutputCallback_OutputSingleton__4(PyNs3DataOutputCallback *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *key;
    Py_ssize_t key_len;
    const char *variable;
    Py_ssize_t variable_len;
    PyNs3Time *val;
    const char *keywords[] = {"key", "variable", "val", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#s#O!", (char **) keywords, &key, &key_len, &variable, &variable_len, &PyNs3Time_Type, &val)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    self->obj->OutputSingleton(std::string(key, key_len), std::string(variable, variable_len), *((PyNs3Time *) val)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject * _wrap_PyNs3DataOutputCallback_OutputSingleton(PyNs3DataOutputCallback *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[5] = {0,};
    retval = _wrap_PyNs3DataOutputCallback_OutputSingleton__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3DataOutputCallback_OutputSingleton__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    retval = _wrap_PyNs3DataOutputCallback_OutputSingleton__2(self, args, kwargs, &exceptions[2]);
    if (!exceptions[2]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        return retval;
    }
    retval = _wrap_PyNs3DataOutputCallback_OutputSingleton__3(self, args, kwargs, &exceptions[3]);
    if (!exceptions[3]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        Py_DECREF(exceptions[2]);
        return retval;
    }
    retval = _wrap_PyNs3DataOutputCallback_OutputSingleton__4(self, args, kwargs, &exceptions[4]);
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

static PyMethodDef PyNs3DataOutputCallback_methods[] = {
    {(char *) "OutputStatistic", (PyCFunction) _wrap_PyNs3DataOutputCallback_OutputStatistic, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "OutputSingleton", (PyCFunction) _wrap_PyNs3DataOutputCallback_OutputSingleton, METH_KEYWORDS|METH_VARARGS, NULL },
    {NULL, NULL, 0, NULL}
};

static void
PyNs3DataOutputCallback__tp_clear(PyNs3DataOutputCallback *self)
{
    Py_CLEAR(self->inst_dict);
        ns3::DataOutputCallback *tmp = self->obj;
    self->obj = NULL;
    if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
        delete tmp;
    }
}


static int
PyNs3DataOutputCallback__tp_traverse(PyNs3DataOutputCallback *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    return 0;
}


static void
_wrap_PyNs3DataOutputCallback__tp_dealloc(PyNs3DataOutputCallback *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3DataOutputCallback_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3DataOutputCallback_wrapper_registry.end()) {
        PyNs3DataOutputCallback_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3DataOutputCallback__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3DataOutputCallback__tp_richcompare (PyNs3DataOutputCallback *PYBINDGEN_UNUSED(self), PyNs3DataOutputCallback *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3DataOutputCallback_Type)) {
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

PyTypeObject PyNs3DataOutputCallback_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "stats.DataOutputCallback",            /* tp_name */
    sizeof(PyNs3DataOutputCallback),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3DataOutputCallback__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3DataOutputCallback__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3DataOutputCallback__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3DataOutputCallback__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3DataOutputCallback_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3DataOutputCallback, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3DataOutputCallback__tp_init,             /* tp_init */
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



std::map<void*, PyObject*> PyNs3StatisticalSummary_wrapper_registry;

long int
PyNs3StatisticalSummary__PythonHelper::getCount() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::StatisticalSummary *self_obj_before;
    PyObject *py_retval;
    long int retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getCount"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    self_obj_before = reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj;
    reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = const_cast< ns3::StatisticalSummary* >((const ns3::StatisticalSummary*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getCount", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "l", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

double
PyNs3StatisticalSummary__PythonHelper::getMax() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::StatisticalSummary *self_obj_before;
    PyObject *py_retval;
    double retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getMax"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    self_obj_before = reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj;
    reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = const_cast< ns3::StatisticalSummary* >((const ns3::StatisticalSummary*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getMax", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "d", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

double
PyNs3StatisticalSummary__PythonHelper::getMean() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::StatisticalSummary *self_obj_before;
    PyObject *py_retval;
    double retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getMean"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    self_obj_before = reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj;
    reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = const_cast< ns3::StatisticalSummary* >((const ns3::StatisticalSummary*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getMean", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "d", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

double
PyNs3StatisticalSummary__PythonHelper::getMin() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::StatisticalSummary *self_obj_before;
    PyObject *py_retval;
    double retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getMin"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    self_obj_before = reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj;
    reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = const_cast< ns3::StatisticalSummary* >((const ns3::StatisticalSummary*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getMin", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "d", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

double
PyNs3StatisticalSummary__PythonHelper::getSqrSum() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::StatisticalSummary *self_obj_before;
    PyObject *py_retval;
    double retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getSqrSum"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    self_obj_before = reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj;
    reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = const_cast< ns3::StatisticalSummary* >((const ns3::StatisticalSummary*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getSqrSum", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "d", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

double
PyNs3StatisticalSummary__PythonHelper::getStddev() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::StatisticalSummary *self_obj_before;
    PyObject *py_retval;
    double retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getStddev"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    self_obj_before = reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj;
    reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = const_cast< ns3::StatisticalSummary* >((const ns3::StatisticalSummary*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getStddev", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "d", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

double
PyNs3StatisticalSummary__PythonHelper::getSum() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::StatisticalSummary *self_obj_before;
    PyObject *py_retval;
    double retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getSum"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    self_obj_before = reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj;
    reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = const_cast< ns3::StatisticalSummary* >((const ns3::StatisticalSummary*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getSum", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "d", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

double
PyNs3StatisticalSummary__PythonHelper::getVariance() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::StatisticalSummary *self_obj_before;
    PyObject *py_retval;
    double retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getVariance"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    self_obj_before = reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj;
    reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = const_cast< ns3::StatisticalSummary* >((const ns3::StatisticalSummary*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getVariance", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "d", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3StatisticalSummary* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}


static int
_wrap_PyNs3StatisticalSummary__tp_init__0(PyNs3StatisticalSummary *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3StatisticalSummary_Type)
    {
        self->obj = new PyNs3StatisticalSummary__PythonHelper();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3StatisticalSummary__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        PyErr_SetString(PyExc_TypeError, "class 'StatisticalSummary' cannot be constructed");
        return -1;
    }
    return 0;
}

static int
_wrap_PyNs3StatisticalSummary__tp_init__1(PyNs3StatisticalSummary *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3StatisticalSummary *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3StatisticalSummary_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3StatisticalSummary_Type)
    {
        self->obj = new PyNs3StatisticalSummary__PythonHelper(*((PyNs3StatisticalSummary *) arg0)->obj);
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3StatisticalSummary__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        PyErr_SetString(PyExc_TypeError, "class 'StatisticalSummary' cannot be constructed");
        return -1;
    }
    return 0;
}

int _wrap_PyNs3StatisticalSummary__tp_init(PyNs3StatisticalSummary *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3StatisticalSummary__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3StatisticalSummary__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3StatisticalSummary_getMin(PyNs3StatisticalSummary *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->getMin();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3StatisticalSummary_getVariance(PyNs3StatisticalSummary *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->getVariance();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3StatisticalSummary_getMean(PyNs3StatisticalSummary *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->getMean();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3StatisticalSummary_getSum(PyNs3StatisticalSummary *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->getSum();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3StatisticalSummary_getStddev(PyNs3StatisticalSummary *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->getStddev();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3StatisticalSummary_getSqrSum(PyNs3StatisticalSummary *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->getSqrSum();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3StatisticalSummary_getMax(PyNs3StatisticalSummary *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->getMax();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3StatisticalSummary_getCount(PyNs3StatisticalSummary *self)
{
    PyObject *py_retval;
    long int retval;
    
    retval = self->obj->getCount();
    py_retval = Py_BuildValue((char *) "l", retval);
    return py_retval;
}

static PyMethodDef PyNs3StatisticalSummary_methods[] = {
    {(char *) "getMin", (PyCFunction) _wrap_PyNs3StatisticalSummary_getMin, METH_NOARGS, NULL },
    {(char *) "getVariance", (PyCFunction) _wrap_PyNs3StatisticalSummary_getVariance, METH_NOARGS, NULL },
    {(char *) "getMean", (PyCFunction) _wrap_PyNs3StatisticalSummary_getMean, METH_NOARGS, NULL },
    {(char *) "getSum", (PyCFunction) _wrap_PyNs3StatisticalSummary_getSum, METH_NOARGS, NULL },
    {(char *) "getStddev", (PyCFunction) _wrap_PyNs3StatisticalSummary_getStddev, METH_NOARGS, NULL },
    {(char *) "getSqrSum", (PyCFunction) _wrap_PyNs3StatisticalSummary_getSqrSum, METH_NOARGS, NULL },
    {(char *) "getMax", (PyCFunction) _wrap_PyNs3StatisticalSummary_getMax, METH_NOARGS, NULL },
    {(char *) "getCount", (PyCFunction) _wrap_PyNs3StatisticalSummary_getCount, METH_NOARGS, NULL },
    {NULL, NULL, 0, NULL}
};

static void
PyNs3StatisticalSummary__tp_clear(PyNs3StatisticalSummary *self)
{
    Py_CLEAR(self->inst_dict);
        ns3::StatisticalSummary *tmp = self->obj;
    self->obj = NULL;
    if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
        delete tmp;
    }
}


static int
PyNs3StatisticalSummary__tp_traverse(PyNs3StatisticalSummary *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj).name() == typeid(PyNs3StatisticalSummary__PythonHelper).name() )
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3StatisticalSummary__tp_dealloc(PyNs3StatisticalSummary *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3StatisticalSummary_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3StatisticalSummary_wrapper_registry.end()) {
        PyNs3StatisticalSummary_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3StatisticalSummary__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3StatisticalSummary__tp_richcompare (PyNs3StatisticalSummary *PYBINDGEN_UNUSED(self), PyNs3StatisticalSummary *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3StatisticalSummary_Type)) {
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

PyTypeObject PyNs3StatisticalSummary_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "stats.StatisticalSummary",            /* tp_name */
    sizeof(PyNs3StatisticalSummary),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3StatisticalSummary__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3StatisticalSummary__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3StatisticalSummary__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3StatisticalSummary__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3StatisticalSummary_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3StatisticalSummary, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3StatisticalSummary__tp_init,             /* tp_init */
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
_wrap_PyNs3DataCalculator__tp_init(void)
{
    PyErr_SetString(PyExc_TypeError, "class 'DataCalculator' cannot be constructed (have pure virtual methods but no helper class)");
    return -1;
}


PyObject *
_wrap_PyNs3DataCalculator_Enable(PyNs3DataCalculator *self)
{
    PyObject *py_retval;
    
    self->obj->Enable();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DataCalculator_Stop(PyNs3DataCalculator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Time *stopTime;
    const char *keywords[] = {"stopTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Time_Type, &stopTime)) {
        return NULL;
    }
    self->obj->Stop(*((PyNs3Time *) stopTime)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DataCalculator_GetKey(PyNs3DataCalculator *self)
{
    PyObject *py_retval;
    std::string retval;
    
    retval = self->obj->GetKey();
    py_retval = Py_BuildValue((char *) "s#", (retval).c_str(), (retval).size());
    return py_retval;
}


PyObject *
_wrap_PyNs3DataCalculator_Start(PyNs3DataCalculator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Time *startTime;
    const char *keywords[] = {"startTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Time_Type, &startTime)) {
        return NULL;
    }
    self->obj->Start(*((PyNs3Time *) startTime)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DataCalculator_SetKey(PyNs3DataCalculator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *key;
    Py_ssize_t key_len;
    const char *keywords[] = {"key", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &key, &key_len)) {
        return NULL;
    }
    self->obj->SetKey(std::string(key, key_len));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DataCalculator_Disable(PyNs3DataCalculator *self)
{
    PyObject *py_retval;
    
    self->obj->Disable();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DataCalculator_GetEnabled(PyNs3DataCalculator *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->GetEnabled();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3DataCalculator_Output(PyNs3DataCalculator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3DataOutputCallback *callback;
    const char *keywords[] = {"callback", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DataOutputCallback_Type, &callback)) {
        return NULL;
    }
    self->obj->Output(*((PyNs3DataOutputCallback *) callback)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DataCalculator_GetContext(PyNs3DataCalculator *self)
{
    PyObject *py_retval;
    std::string retval;
    
    retval = self->obj->GetContext();
    py_retval = Py_BuildValue((char *) "s#", (retval).c_str(), (retval).size());
    return py_retval;
}


PyObject *
_wrap_PyNs3DataCalculator_SetContext(PyNs3DataCalculator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *context;
    Py_ssize_t context_len;
    const char *keywords[] = {"context", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &context, &context_len)) {
        return NULL;
    }
    self->obj->SetContext(std::string(context, context_len));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

static PyMethodDef PyNs3DataCalculator_methods[] = {
    {(char *) "Enable", (PyCFunction) _wrap_PyNs3DataCalculator_Enable, METH_NOARGS, NULL },
    {(char *) "Stop", (PyCFunction) _wrap_PyNs3DataCalculator_Stop, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetKey", (PyCFunction) _wrap_PyNs3DataCalculator_GetKey, METH_NOARGS, NULL },
    {(char *) "Start", (PyCFunction) _wrap_PyNs3DataCalculator_Start, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetKey", (PyCFunction) _wrap_PyNs3DataCalculator_SetKey, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Disable", (PyCFunction) _wrap_PyNs3DataCalculator_Disable, METH_NOARGS, NULL },
    {(char *) "GetEnabled", (PyCFunction) _wrap_PyNs3DataCalculator_GetEnabled, METH_NOARGS, NULL },
    {(char *) "Output", (PyCFunction) _wrap_PyNs3DataCalculator_Output, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetContext", (PyCFunction) _wrap_PyNs3DataCalculator_GetContext, METH_NOARGS, NULL },
    {(char *) "SetContext", (PyCFunction) _wrap_PyNs3DataCalculator_SetContext, METH_KEYWORDS|METH_VARARGS, NULL },
    {NULL, NULL, 0, NULL}
};

static void
PyNs3DataCalculator__tp_clear(PyNs3DataCalculator *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::DataCalculator *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3DataCalculator__tp_traverse(PyNs3DataCalculator *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    return 0;
}


static void
_wrap_PyNs3DataCalculator__tp_dealloc(PyNs3DataCalculator *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3DataCalculator__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3DataCalculator__tp_richcompare (PyNs3DataCalculator *PYBINDGEN_UNUSED(self), PyNs3DataCalculator *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3DataCalculator_Type)) {
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

PyTypeObject PyNs3DataCalculator_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "stats.DataCalculator",            /* tp_name */
    sizeof(PyNs3DataCalculator),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3DataCalculator__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3DataCalculator__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3DataCalculator__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3DataCalculator__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3DataCalculator_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3DataCalculator, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3DataCalculator__tp_init,             /* tp_init */
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
PyNs3DataCollector__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3DataCollector *self)
{
    PyObject *py_retval;
    PyNs3DataCollector__PythonHelper *helper = dynamic_cast< PyNs3DataCollector__PythonHelper* >(self->obj);
    
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
PyNs3DataCollector__PythonHelper::_wrap_NotifyNewAggregate(PyNs3DataCollector *self)
{
    PyObject *py_retval;
    PyNs3DataCollector__PythonHelper *helper = dynamic_cast< PyNs3DataCollector__PythonHelper* >(self->obj);
    
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
PyNs3DataCollector__PythonHelper::_wrap_GetInstanceTypeId(PyNs3DataCollector *self)
{
    PyObject *py_retval;
    PyNs3DataCollector__PythonHelper *helper = dynamic_cast< PyNs3DataCollector__PythonHelper* >(self->obj);
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
PyNs3DataCollector__PythonHelper::_wrap_DoStart(PyNs3DataCollector *self)
{
    PyObject *py_retval;
    PyNs3DataCollector__PythonHelper *helper = dynamic_cast< PyNs3DataCollector__PythonHelper* >(self->obj);
    
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
PyNs3DataCollector__PythonHelper::_wrap_DoDispose(PyNs3DataCollector *self)
{
    PyObject *py_retval;
    PyNs3DataCollector__PythonHelper *helper = dynamic_cast< PyNs3DataCollector__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class DataCollector is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

void
PyNs3DataCollector__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::DataCollector *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::DataCollector::DoDispose();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3DataCollector* >(m_pyself)->obj;
    reinterpret_cast< PyNs3DataCollector* >(m_pyself)->obj = (ns3::DataCollector*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3DataCollector* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3DataCollector* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3DataCollector* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3DataCollector__PythonHelper::GetInstanceTypeId() const
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
PyNs3DataCollector__PythonHelper::DoStart()
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
PyNs3DataCollector__PythonHelper::NotifyNewAggregate()
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
PyNs3DataCollector__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3DataCollector__tp_init__0(PyNs3DataCollector *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3DataCollector *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DataCollector_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3DataCollector_Type)
    {
        self->obj = new PyNs3DataCollector__PythonHelper(*((PyNs3DataCollector *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3DataCollector__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::DataCollector(*((PyNs3DataCollector *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3DataCollector__tp_init__1(PyNs3DataCollector *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3DataCollector_Type)
    {
        self->obj = new PyNs3DataCollector__PythonHelper();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3DataCollector__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::DataCollector();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3DataCollector__tp_init(PyNs3DataCollector *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3DataCollector__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3DataCollector__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3DataCollector_GetRunLabel(PyNs3DataCollector *self)
{
    PyObject *py_retval;
    std::string retval;
    
    retval = self->obj->GetRunLabel();
    py_retval = Py_BuildValue((char *) "s#", (retval).c_str(), (retval).size());
    return py_retval;
}


PyObject *
_wrap_PyNs3DataCollector_GetStrategyLabel(PyNs3DataCollector *self)
{
    PyObject *py_retval;
    std::string retval;
    
    retval = self->obj->GetStrategyLabel();
    py_retval = Py_BuildValue((char *) "s#", (retval).c_str(), (retval).size());
    return py_retval;
}


PyObject *
_wrap_PyNs3DataCollector_GetExperimentLabel(PyNs3DataCollector *self)
{
    PyObject *py_retval;
    std::string retval;
    
    retval = self->obj->GetExperimentLabel();
    py_retval = Py_BuildValue((char *) "s#", (retval).c_str(), (retval).size());
    return py_retval;
}


PyObject *
_wrap_PyNs3DataCollector_DescribeRun(PyNs3DataCollector *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *experiment;
    Py_ssize_t experiment_len;
    const char *strategy;
    Py_ssize_t strategy_len;
    const char *input;
    Py_ssize_t input_len;
    const char *runID;
    Py_ssize_t runID_len;
    const char *description = NULL;
    Py_ssize_t description_len;
    const char *keywords[] = {"experiment", "strategy", "input", "runID", "description", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#s#s#s#|s#", (char **) keywords, &experiment, &experiment_len, &strategy, &strategy_len, &input, &input_len, &runID, &runID_len, &description, &description_len)) {
        return NULL;
    }
    self->obj->DescribeRun(std::string(experiment, experiment_len), std::string(strategy, strategy_len), std::string(input, input_len), std::string(runID, runID_len), (description ? std::string(description, description_len) : ""));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DataCollector_GetDescription(PyNs3DataCollector *self)
{
    PyObject *py_retval;
    std::string retval;
    
    retval = self->obj->GetDescription();
    py_retval = Py_BuildValue((char *) "s#", (retval).c_str(), (retval).size());
    return py_retval;
}


PyObject *
_wrap_PyNs3DataCollector_AddDataCalculator(PyNs3DataCollector *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3DataCalculator *datac;
    ns3::DataCalculator *datac_ptr;
    const char *keywords[] = {"datac", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DataCalculator_Type, &datac)) {
        return NULL;
    }
    datac_ptr = (datac ? datac->obj : NULL);
    self->obj->AddDataCalculator(ns3::Ptr< ns3::DataCalculator  > (datac_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}



PyObject *
_wrap_PyNs3DataCollector_AddMetadata__0(PyNs3DataCollector *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *key;
    Py_ssize_t key_len;
    const char *value;
    Py_ssize_t value_len;
    const char *keywords[] = {"key", "value", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#s#", (char **) keywords, &key, &key_len, &value, &value_len)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    self->obj->AddMetadata(std::string(key, key_len), std::string(value, value_len));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3DataCollector_AddMetadata__1(PyNs3DataCollector *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *key;
    Py_ssize_t key_len;
    double value;
    const char *keywords[] = {"key", "value", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#d", (char **) keywords, &key, &key_len, &value)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    self->obj->AddMetadata(std::string(key, key_len), value);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3DataCollector_AddMetadata__2(PyNs3DataCollector *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *key;
    Py_ssize_t key_len;
    unsigned int value;
    const char *keywords[] = {"key", "value", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#I", (char **) keywords, &key, &key_len, &value)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    self->obj->AddMetadata(std::string(key, key_len), value);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject * _wrap_PyNs3DataCollector_AddMetadata(PyNs3DataCollector *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[3] = {0,};
    retval = _wrap_PyNs3DataCollector_AddMetadata__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3DataCollector_AddMetadata__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    retval = _wrap_PyNs3DataCollector_AddMetadata__2(self, args, kwargs, &exceptions[2]);
    if (!exceptions[2]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        return retval;
    }
    error_list = PyList_New(3);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyList_SET_ITEM(error_list, 2, PyObject_Str(exceptions[2]));
    Py_DECREF(exceptions[2]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return NULL;
}


PyObject *
_wrap_PyNs3DataCollector_GetInputLabel(PyNs3DataCollector *self)
{
    PyObject *py_retval;
    std::string retval;
    
    retval = self->obj->GetInputLabel();
    py_retval = Py_BuildValue((char *) "s#", (retval).c_str(), (retval).size());
    return py_retval;
}


static PyObject*
_wrap_PyNs3DataCollector__copy__(PyNs3DataCollector *self)
{

    PyNs3DataCollector *py_copy;
    py_copy = PyObject_GC_New(PyNs3DataCollector, &PyNs3DataCollector_Type);
    py_copy->obj = new ns3::DataCollector(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3DataCollector_methods[] = {
    {(char *) "GetRunLabel", (PyCFunction) _wrap_PyNs3DataCollector_GetRunLabel, METH_NOARGS, NULL },
    {(char *) "GetStrategyLabel", (PyCFunction) _wrap_PyNs3DataCollector_GetStrategyLabel, METH_NOARGS, NULL },
    {(char *) "GetExperimentLabel", (PyCFunction) _wrap_PyNs3DataCollector_GetExperimentLabel, METH_NOARGS, NULL },
    {(char *) "DescribeRun", (PyCFunction) _wrap_PyNs3DataCollector_DescribeRun, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetDescription", (PyCFunction) _wrap_PyNs3DataCollector_GetDescription, METH_NOARGS, NULL },
    {(char *) "AddDataCalculator", (PyCFunction) _wrap_PyNs3DataCollector_AddDataCalculator, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "AddMetadata", (PyCFunction) _wrap_PyNs3DataCollector_AddMetadata, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetInputLabel", (PyCFunction) _wrap_PyNs3DataCollector_GetInputLabel, METH_NOARGS, NULL },
    {(char *) "_NotifyConstructionCompleted", (PyCFunction) PyNs3DataCollector__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "_NotifyNewAggregate", (PyCFunction) PyNs3DataCollector__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "_GetInstanceTypeId", (PyCFunction) PyNs3DataCollector__PythonHelper::_wrap_GetInstanceTypeId, METH_NOARGS, NULL },
    {(char *) "_DoStart", (PyCFunction) PyNs3DataCollector__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "_DoDispose", (PyCFunction) PyNs3DataCollector__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3DataCollector__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3DataCollector__tp_clear(PyNs3DataCollector *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::DataCollector *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3DataCollector__tp_traverse(PyNs3DataCollector *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj).name() == typeid(PyNs3DataCollector__PythonHelper).name()  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3DataCollector__tp_dealloc(PyNs3DataCollector *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3DataCollector__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3DataCollector__tp_richcompare (PyNs3DataCollector *PYBINDGEN_UNUSED(self), PyNs3DataCollector *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3DataCollector_Type)) {
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

PyTypeObject PyNs3DataCollector_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "stats.DataCollector",            /* tp_name */
    sizeof(PyNs3DataCollector),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3DataCollector__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3DataCollector__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3DataCollector__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3DataCollector__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3DataCollector_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3DataCollector, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3DataCollector__tp_init,             /* tp_init */
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
PyNs3DataOutputInterface__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3DataOutputInterface *self)
{
    PyObject *py_retval;
    PyNs3DataOutputInterface__PythonHelper *helper = dynamic_cast< PyNs3DataOutputInterface__PythonHelper* >(self->obj);
    
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
PyNs3DataOutputInterface__PythonHelper::_wrap_NotifyNewAggregate(PyNs3DataOutputInterface *self)
{
    PyObject *py_retval;
    PyNs3DataOutputInterface__PythonHelper *helper = dynamic_cast< PyNs3DataOutputInterface__PythonHelper* >(self->obj);
    
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
PyNs3DataOutputInterface__PythonHelper::_wrap_GetInstanceTypeId(PyNs3DataOutputInterface *self)
{
    PyObject *py_retval;
    PyNs3DataOutputInterface__PythonHelper *helper = dynamic_cast< PyNs3DataOutputInterface__PythonHelper* >(self->obj);
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
PyNs3DataOutputInterface__PythonHelper::_wrap_DoStart(PyNs3DataOutputInterface *self)
{
    PyObject *py_retval;
    PyNs3DataOutputInterface__PythonHelper *helper = dynamic_cast< PyNs3DataOutputInterface__PythonHelper* >(self->obj);
    
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
PyNs3DataOutputInterface__PythonHelper::_wrap_DoDispose(PyNs3DataOutputInterface *self)
{
    PyObject *py_retval;
    PyNs3DataOutputInterface__PythonHelper *helper = dynamic_cast< PyNs3DataOutputInterface__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class DataOutputInterface is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

void
PyNs3DataOutputInterface__PythonHelper::Output(ns3::DataCollector & dc)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::DataOutputInterface *self_obj_before;
    PyObject *py_retval;
    PyNs3DataCollector *py_DataCollector;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_Output"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3DataOutputInterface* >(m_pyself)->obj;
    reinterpret_cast< PyNs3DataOutputInterface* >(m_pyself)->obj = (ns3::DataOutputInterface*) this;
    py_DataCollector = PyObject_GC_New(PyNs3DataCollector, &PyNs3DataCollector_Type);
    py_DataCollector->inst_dict = NULL;
    py_DataCollector->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_DataCollector->obj = new ns3::DataCollector(dc);
    py_DataCollector->obj->Ref ();
    PyNs3ObjectBase_wrapper_registry[(void *) py_DataCollector->obj] = (PyObject *) py_DataCollector;
    ns3::CompleteConstruct(py_DataCollector->obj);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_Output", (char *) "N", py_DataCollector);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3DataOutputInterface* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3DataOutputInterface* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3DataOutputInterface* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3DataOutputInterface__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::DataOutputInterface *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::DataOutputInterface::DoDispose();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3DataOutputInterface* >(m_pyself)->obj;
    reinterpret_cast< PyNs3DataOutputInterface* >(m_pyself)->obj = (ns3::DataOutputInterface*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3DataOutputInterface* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3DataOutputInterface* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3DataOutputInterface* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3DataOutputInterface__PythonHelper::GetInstanceTypeId() const
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
PyNs3DataOutputInterface__PythonHelper::DoStart()
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
PyNs3DataOutputInterface__PythonHelper::NotifyNewAggregate()
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
PyNs3DataOutputInterface__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3DataOutputInterface__tp_init__0(PyNs3DataOutputInterface *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3DataOutputInterface *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DataOutputInterface_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3DataOutputInterface_Type)
    {
        self->obj = new PyNs3DataOutputInterface__PythonHelper(*((PyNs3DataOutputInterface *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3DataOutputInterface__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        PyErr_SetString(PyExc_TypeError, "class 'DataOutputInterface' cannot be constructed");
        return -1;
    }
    return 0;
}

static int
_wrap_PyNs3DataOutputInterface__tp_init__1(PyNs3DataOutputInterface *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3DataOutputInterface_Type)
    {
        self->obj = new PyNs3DataOutputInterface__PythonHelper();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3DataOutputInterface__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        PyErr_SetString(PyExc_TypeError, "class 'DataOutputInterface' cannot be constructed");
        return -1;
    }
    return 0;
}

int _wrap_PyNs3DataOutputInterface__tp_init(PyNs3DataOutputInterface *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3DataOutputInterface__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3DataOutputInterface__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3DataOutputInterface_Output(PyNs3DataOutputInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3DataCollector *dc;
    const char *keywords[] = {"dc", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DataCollector_Type, &dc)) {
        return NULL;
    }
    self->obj->Output(*((PyNs3DataCollector *) dc)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DataOutputInterface_SetFilePrefix(PyNs3DataOutputInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *prefix;
    Py_ssize_t prefix_len;
    const char *keywords[] = {"prefix", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &prefix, &prefix_len)) {
        return NULL;
    }
    self->obj->SetFilePrefix(std::string(prefix, prefix_len));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DataOutputInterface_GetFilePrefix(PyNs3DataOutputInterface *self)
{
    PyObject *py_retval;
    std::string retval;
    
    retval = self->obj->GetFilePrefix();
    py_retval = Py_BuildValue((char *) "s#", (retval).c_str(), (retval).size());
    return py_retval;
}

static PyMethodDef PyNs3DataOutputInterface_methods[] = {
    {(char *) "Output", (PyCFunction) _wrap_PyNs3DataOutputInterface_Output, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetFilePrefix", (PyCFunction) _wrap_PyNs3DataOutputInterface_SetFilePrefix, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetFilePrefix", (PyCFunction) _wrap_PyNs3DataOutputInterface_GetFilePrefix, METH_NOARGS, NULL },
    {(char *) "_NotifyConstructionCompleted", (PyCFunction) PyNs3DataOutputInterface__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "_NotifyNewAggregate", (PyCFunction) PyNs3DataOutputInterface__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "_GetInstanceTypeId", (PyCFunction) PyNs3DataOutputInterface__PythonHelper::_wrap_GetInstanceTypeId, METH_NOARGS, NULL },
    {(char *) "_DoStart", (PyCFunction) PyNs3DataOutputInterface__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "_DoDispose", (PyCFunction) PyNs3DataOutputInterface__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {NULL, NULL, 0, NULL}
};

static void
PyNs3DataOutputInterface__tp_clear(PyNs3DataOutputInterface *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::DataOutputInterface *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3DataOutputInterface__tp_traverse(PyNs3DataOutputInterface *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj).name() == typeid(PyNs3DataOutputInterface__PythonHelper).name()  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3DataOutputInterface__tp_dealloc(PyNs3DataOutputInterface *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3DataOutputInterface__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3DataOutputInterface__tp_richcompare (PyNs3DataOutputInterface *PYBINDGEN_UNUSED(self), PyNs3DataOutputInterface *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3DataOutputInterface_Type)) {
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

PyTypeObject PyNs3DataOutputInterface_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "stats.DataOutputInterface",            /* tp_name */
    sizeof(PyNs3DataOutputInterface),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3DataOutputInterface__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3DataOutputInterface__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3DataOutputInterface__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3DataOutputInterface__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3DataOutputInterface_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3DataOutputInterface, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3DataOutputInterface__tp_init,             /* tp_init */
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
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper* >(self->obj);
    
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
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_getMin(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    double retval;
    PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method getMin of class MinMaxAvgTotalCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->getMin__parent_caller();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}

PyObject *
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_Stop(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Time *stopTime;
    PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper* >(self->obj);
    const char *keywords[] = {"stopTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Time_Type, &stopTime)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method Stop of class DataCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    helper->Stop__parent_caller(*((PyNs3Time *) stopTime)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_NotifyNewAggregate(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper* >(self->obj);
    
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
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_DoDispose(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class MinMaxAvgTotalCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_getVariance(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    double retval;
    PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method getVariance of class MinMaxAvgTotalCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->getVariance__parent_caller();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}

PyObject *
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_DoStart(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper* >(self->obj);
    
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
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_getMean(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    double retval;
    PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method getMean of class MinMaxAvgTotalCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->getMean__parent_caller();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}

PyObject *
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_Start(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Time *startTime;
    PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper* >(self->obj);
    const char *keywords[] = {"startTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Time_Type, &startTime)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method Start of class DataCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    helper->Start__parent_caller(*((PyNs3Time *) startTime)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_getSum(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    double retval;
    PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method getSum of class MinMaxAvgTotalCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->getSum__parent_caller();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}

PyObject *
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_getStddev(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    double retval;
    PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method getStddev of class MinMaxAvgTotalCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->getStddev__parent_caller();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}

PyObject *
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_getSqrSum(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    double retval;
    PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method getSqrSum of class MinMaxAvgTotalCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->getSqrSum__parent_caller();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}

PyObject *
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_getCount(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    long int retval;
    PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method getCount of class MinMaxAvgTotalCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->getCount__parent_caller();
    py_retval = Py_BuildValue((char *) "l", retval);
    return py_retval;
}

PyObject *
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_getMax(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    double retval;
    PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method getMax of class MinMaxAvgTotalCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->getMax__parent_caller();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}

PyObject *
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_Output(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3DataOutputCallback *callback;
    PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper* >(self->obj);
    const char *keywords[] = {"callback", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DataOutputCallback_Type, &callback)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method Output of class MinMaxAvgTotalCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    helper->Output__parent_caller(*((PyNs3DataOutputCallback *) callback)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_GetInstanceTypeId(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper* >(self->obj);
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


long int
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::getCount() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MinMaxAvgTotalCalculator< unsigned int > *self_obj_before;
    PyObject *py_retval;
    long int retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getCount"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getCount();
    }
    self_obj_before = reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = const_cast< ns3::MinMaxAvgTotalCalculator< unsigned int >* >((const ns3::MinMaxAvgTotalCalculator< unsigned int >*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getCount", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getCount();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "l", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getCount();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

double
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::getMax() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MinMaxAvgTotalCalculator< unsigned int > *self_obj_before;
    PyObject *py_retval;
    double retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getMax"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getMax();
    }
    self_obj_before = reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = const_cast< ns3::MinMaxAvgTotalCalculator< unsigned int >* >((const ns3::MinMaxAvgTotalCalculator< unsigned int >*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getMax", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getMax();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "d", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getMax();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

double
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::getMean() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MinMaxAvgTotalCalculator< unsigned int > *self_obj_before;
    PyObject *py_retval;
    double retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getMean"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getMean();
    }
    self_obj_before = reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = const_cast< ns3::MinMaxAvgTotalCalculator< unsigned int >* >((const ns3::MinMaxAvgTotalCalculator< unsigned int >*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getMean", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getMean();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "d", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getMean();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

double
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::getMin() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MinMaxAvgTotalCalculator< unsigned int > *self_obj_before;
    PyObject *py_retval;
    double retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getMin"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getMin();
    }
    self_obj_before = reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = const_cast< ns3::MinMaxAvgTotalCalculator< unsigned int >* >((const ns3::MinMaxAvgTotalCalculator< unsigned int >*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getMin", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getMin();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "d", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getMin();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

double
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::getSqrSum() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MinMaxAvgTotalCalculator< unsigned int > *self_obj_before;
    PyObject *py_retval;
    double retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getSqrSum"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getSqrSum();
    }
    self_obj_before = reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = const_cast< ns3::MinMaxAvgTotalCalculator< unsigned int >* >((const ns3::MinMaxAvgTotalCalculator< unsigned int >*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getSqrSum", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getSqrSum();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "d", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getSqrSum();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

double
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::getStddev() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MinMaxAvgTotalCalculator< unsigned int > *self_obj_before;
    PyObject *py_retval;
    double retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getStddev"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getStddev();
    }
    self_obj_before = reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = const_cast< ns3::MinMaxAvgTotalCalculator< unsigned int >* >((const ns3::MinMaxAvgTotalCalculator< unsigned int >*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getStddev", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getStddev();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "d", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getStddev();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

double
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::getSum() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MinMaxAvgTotalCalculator< unsigned int > *self_obj_before;
    PyObject *py_retval;
    double retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getSum"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getSum();
    }
    self_obj_before = reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = const_cast< ns3::MinMaxAvgTotalCalculator< unsigned int >* >((const ns3::MinMaxAvgTotalCalculator< unsigned int >*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getSum", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getSum();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "d", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getSum();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

double
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::getVariance() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MinMaxAvgTotalCalculator< unsigned int > *self_obj_before;
    PyObject *py_retval;
    double retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getVariance"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getVariance();
    }
    self_obj_before = reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = const_cast< ns3::MinMaxAvgTotalCalculator< unsigned int >* >((const ns3::MinMaxAvgTotalCalculator< unsigned int >*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getVariance", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getVariance();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "d", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getVariance();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MinMaxAvgTotalCalculator< unsigned int > *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::MinMaxAvgTotalCalculator< unsigned int >::DoDispose();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = (ns3::MinMaxAvgTotalCalculator< unsigned int >*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::Stop(ns3::Time const & stopTime)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::DataCalculator *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_Stop"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::DataCalculator::Stop(stopTime);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = (ns3::DataCalculator*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(stopTime);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_Stop", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::Start(ns3::Time const & startTime)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::DataCalculator *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_Start"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::DataCalculator::Start(startTime);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = (ns3::DataCalculator*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(startTime);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_Start", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::GetInstanceTypeId() const
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
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::DoStart()
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
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::NotifyNewAggregate()
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
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int__tp_init__0(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3MinMaxAvgTotalCalculator__Unsigned_int *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Type)
    {
        self->obj = new PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper(*((PyNs3MinMaxAvgTotalCalculator__Unsigned_int *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::MinMaxAvgTotalCalculator< unsigned int >(*((PyNs3MinMaxAvgTotalCalculator__Unsigned_int *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int__tp_init__1(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Type)
    {
        self->obj = new PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::MinMaxAvgTotalCalculator< unsigned int >();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int__tp_init(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_getSqrSum(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->getSqrSum();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_getVariance(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->getVariance();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Update(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int i;
    const char *keywords[] = {"i", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &i)) {
        return NULL;
    }
    self->obj->Update(i);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_getMean(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->getMean();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_getSum(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->getSum();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_getStddev(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->getStddev();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_getMin(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->getMin();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_getCount(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    long int retval;
    
    retval = self->obj->getCount();
    py_retval = Py_BuildValue((char *) "l", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_getMax(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    double retval;
    
    retval = self->obj->getMax();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Output(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3DataOutputCallback *callback;
    const char *keywords[] = {"callback", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DataOutputCallback_Type, &callback)) {
        return NULL;
    }
    self->obj->Output(*((PyNs3DataOutputCallback *) callback)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Dispose(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    
    self->obj->Dispose();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_GetKey(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    std::string retval;
    
    retval = self->obj->GetKey();
    py_retval = Py_BuildValue((char *) "s#", (retval).c_str(), (retval).size());
    return py_retval;
}

PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Cleanup(void)
{
    PyObject *py_retval;
    
    ns3::MinMaxAvgTotalCalculator< unsigned int >::Cleanup();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_GetEnabled(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->GetEnabled();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}

PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Enable(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    
    self->obj->Enable();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_GetAttribute(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *name;
    Py_ssize_t name_len;
    PyNs3AttributeValue *value;
    const char *keywords[] = {"name", "value", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!", (char **) keywords, &name, &name_len, &PyNs3AttributeValue_Type, &value)) {
        return NULL;
    }
    self->obj->GetAttribute(std::string(name, name_len), *((PyNs3AttributeValue *) value)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Stop(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Time *stopTime;
    const char *keywords[] = {"stopTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Time_Type, &stopTime)) {
        return NULL;
    }
    self->obj->Stop(*((PyNs3Time *) stopTime)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_GetContext(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    std::string retval;
    
    retval = self->obj->GetContext();
    py_retval = Py_BuildValue((char *) "s#", (retval).c_str(), (retval).size());
    return py_retval;
}

PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Disable(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    
    self->obj->Disable();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_TraceDisconnect(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    const char *name;
    Py_ssize_t name_len;
    const char *context;
    Py_ssize_t context_len;
    PyNs3CallbackBase *cb;
    const char *keywords[] = {"name", "context", "cb", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#s#O!", (char **) keywords, &name, &name_len, &context, &context_len, &PyNs3CallbackBase_Type, &cb)) {
        return NULL;
    }
    retval = self->obj->TraceDisconnect(std::string(name, name_len), std::string(context, context_len), *((PyNs3CallbackBase *) cb)->obj);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}

PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_SetAttributeFailSafe(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    const char *name;
    Py_ssize_t name_len;
    PyNs3AttributeValue *value;
    const char *keywords[] = {"name", "value", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!", (char **) keywords, &name, &name_len, &PyNs3AttributeValue_Type, &value)) {
        return NULL;
    }
    retval = self->obj->SetAttributeFailSafe(std::string(name, name_len), *((PyNs3AttributeValue *) value)->obj);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}

PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_AggregateObject(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Object *other;
    ns3::Object *other_ptr;
    const char *keywords[] = {"other", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Object_Type, &other)) {
        return NULL;
    }
    other_ptr = (other ? other->obj : NULL);
    self->obj->AggregateObject(ns3::Ptr< ns3::Object  > (other_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_SetAttribute(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *name;
    Py_ssize_t name_len;
    PyNs3AttributeValue *value;
    const char *keywords[] = {"name", "value", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!", (char **) keywords, &name, &name_len, &PyNs3AttributeValue_Type, &value)) {
        return NULL;
    }
    self->obj->SetAttribute(std::string(name, name_len), *((PyNs3AttributeValue *) value)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_TraceConnect(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    const char *name;
    Py_ssize_t name_len;
    const char *context;
    Py_ssize_t context_len;
    PyNs3CallbackBase *cb;
    const char *keywords[] = {"name", "context", "cb", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#s#O!", (char **) keywords, &name, &name_len, &context, &context_len, &PyNs3CallbackBase_Type, &cb)) {
        return NULL;
    }
    retval = self->obj->TraceConnect(std::string(name, name_len), std::string(context, context_len), *((PyNs3CallbackBase *) cb)->obj);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}

PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_TraceDisconnectWithoutContext(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    const char *name;
    Py_ssize_t name_len;
    PyNs3CallbackBase *cb;
    const char *keywords[] = {"name", "cb", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!", (char **) keywords, &name, &name_len, &PyNs3CallbackBase_Type, &cb)) {
        return NULL;
    }
    retval = self->obj->TraceDisconnectWithoutContext(std::string(name, name_len), *((PyNs3CallbackBase *) cb)->obj);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}

PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_SetKey(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *key;
    Py_ssize_t key_len;
    const char *keywords[] = {"key", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &key, &key_len)) {
        return NULL;
    }
    self->obj->SetKey(std::string(key, key_len));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_TraceConnectWithoutContext(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    const char *name;
    Py_ssize_t name_len;
    PyNs3CallbackBase *cb;
    const char *keywords[] = {"name", "cb", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!", (char **) keywords, &name, &name_len, &PyNs3CallbackBase_Type, &cb)) {
        return NULL;
    }
    retval = self->obj->TraceConnectWithoutContext(std::string(name, name_len), *((PyNs3CallbackBase *) cb)->obj);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}

PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_GetAggregateIterator(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    PyNs3ObjectAggregateIterator *py_AggregateIterator;
    
    ns3::Object::AggregateIterator retval = self->obj->GetAggregateIterator();
    py_AggregateIterator = PyObject_New(PyNs3ObjectAggregateIterator, &PyNs3ObjectAggregateIterator_Type);
    py_AggregateIterator->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_AggregateIterator->obj = new ns3::Object::AggregateIterator(retval);
    PyNs3ObjectAggregateIterator_wrapper_registry[(void *) py_AggregateIterator->obj] = (PyObject *) py_AggregateIterator;
    py_retval = Py_BuildValue((char *) "N", py_AggregateIterator);
    return py_retval;
}

PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_GetAttributeFailSafe(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    const char *name;
    Py_ssize_t name_len;
    PyNs3AttributeValue *attribute;
    const char *keywords[] = {"name", "attribute", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!", (char **) keywords, &name, &name_len, &PyNs3AttributeValue_Type, &attribute)) {
        return NULL;
    }
    retval = self->obj->GetAttributeFailSafe(std::string(name, name_len), *((PyNs3AttributeValue *) attribute)->obj);
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}

PyObject *
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_SetContext(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *context;
    Py_ssize_t context_len;
    const char *keywords[] = {"context", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &context, &context_len)) {
        return NULL;
    }
    self->obj->SetContext(std::string(context, context_len));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int__copy__(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{

    PyNs3MinMaxAvgTotalCalculator__Unsigned_int *py_copy;
    py_copy = PyObject_GC_New(PyNs3MinMaxAvgTotalCalculator__Unsigned_int, &PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Type);
    py_copy->obj = new ns3::MinMaxAvgTotalCalculator< unsigned int >(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3MinMaxAvgTotalCalculator__Unsigned_int_methods[] = {
    {(char *) "getSqrSum", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_getSqrSum, METH_NOARGS, NULL },
    {(char *) "getVariance", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_getVariance, METH_NOARGS, NULL },
    {(char *) "Update", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Update, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "getMean", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_getMean, METH_NOARGS, NULL },
    {(char *) "getSum", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_getSum, METH_NOARGS, NULL },
    {(char *) "getStddev", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_getStddev, METH_NOARGS, NULL },
    {(char *) "getMin", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_getMin, METH_NOARGS, NULL },
    {(char *) "getCount", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_getCount, METH_NOARGS, NULL },
    {(char *) "getMax", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_getMax, METH_NOARGS, NULL },
    {(char *) "Output", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Output, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_NotifyConstructionCompleted", (PyCFunction) PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "_getMin", (PyCFunction) PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_getMin, METH_NOARGS, NULL },
    {(char *) "_Stop", (PyCFunction) PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_Stop, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_NotifyNewAggregate", (PyCFunction) PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "_DoDispose", (PyCFunction) PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "_getVariance", (PyCFunction) PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_getVariance, METH_NOARGS, NULL },
    {(char *) "_DoStart", (PyCFunction) PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "_getMean", (PyCFunction) PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_getMean, METH_NOARGS, NULL },
    {(char *) "_Start", (PyCFunction) PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_Start, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_getSum", (PyCFunction) PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_getSum, METH_NOARGS, NULL },
    {(char *) "_getStddev", (PyCFunction) PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_getStddev, METH_NOARGS, NULL },
    {(char *) "_getSqrSum", (PyCFunction) PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_getSqrSum, METH_NOARGS, NULL },
    {(char *) "_getCount", (PyCFunction) PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_getCount, METH_NOARGS, NULL },
    {(char *) "_getMax", (PyCFunction) PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_getMax, METH_NOARGS, NULL },
    {(char *) "_Output", (PyCFunction) PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_Output, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_GetInstanceTypeId", (PyCFunction) PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper::_wrap_GetInstanceTypeId, METH_NOARGS, NULL },
    {(char *) "Dispose", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Dispose, METH_NOARGS, NULL },
    {(char *) "GetKey", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_GetKey, METH_NOARGS, NULL },
    {(char *) "Cleanup", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Cleanup, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "GetEnabled", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_GetEnabled, METH_NOARGS, NULL },
    {(char *) "Enable", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Enable, METH_NOARGS, NULL },
    {(char *) "GetAttribute", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_GetAttribute, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Stop", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Stop, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetContext", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_GetContext, METH_NOARGS, NULL },
    {(char *) "Disable", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Disable, METH_NOARGS, NULL },
    {(char *) "TraceDisconnect", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_TraceDisconnect, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetAttributeFailSafe", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_SetAttributeFailSafe, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "AggregateObject", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_AggregateObject, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetAttribute", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_SetAttribute, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "TraceConnect", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_TraceConnect, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "TraceDisconnectWithoutContext", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_TraceDisconnectWithoutContext, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetKey", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_SetKey, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "TraceConnectWithoutContext", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_TraceConnectWithoutContext, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetAggregateIterator", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_GetAggregateIterator, METH_NOARGS, NULL },
    {(char *) "GetAttributeFailSafe", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_GetAttributeFailSafe, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetContext", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int_SetContext, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__tp_clear(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::MinMaxAvgTotalCalculator< unsigned int > *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3MinMaxAvgTotalCalculator__Unsigned_int__tp_traverse(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj).name() == typeid(PyNs3MinMaxAvgTotalCalculator__Unsigned_int__PythonHelper).name()  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int__tp_dealloc(PyNs3MinMaxAvgTotalCalculator__Unsigned_int *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3MinMaxAvgTotalCalculator__Unsigned_int__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int__tp_richcompare (PyNs3MinMaxAvgTotalCalculator__Unsigned_int *PYBINDGEN_UNUSED(self), PyNs3MinMaxAvgTotalCalculator__Unsigned_int *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Type)) {
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

PyTypeObject PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "stats.MinMaxAvgTotalCalculator__Unsigned_int",            /* tp_name */
    sizeof(PyNs3MinMaxAvgTotalCalculator__Unsigned_int),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3MinMaxAvgTotalCalculator__Unsigned_int__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3MinMaxAvgTotalCalculator__Unsigned_int__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3MinMaxAvgTotalCalculator__Unsigned_int_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3MinMaxAvgTotalCalculator__Unsigned_int, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3MinMaxAvgTotalCalculator__Unsigned_int__tp_init,             /* tp_init */
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
PyNs3OmnetDataOutput__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3OmnetDataOutput *self)
{
    PyObject *py_retval;
    PyNs3OmnetDataOutput__PythonHelper *helper = dynamic_cast< PyNs3OmnetDataOutput__PythonHelper* >(self->obj);
    
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
PyNs3OmnetDataOutput__PythonHelper::_wrap_NotifyNewAggregate(PyNs3OmnetDataOutput *self)
{
    PyObject *py_retval;
    PyNs3OmnetDataOutput__PythonHelper *helper = dynamic_cast< PyNs3OmnetDataOutput__PythonHelper* >(self->obj);
    
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
PyNs3OmnetDataOutput__PythonHelper::_wrap_DoDispose(PyNs3OmnetDataOutput *self)
{
    PyObject *py_retval;
    PyNs3OmnetDataOutput__PythonHelper *helper = dynamic_cast< PyNs3OmnetDataOutput__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class OmnetDataOutput is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3OmnetDataOutput__PythonHelper::_wrap_DoStart(PyNs3OmnetDataOutput *self)
{
    PyObject *py_retval;
    PyNs3OmnetDataOutput__PythonHelper *helper = dynamic_cast< PyNs3OmnetDataOutput__PythonHelper* >(self->obj);
    
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
PyNs3OmnetDataOutput__PythonHelper::_wrap_GetInstanceTypeId(PyNs3OmnetDataOutput *self)
{
    PyObject *py_retval;
    PyNs3OmnetDataOutput__PythonHelper *helper = dynamic_cast< PyNs3OmnetDataOutput__PythonHelper* >(self->obj);
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
PyNs3OmnetDataOutput__PythonHelper::_wrap_Output(PyNs3OmnetDataOutput *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3DataCollector *dc;
    PyNs3OmnetDataOutput__PythonHelper *helper = dynamic_cast< PyNs3OmnetDataOutput__PythonHelper* >(self->obj);
    const char *keywords[] = {"dc", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DataCollector_Type, &dc)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method Output of class OmnetDataOutput is protected and can only be called by a subclass");
        return NULL;
    }
    helper->Output__parent_caller(*((PyNs3DataCollector *) dc)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

void
PyNs3OmnetDataOutput__PythonHelper::Output(ns3::DataCollector & dc)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::OmnetDataOutput *self_obj_before;
    PyObject *py_retval;
    PyNs3DataCollector *py_DataCollector;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_Output"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::OmnetDataOutput::Output(dc);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3OmnetDataOutput* >(m_pyself)->obj;
    reinterpret_cast< PyNs3OmnetDataOutput* >(m_pyself)->obj = (ns3::OmnetDataOutput*) this;
    py_DataCollector = PyObject_GC_New(PyNs3DataCollector, &PyNs3DataCollector_Type);
    py_DataCollector->inst_dict = NULL;
    py_DataCollector->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_DataCollector->obj = new ns3::DataCollector(dc);
    py_DataCollector->obj->Ref ();
    PyNs3ObjectBase_wrapper_registry[(void *) py_DataCollector->obj] = (PyObject *) py_DataCollector;
    ns3::CompleteConstruct(py_DataCollector->obj);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_Output", (char *) "N", py_DataCollector);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3OmnetDataOutput* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3OmnetDataOutput* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3OmnetDataOutput* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3OmnetDataOutput__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::OmnetDataOutput *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::OmnetDataOutput::DoDispose();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3OmnetDataOutput* >(m_pyself)->obj;
    reinterpret_cast< PyNs3OmnetDataOutput* >(m_pyself)->obj = (ns3::OmnetDataOutput*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3OmnetDataOutput* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3OmnetDataOutput* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3OmnetDataOutput* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3OmnetDataOutput__PythonHelper::GetInstanceTypeId() const
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
PyNs3OmnetDataOutput__PythonHelper::DoStart()
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
PyNs3OmnetDataOutput__PythonHelper::NotifyNewAggregate()
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
PyNs3OmnetDataOutput__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3OmnetDataOutput__tp_init__0(PyNs3OmnetDataOutput *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3OmnetDataOutput *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3OmnetDataOutput_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3OmnetDataOutput_Type)
    {
        self->obj = new PyNs3OmnetDataOutput__PythonHelper(*((PyNs3OmnetDataOutput *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3OmnetDataOutput__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::OmnetDataOutput(*((PyNs3OmnetDataOutput *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3OmnetDataOutput__tp_init__1(PyNs3OmnetDataOutput *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3OmnetDataOutput_Type)
    {
        self->obj = new PyNs3OmnetDataOutput__PythonHelper();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3OmnetDataOutput__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::OmnetDataOutput();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3OmnetDataOutput__tp_init(PyNs3OmnetDataOutput *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3OmnetDataOutput__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3OmnetDataOutput__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3OmnetDataOutput_Output(PyNs3OmnetDataOutput *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3DataCollector *dc;
    const char *keywords[] = {"dc", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DataCollector_Type, &dc)) {
        return NULL;
    }
    self->obj->Output(*((PyNs3DataCollector *) dc)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3OmnetDataOutput__copy__(PyNs3OmnetDataOutput *self)
{

    PyNs3OmnetDataOutput *py_copy;
    py_copy = PyObject_GC_New(PyNs3OmnetDataOutput, &PyNs3OmnetDataOutput_Type);
    py_copy->obj = new ns3::OmnetDataOutput(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3OmnetDataOutput_methods[] = {
    {(char *) "Output", (PyCFunction) _wrap_PyNs3OmnetDataOutput_Output, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_NotifyConstructionCompleted", (PyCFunction) PyNs3OmnetDataOutput__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "_NotifyNewAggregate", (PyCFunction) PyNs3OmnetDataOutput__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "_DoDispose", (PyCFunction) PyNs3OmnetDataOutput__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "_DoStart", (PyCFunction) PyNs3OmnetDataOutput__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "_GetInstanceTypeId", (PyCFunction) PyNs3OmnetDataOutput__PythonHelper::_wrap_GetInstanceTypeId, METH_NOARGS, NULL },
    {(char *) "_Output", (PyCFunction) PyNs3OmnetDataOutput__PythonHelper::_wrap_Output, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3OmnetDataOutput__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3OmnetDataOutput__tp_clear(PyNs3OmnetDataOutput *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::OmnetDataOutput *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3OmnetDataOutput__tp_traverse(PyNs3OmnetDataOutput *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj).name() == typeid(PyNs3OmnetDataOutput__PythonHelper).name()  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3OmnetDataOutput__tp_dealloc(PyNs3OmnetDataOutput *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3OmnetDataOutput__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3OmnetDataOutput__tp_richcompare (PyNs3OmnetDataOutput *PYBINDGEN_UNUSED(self), PyNs3OmnetDataOutput *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3OmnetDataOutput_Type)) {
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

PyTypeObject PyNs3OmnetDataOutput_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "stats.OmnetDataOutput",            /* tp_name */
    sizeof(PyNs3OmnetDataOutput),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3OmnetDataOutput__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3OmnetDataOutput__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3OmnetDataOutput__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3OmnetDataOutput__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3OmnetDataOutput_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3OmnetDataOutput, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3OmnetDataOutput__tp_init,             /* tp_init */
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
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3PacketSizeMinMaxAvgTotalCalculator *self)
{
    PyObject *py_retval;
    PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
    
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
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_getSqrSum(PyNs3PacketSizeMinMaxAvgTotalCalculator *self)
{
    PyObject *py_retval;
    double retval;
    PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method getSqrSum of class MinMaxAvgTotalCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->getSqrSum__parent_caller();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}

PyObject *
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_getMin(PyNs3PacketSizeMinMaxAvgTotalCalculator *self)
{
    PyObject *py_retval;
    double retval;
    PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method getMin of class MinMaxAvgTotalCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->getMin__parent_caller();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}

PyObject *
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_GetInstanceTypeId(PyNs3PacketSizeMinMaxAvgTotalCalculator *self)
{
    PyObject *py_retval;
    PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
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
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_Stop(PyNs3PacketSizeMinMaxAvgTotalCalculator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Time *stopTime;
    PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
    const char *keywords[] = {"stopTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Time_Type, &stopTime)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method Stop of class DataCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    helper->Stop__parent_caller(*((PyNs3Time *) stopTime)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_DoStart(PyNs3PacketSizeMinMaxAvgTotalCalculator *self)
{
    PyObject *py_retval;
    PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
    
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
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_getMean(PyNs3PacketSizeMinMaxAvgTotalCalculator *self)
{
    PyObject *py_retval;
    double retval;
    PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method getMean of class MinMaxAvgTotalCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->getMean__parent_caller();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}

PyObject *
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_Start(PyNs3PacketSizeMinMaxAvgTotalCalculator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Time *startTime;
    PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
    const char *keywords[] = {"startTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Time_Type, &startTime)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method Start of class DataCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    helper->Start__parent_caller(*((PyNs3Time *) startTime)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_Output(PyNs3PacketSizeMinMaxAvgTotalCalculator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3DataOutputCallback *callback;
    PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
    const char *keywords[] = {"callback", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DataOutputCallback_Type, &callback)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method Output of class MinMaxAvgTotalCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    helper->Output__parent_caller(*((PyNs3DataOutputCallback *) callback)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_getSum(PyNs3PacketSizeMinMaxAvgTotalCalculator *self)
{
    PyObject *py_retval;
    double retval;
    PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method getSum of class MinMaxAvgTotalCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->getSum__parent_caller();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}

PyObject *
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_getStddev(PyNs3PacketSizeMinMaxAvgTotalCalculator *self)
{
    PyObject *py_retval;
    double retval;
    PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method getStddev of class MinMaxAvgTotalCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->getStddev__parent_caller();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}

PyObject *
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_getVariance(PyNs3PacketSizeMinMaxAvgTotalCalculator *self)
{
    PyObject *py_retval;
    double retval;
    PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method getVariance of class MinMaxAvgTotalCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->getVariance__parent_caller();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}

PyObject *
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_DoDispose(PyNs3PacketSizeMinMaxAvgTotalCalculator *self)
{
    PyObject *py_retval;
    PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class PacketSizeMinMaxAvgTotalCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_getMax(PyNs3PacketSizeMinMaxAvgTotalCalculator *self)
{
    PyObject *py_retval;
    double retval;
    PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method getMax of class MinMaxAvgTotalCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->getMax__parent_caller();
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}

PyObject *
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_getCount(PyNs3PacketSizeMinMaxAvgTotalCalculator *self)
{
    PyObject *py_retval;
    long int retval;
    PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method getCount of class MinMaxAvgTotalCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    retval = helper->getCount__parent_caller();
    py_retval = Py_BuildValue((char *) "l", retval);
    return py_retval;
}

PyObject *
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_NotifyNewAggregate(PyNs3PacketSizeMinMaxAvgTotalCalculator *self)
{
    PyObject *py_retval;
    PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyNewAggregate of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyNewAggregate__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

void
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::PacketSizeMinMaxAvgTotalCalculator *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::PacketSizeMinMaxAvgTotalCalculator::DoDispose();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3PacketSizeMinMaxAvgTotalCalculator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3PacketSizeMinMaxAvgTotalCalculator* >(m_pyself)->obj = (ns3::PacketSizeMinMaxAvgTotalCalculator*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3PacketSizeMinMaxAvgTotalCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3PacketSizeMinMaxAvgTotalCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3PacketSizeMinMaxAvgTotalCalculator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

double
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::getSqrSum() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MinMaxAvgTotalCalculator< unsigned int > *self_obj_before;
    PyObject *py_retval;
    double retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getSqrSum"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getSqrSum();
    }
    self_obj_before = reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = const_cast< ns3::MinMaxAvgTotalCalculator< unsigned int >* >((const ns3::MinMaxAvgTotalCalculator< unsigned int >*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getSqrSum", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getSqrSum();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "d", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getSqrSum();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

double
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::getVariance() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MinMaxAvgTotalCalculator< unsigned int > *self_obj_before;
    PyObject *py_retval;
    double retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getVariance"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getVariance();
    }
    self_obj_before = reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = const_cast< ns3::MinMaxAvgTotalCalculator< unsigned int >* >((const ns3::MinMaxAvgTotalCalculator< unsigned int >*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getVariance", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getVariance();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "d", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getVariance();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

double
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::getMean() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MinMaxAvgTotalCalculator< unsigned int > *self_obj_before;
    PyObject *py_retval;
    double retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getMean"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getMean();
    }
    self_obj_before = reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = const_cast< ns3::MinMaxAvgTotalCalculator< unsigned int >* >((const ns3::MinMaxAvgTotalCalculator< unsigned int >*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getMean", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getMean();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "d", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getMean();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

double
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::getSum() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MinMaxAvgTotalCalculator< unsigned int > *self_obj_before;
    PyObject *py_retval;
    double retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getSum"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getSum();
    }
    self_obj_before = reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = const_cast< ns3::MinMaxAvgTotalCalculator< unsigned int >* >((const ns3::MinMaxAvgTotalCalculator< unsigned int >*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getSum", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getSum();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "d", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getSum();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

double
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::getStddev() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MinMaxAvgTotalCalculator< unsigned int > *self_obj_before;
    PyObject *py_retval;
    double retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getStddev"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getStddev();
    }
    self_obj_before = reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = const_cast< ns3::MinMaxAvgTotalCalculator< unsigned int >* >((const ns3::MinMaxAvgTotalCalculator< unsigned int >*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getStddev", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getStddev();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "d", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getStddev();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

double
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::getMin() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MinMaxAvgTotalCalculator< unsigned int > *self_obj_before;
    PyObject *py_retval;
    double retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getMin"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getMin();
    }
    self_obj_before = reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = const_cast< ns3::MinMaxAvgTotalCalculator< unsigned int >* >((const ns3::MinMaxAvgTotalCalculator< unsigned int >*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getMin", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getMin();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "d", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getMin();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

long int
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::getCount() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MinMaxAvgTotalCalculator< unsigned int > *self_obj_before;
    PyObject *py_retval;
    long int retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getCount"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getCount();
    }
    self_obj_before = reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = const_cast< ns3::MinMaxAvgTotalCalculator< unsigned int >* >((const ns3::MinMaxAvgTotalCalculator< unsigned int >*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getCount", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getCount();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "l", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getCount();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

double
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::getMax() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MinMaxAvgTotalCalculator< unsigned int > *self_obj_before;
    PyObject *py_retval;
    double retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_getMax"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getMax();
    }
    self_obj_before = reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = const_cast< ns3::MinMaxAvgTotalCalculator< unsigned int >* >((const ns3::MinMaxAvgTotalCalculator< unsigned int >*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_getMax", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getMax();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "d", &retval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::MinMaxAvgTotalCalculator< unsigned int >::getMax();
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MinMaxAvgTotalCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}


void
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::Stop(ns3::Time const & stopTime)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::DataCalculator *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_Stop"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::DataCalculator::Stop(stopTime);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = (ns3::DataCalculator*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(stopTime);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_Stop", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::Start(ns3::Time const & startTime)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::DataCalculator *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_Start"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::DataCalculator::Start(startTime);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = (ns3::DataCalculator*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(startTime);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_Start", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::GetInstanceTypeId() const
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
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::DoStart()
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
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::NotifyNewAggregate()
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
PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3PacketSizeMinMaxAvgTotalCalculator__tp_init__0(PyNs3PacketSizeMinMaxAvgTotalCalculator *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3PacketSizeMinMaxAvgTotalCalculator *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3PacketSizeMinMaxAvgTotalCalculator_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3PacketSizeMinMaxAvgTotalCalculator_Type)
    {
        self->obj = new PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper(*((PyNs3PacketSizeMinMaxAvgTotalCalculator *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::PacketSizeMinMaxAvgTotalCalculator(*((PyNs3PacketSizeMinMaxAvgTotalCalculator *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3PacketSizeMinMaxAvgTotalCalculator__tp_init__1(PyNs3PacketSizeMinMaxAvgTotalCalculator *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3PacketSizeMinMaxAvgTotalCalculator_Type)
    {
        self->obj = new PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::PacketSizeMinMaxAvgTotalCalculator();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3PacketSizeMinMaxAvgTotalCalculator__tp_init(PyNs3PacketSizeMinMaxAvgTotalCalculator *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3PacketSizeMinMaxAvgTotalCalculator__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3PacketSizeMinMaxAvgTotalCalculator__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3PacketSizeMinMaxAvgTotalCalculator_PacketUpdate(PyNs3PacketSizeMinMaxAvgTotalCalculator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *path;
    Py_ssize_t path_len;
    PyNs3Packet *packet;
    ns3::Packet *packet_ptr;
    const char *keywords[] = {"path", "packet", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!", (char **) keywords, &path, &path_len, &PyNs3Packet_Type, &packet)) {
        return NULL;
    }
    packet_ptr = (packet ? packet->obj : NULL);
    self->obj->PacketUpdate(std::string(path, path_len), ns3::Ptr< ns3::Packet  > (packet_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3PacketSizeMinMaxAvgTotalCalculator_FrameUpdate(PyNs3PacketSizeMinMaxAvgTotalCalculator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *path;
    Py_ssize_t path_len;
    PyNs3Packet *packet;
    ns3::Packet *packet_ptr;
    PyNs3Mac48Address *realto;
    const char *keywords[] = {"path", "packet", "realto", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!O!", (char **) keywords, &path, &path_len, &PyNs3Packet_Type, &packet, &PyNs3Mac48Address_Type, &realto)) {
        return NULL;
    }
    packet_ptr = (packet ? packet->obj : NULL);
    self->obj->FrameUpdate(std::string(path, path_len), ns3::Ptr< ns3::Packet  > (packet_ptr), *((PyNs3Mac48Address *) realto)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3PacketSizeMinMaxAvgTotalCalculator__copy__(PyNs3PacketSizeMinMaxAvgTotalCalculator *self)
{

    PyNs3PacketSizeMinMaxAvgTotalCalculator *py_copy;
    py_copy = PyObject_GC_New(PyNs3PacketSizeMinMaxAvgTotalCalculator, &PyNs3PacketSizeMinMaxAvgTotalCalculator_Type);
    py_copy->obj = new ns3::PacketSizeMinMaxAvgTotalCalculator(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3PacketSizeMinMaxAvgTotalCalculator_methods[] = {
    {(char *) "PacketUpdate", (PyCFunction) _wrap_PyNs3PacketSizeMinMaxAvgTotalCalculator_PacketUpdate, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "FrameUpdate", (PyCFunction) _wrap_PyNs3PacketSizeMinMaxAvgTotalCalculator_FrameUpdate, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_NotifyConstructionCompleted", (PyCFunction) PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "_getSqrSum", (PyCFunction) PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_getSqrSum, METH_NOARGS, NULL },
    {(char *) "_getMin", (PyCFunction) PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_getMin, METH_NOARGS, NULL },
    {(char *) "_GetInstanceTypeId", (PyCFunction) PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_GetInstanceTypeId, METH_NOARGS, NULL },
    {(char *) "_Stop", (PyCFunction) PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_Stop, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_DoStart", (PyCFunction) PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "_getMean", (PyCFunction) PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_getMean, METH_NOARGS, NULL },
    {(char *) "_Start", (PyCFunction) PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_Start, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_Output", (PyCFunction) PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_Output, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_getSum", (PyCFunction) PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_getSum, METH_NOARGS, NULL },
    {(char *) "_getStddev", (PyCFunction) PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_getStddev, METH_NOARGS, NULL },
    {(char *) "_getVariance", (PyCFunction) PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_getVariance, METH_NOARGS, NULL },
    {(char *) "_DoDispose", (PyCFunction) PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "_getMax", (PyCFunction) PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_getMax, METH_NOARGS, NULL },
    {(char *) "_getCount", (PyCFunction) PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_getCount, METH_NOARGS, NULL },
    {(char *) "_NotifyNewAggregate", (PyCFunction) PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3PacketSizeMinMaxAvgTotalCalculator__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3PacketSizeMinMaxAvgTotalCalculator__tp_clear(PyNs3PacketSizeMinMaxAvgTotalCalculator *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::PacketSizeMinMaxAvgTotalCalculator *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3PacketSizeMinMaxAvgTotalCalculator__tp_traverse(PyNs3PacketSizeMinMaxAvgTotalCalculator *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj).name() == typeid(PyNs3PacketSizeMinMaxAvgTotalCalculator__PythonHelper).name()  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3PacketSizeMinMaxAvgTotalCalculator__tp_dealloc(PyNs3PacketSizeMinMaxAvgTotalCalculator *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3PacketSizeMinMaxAvgTotalCalculator__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3PacketSizeMinMaxAvgTotalCalculator__tp_richcompare (PyNs3PacketSizeMinMaxAvgTotalCalculator *PYBINDGEN_UNUSED(self), PyNs3PacketSizeMinMaxAvgTotalCalculator *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3PacketSizeMinMaxAvgTotalCalculator_Type)) {
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

PyTypeObject PyNs3PacketSizeMinMaxAvgTotalCalculator_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "stats.PacketSizeMinMaxAvgTotalCalculator",            /* tp_name */
    sizeof(PyNs3PacketSizeMinMaxAvgTotalCalculator),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3PacketSizeMinMaxAvgTotalCalculator__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3PacketSizeMinMaxAvgTotalCalculator__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3PacketSizeMinMaxAvgTotalCalculator__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3PacketSizeMinMaxAvgTotalCalculator__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3PacketSizeMinMaxAvgTotalCalculator_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3PacketSizeMinMaxAvgTotalCalculator, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3PacketSizeMinMaxAvgTotalCalculator__tp_init,             /* tp_init */
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
PyNs3SqliteDataOutput__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3SqliteDataOutput *self)
{
    PyObject *py_retval;
    PyNs3SqliteDataOutput__PythonHelper *helper = dynamic_cast< PyNs3SqliteDataOutput__PythonHelper* >(self->obj);
    
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
PyNs3SqliteDataOutput__PythonHelper::_wrap_NotifyNewAggregate(PyNs3SqliteDataOutput *self)
{
    PyObject *py_retval;
    PyNs3SqliteDataOutput__PythonHelper *helper = dynamic_cast< PyNs3SqliteDataOutput__PythonHelper* >(self->obj);
    
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
PyNs3SqliteDataOutput__PythonHelper::_wrap_DoDispose(PyNs3SqliteDataOutput *self)
{
    PyObject *py_retval;
    PyNs3SqliteDataOutput__PythonHelper *helper = dynamic_cast< PyNs3SqliteDataOutput__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class SqliteDataOutput is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3SqliteDataOutput__PythonHelper::_wrap_DoStart(PyNs3SqliteDataOutput *self)
{
    PyObject *py_retval;
    PyNs3SqliteDataOutput__PythonHelper *helper = dynamic_cast< PyNs3SqliteDataOutput__PythonHelper* >(self->obj);
    
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
PyNs3SqliteDataOutput__PythonHelper::_wrap_GetInstanceTypeId(PyNs3SqliteDataOutput *self)
{
    PyObject *py_retval;
    PyNs3SqliteDataOutput__PythonHelper *helper = dynamic_cast< PyNs3SqliteDataOutput__PythonHelper* >(self->obj);
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
PyNs3SqliteDataOutput__PythonHelper::_wrap_Output(PyNs3SqliteDataOutput *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3DataCollector *dc;
    PyNs3SqliteDataOutput__PythonHelper *helper = dynamic_cast< PyNs3SqliteDataOutput__PythonHelper* >(self->obj);
    const char *keywords[] = {"dc", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DataCollector_Type, &dc)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method Output of class SqliteDataOutput is protected and can only be called by a subclass");
        return NULL;
    }
    helper->Output__parent_caller(*((PyNs3DataCollector *) dc)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

void
PyNs3SqliteDataOutput__PythonHelper::Output(ns3::DataCollector & dc)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SqliteDataOutput *self_obj_before;
    PyObject *py_retval;
    PyNs3DataCollector *py_DataCollector;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_Output"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::SqliteDataOutput::Output(dc);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3SqliteDataOutput* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SqliteDataOutput* >(m_pyself)->obj = (ns3::SqliteDataOutput*) this;
    py_DataCollector = PyObject_GC_New(PyNs3DataCollector, &PyNs3DataCollector_Type);
    py_DataCollector->inst_dict = NULL;
    py_DataCollector->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_DataCollector->obj = new ns3::DataCollector(dc);
    py_DataCollector->obj->Ref ();
    PyNs3ObjectBase_wrapper_registry[(void *) py_DataCollector->obj] = (PyObject *) py_DataCollector;
    ns3::CompleteConstruct(py_DataCollector->obj);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_Output", (char *) "N", py_DataCollector);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SqliteDataOutput* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SqliteDataOutput* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SqliteDataOutput* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3SqliteDataOutput__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::SqliteDataOutput *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::SqliteDataOutput::DoDispose();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3SqliteDataOutput* >(m_pyself)->obj;
    reinterpret_cast< PyNs3SqliteDataOutput* >(m_pyself)->obj = (ns3::SqliteDataOutput*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3SqliteDataOutput* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3SqliteDataOutput* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3SqliteDataOutput* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3SqliteDataOutput__PythonHelper::GetInstanceTypeId() const
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
PyNs3SqliteDataOutput__PythonHelper::DoStart()
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
PyNs3SqliteDataOutput__PythonHelper::NotifyNewAggregate()
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
PyNs3SqliteDataOutput__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3SqliteDataOutput__tp_init__0(PyNs3SqliteDataOutput *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3SqliteDataOutput *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SqliteDataOutput_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3SqliteDataOutput_Type)
    {
        self->obj = new PyNs3SqliteDataOutput__PythonHelper(*((PyNs3SqliteDataOutput *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3SqliteDataOutput__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::SqliteDataOutput(*((PyNs3SqliteDataOutput *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3SqliteDataOutput__tp_init__1(PyNs3SqliteDataOutput *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3SqliteDataOutput_Type)
    {
        self->obj = new PyNs3SqliteDataOutput__PythonHelper();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3SqliteDataOutput__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::SqliteDataOutput();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3SqliteDataOutput__tp_init(PyNs3SqliteDataOutput *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3SqliteDataOutput__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3SqliteDataOutput__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3SqliteDataOutput_Output(PyNs3SqliteDataOutput *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3DataCollector *dc;
    const char *keywords[] = {"dc", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DataCollector_Type, &dc)) {
        return NULL;
    }
    self->obj->Output(*((PyNs3DataCollector *) dc)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3SqliteDataOutput__copy__(PyNs3SqliteDataOutput *self)
{

    PyNs3SqliteDataOutput *py_copy;
    py_copy = PyObject_GC_New(PyNs3SqliteDataOutput, &PyNs3SqliteDataOutput_Type);
    py_copy->obj = new ns3::SqliteDataOutput(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3SqliteDataOutput_methods[] = {
    {(char *) "Output", (PyCFunction) _wrap_PyNs3SqliteDataOutput_Output, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_NotifyConstructionCompleted", (PyCFunction) PyNs3SqliteDataOutput__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "_NotifyNewAggregate", (PyCFunction) PyNs3SqliteDataOutput__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "_DoDispose", (PyCFunction) PyNs3SqliteDataOutput__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "_DoStart", (PyCFunction) PyNs3SqliteDataOutput__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "_GetInstanceTypeId", (PyCFunction) PyNs3SqliteDataOutput__PythonHelper::_wrap_GetInstanceTypeId, METH_NOARGS, NULL },
    {(char *) "_Output", (PyCFunction) PyNs3SqliteDataOutput__PythonHelper::_wrap_Output, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3SqliteDataOutput__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3SqliteDataOutput__tp_clear(PyNs3SqliteDataOutput *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::SqliteDataOutput *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3SqliteDataOutput__tp_traverse(PyNs3SqliteDataOutput *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj).name() == typeid(PyNs3SqliteDataOutput__PythonHelper).name()  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3SqliteDataOutput__tp_dealloc(PyNs3SqliteDataOutput *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3SqliteDataOutput__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3SqliteDataOutput__tp_richcompare (PyNs3SqliteDataOutput *PYBINDGEN_UNUSED(self), PyNs3SqliteDataOutput *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3SqliteDataOutput_Type)) {
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

PyTypeObject PyNs3SqliteDataOutput_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "stats.SqliteDataOutput",            /* tp_name */
    sizeof(PyNs3SqliteDataOutput),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3SqliteDataOutput__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3SqliteDataOutput__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3SqliteDataOutput__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3SqliteDataOutput__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3SqliteDataOutput_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3SqliteDataOutput, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3SqliteDataOutput__tp_init,             /* tp_init */
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
PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3TimeMinMaxAvgTotalCalculator *self)
{
    PyObject *py_retval;
    PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
    
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
PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper::_wrap_NotifyNewAggregate(PyNs3TimeMinMaxAvgTotalCalculator *self)
{
    PyObject *py_retval;
    PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
    
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
PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper::_wrap_DoDispose(PyNs3TimeMinMaxAvgTotalCalculator *self)
{
    PyObject *py_retval;
    PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class TimeMinMaxAvgTotalCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper::_wrap_Stop(PyNs3TimeMinMaxAvgTotalCalculator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Time *stopTime;
    PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
    const char *keywords[] = {"stopTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Time_Type, &stopTime)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method Stop of class DataCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    helper->Stop__parent_caller(*((PyNs3Time *) stopTime)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper::_wrap_DoStart(PyNs3TimeMinMaxAvgTotalCalculator *self)
{
    PyObject *py_retval;
    PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
    
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
PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper::_wrap_Start(PyNs3TimeMinMaxAvgTotalCalculator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Time *startTime;
    PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
    const char *keywords[] = {"startTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Time_Type, &startTime)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method Start of class DataCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    helper->Start__parent_caller(*((PyNs3Time *) startTime)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper::_wrap_GetInstanceTypeId(PyNs3TimeMinMaxAvgTotalCalculator *self)
{
    PyObject *py_retval;
    PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
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
PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper::_wrap_Output(PyNs3TimeMinMaxAvgTotalCalculator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3DataOutputCallback *callback;
    PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper *helper = dynamic_cast< PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper* >(self->obj);
    const char *keywords[] = {"callback", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DataOutputCallback_Type, &callback)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method Output of class TimeMinMaxAvgTotalCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    helper->Output__parent_caller(*((PyNs3DataOutputCallback *) callback)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


void
PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::TimeMinMaxAvgTotalCalculator *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::TimeMinMaxAvgTotalCalculator::DoDispose();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3TimeMinMaxAvgTotalCalculator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3TimeMinMaxAvgTotalCalculator* >(m_pyself)->obj = (ns3::TimeMinMaxAvgTotalCalculator*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3TimeMinMaxAvgTotalCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3TimeMinMaxAvgTotalCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3TimeMinMaxAvgTotalCalculator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper::Stop(ns3::Time const & stopTime)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::DataCalculator *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_Stop"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::DataCalculator::Stop(stopTime);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = (ns3::DataCalculator*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(stopTime);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_Stop", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper::Start(ns3::Time const & startTime)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::DataCalculator *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_Start"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::DataCalculator::Start(startTime);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = (ns3::DataCalculator*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(startTime);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_Start", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper::GetInstanceTypeId() const
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
PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper::DoStart()
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
PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper::NotifyNewAggregate()
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
PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3TimeMinMaxAvgTotalCalculator__tp_init__0(PyNs3TimeMinMaxAvgTotalCalculator *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3TimeMinMaxAvgTotalCalculator *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3TimeMinMaxAvgTotalCalculator_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3TimeMinMaxAvgTotalCalculator_Type)
    {
        self->obj = new PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper(*((PyNs3TimeMinMaxAvgTotalCalculator *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::TimeMinMaxAvgTotalCalculator(*((PyNs3TimeMinMaxAvgTotalCalculator *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3TimeMinMaxAvgTotalCalculator__tp_init__1(PyNs3TimeMinMaxAvgTotalCalculator *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3TimeMinMaxAvgTotalCalculator_Type)
    {
        self->obj = new PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::TimeMinMaxAvgTotalCalculator();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3TimeMinMaxAvgTotalCalculator__tp_init(PyNs3TimeMinMaxAvgTotalCalculator *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3TimeMinMaxAvgTotalCalculator__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3TimeMinMaxAvgTotalCalculator__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3TimeMinMaxAvgTotalCalculator_Output(PyNs3TimeMinMaxAvgTotalCalculator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3DataOutputCallback *callback;
    const char *keywords[] = {"callback", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DataOutputCallback_Type, &callback)) {
        return NULL;
    }
    self->obj->Output(*((PyNs3DataOutputCallback *) callback)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3TimeMinMaxAvgTotalCalculator_Update(PyNs3TimeMinMaxAvgTotalCalculator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Time *i;
    const char *keywords[] = {"i", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Time_Type, &i)) {
        return NULL;
    }
    self->obj->Update(*((PyNs3Time *) i)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3TimeMinMaxAvgTotalCalculator__copy__(PyNs3TimeMinMaxAvgTotalCalculator *self)
{

    PyNs3TimeMinMaxAvgTotalCalculator *py_copy;
    py_copy = PyObject_GC_New(PyNs3TimeMinMaxAvgTotalCalculator, &PyNs3TimeMinMaxAvgTotalCalculator_Type);
    py_copy->obj = new ns3::TimeMinMaxAvgTotalCalculator(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3TimeMinMaxAvgTotalCalculator_methods[] = {
    {(char *) "Output", (PyCFunction) _wrap_PyNs3TimeMinMaxAvgTotalCalculator_Output, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Update", (PyCFunction) _wrap_PyNs3TimeMinMaxAvgTotalCalculator_Update, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_NotifyConstructionCompleted", (PyCFunction) PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "_NotifyNewAggregate", (PyCFunction) PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "_DoDispose", (PyCFunction) PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "_Stop", (PyCFunction) PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper::_wrap_Stop, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_DoStart", (PyCFunction) PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "_Start", (PyCFunction) PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper::_wrap_Start, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_GetInstanceTypeId", (PyCFunction) PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper::_wrap_GetInstanceTypeId, METH_NOARGS, NULL },
    {(char *) "_Output", (PyCFunction) PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper::_wrap_Output, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3TimeMinMaxAvgTotalCalculator__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3TimeMinMaxAvgTotalCalculator__tp_clear(PyNs3TimeMinMaxAvgTotalCalculator *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::TimeMinMaxAvgTotalCalculator *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3TimeMinMaxAvgTotalCalculator__tp_traverse(PyNs3TimeMinMaxAvgTotalCalculator *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj).name() == typeid(PyNs3TimeMinMaxAvgTotalCalculator__PythonHelper).name()  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3TimeMinMaxAvgTotalCalculator__tp_dealloc(PyNs3TimeMinMaxAvgTotalCalculator *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3TimeMinMaxAvgTotalCalculator__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3TimeMinMaxAvgTotalCalculator__tp_richcompare (PyNs3TimeMinMaxAvgTotalCalculator *PYBINDGEN_UNUSED(self), PyNs3TimeMinMaxAvgTotalCalculator *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3TimeMinMaxAvgTotalCalculator_Type)) {
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

PyTypeObject PyNs3TimeMinMaxAvgTotalCalculator_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "stats.TimeMinMaxAvgTotalCalculator",            /* tp_name */
    sizeof(PyNs3TimeMinMaxAvgTotalCalculator),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3TimeMinMaxAvgTotalCalculator__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3TimeMinMaxAvgTotalCalculator__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3TimeMinMaxAvgTotalCalculator__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3TimeMinMaxAvgTotalCalculator__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3TimeMinMaxAvgTotalCalculator_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3TimeMinMaxAvgTotalCalculator, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3TimeMinMaxAvgTotalCalculator__tp_init,             /* tp_init */
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
PyNs3CounterCalculator__Unsigned_int__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3CounterCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    PyNs3CounterCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3CounterCalculator__Unsigned_int__PythonHelper* >(self->obj);
    
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
PyNs3CounterCalculator__Unsigned_int__PythonHelper::_wrap_NotifyNewAggregate(PyNs3CounterCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    PyNs3CounterCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3CounterCalculator__Unsigned_int__PythonHelper* >(self->obj);
    
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
PyNs3CounterCalculator__Unsigned_int__PythonHelper::_wrap_DoDispose(PyNs3CounterCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    PyNs3CounterCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3CounterCalculator__Unsigned_int__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class CounterCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3CounterCalculator__Unsigned_int__PythonHelper::_wrap_Stop(PyNs3CounterCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Time *stopTime;
    PyNs3CounterCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3CounterCalculator__Unsigned_int__PythonHelper* >(self->obj);
    const char *keywords[] = {"stopTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Time_Type, &stopTime)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method Stop of class DataCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    helper->Stop__parent_caller(*((PyNs3Time *) stopTime)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3CounterCalculator__Unsigned_int__PythonHelper::_wrap_DoStart(PyNs3CounterCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    PyNs3CounterCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3CounterCalculator__Unsigned_int__PythonHelper* >(self->obj);
    
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
PyNs3CounterCalculator__Unsigned_int__PythonHelper::_wrap_Start(PyNs3CounterCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Time *startTime;
    PyNs3CounterCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3CounterCalculator__Unsigned_int__PythonHelper* >(self->obj);
    const char *keywords[] = {"startTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Time_Type, &startTime)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method Start of class DataCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    helper->Start__parent_caller(*((PyNs3Time *) startTime)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3CounterCalculator__Unsigned_int__PythonHelper::_wrap_GetInstanceTypeId(PyNs3CounterCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    PyNs3CounterCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3CounterCalculator__Unsigned_int__PythonHelper* >(self->obj);
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
PyNs3CounterCalculator__Unsigned_int__PythonHelper::_wrap_Output(PyNs3CounterCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3DataOutputCallback *callback;
    PyNs3CounterCalculator__Unsigned_int__PythonHelper *helper = dynamic_cast< PyNs3CounterCalculator__Unsigned_int__PythonHelper* >(self->obj);
    const char *keywords[] = {"callback", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DataOutputCallback_Type, &callback)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method Output of class CounterCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    helper->Output__parent_caller(*((PyNs3DataOutputCallback *) callback)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


void
PyNs3CounterCalculator__Unsigned_int__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::CounterCalculator< unsigned int > *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::CounterCalculator< unsigned int >::DoDispose();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3CounterCalculator__Unsigned_int* >(m_pyself)->obj;
    reinterpret_cast< PyNs3CounterCalculator__Unsigned_int* >(m_pyself)->obj = (ns3::CounterCalculator< unsigned int >*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3CounterCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3CounterCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3CounterCalculator__Unsigned_int* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3CounterCalculator__Unsigned_int__PythonHelper::Stop(ns3::Time const & stopTime)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::DataCalculator *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_Stop"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::DataCalculator::Stop(stopTime);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = (ns3::DataCalculator*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(stopTime);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_Stop", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3CounterCalculator__Unsigned_int__PythonHelper::Start(ns3::Time const & startTime)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::DataCalculator *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_Start"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::DataCalculator::Start(startTime);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = (ns3::DataCalculator*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(startTime);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_Start", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3CounterCalculator__Unsigned_int__PythonHelper::GetInstanceTypeId() const
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
PyNs3CounterCalculator__Unsigned_int__PythonHelper::DoStart()
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
PyNs3CounterCalculator__Unsigned_int__PythonHelper::NotifyNewAggregate()
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
PyNs3CounterCalculator__Unsigned_int__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3CounterCalculator__Unsigned_int__tp_init__0(PyNs3CounterCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3CounterCalculator__Unsigned_int *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3CounterCalculator__Unsigned_int_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3CounterCalculator__Unsigned_int_Type)
    {
        self->obj = new PyNs3CounterCalculator__Unsigned_int__PythonHelper(*((PyNs3CounterCalculator__Unsigned_int *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3CounterCalculator__Unsigned_int__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::CounterCalculator< unsigned int >(*((PyNs3CounterCalculator__Unsigned_int *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3CounterCalculator__Unsigned_int__tp_init__1(PyNs3CounterCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3CounterCalculator__Unsigned_int_Type)
    {
        self->obj = new PyNs3CounterCalculator__Unsigned_int__PythonHelper();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3CounterCalculator__Unsigned_int__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::CounterCalculator< unsigned int >();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3CounterCalculator__Unsigned_int__tp_init(PyNs3CounterCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3CounterCalculator__Unsigned_int__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3CounterCalculator__Unsigned_int__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3CounterCalculator__Unsigned_int_GetCount(PyNs3CounterCalculator__Unsigned_int *self)
{
    PyObject *py_retval;
    unsigned int retval;
    
    retval = self->obj->GetCount();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}



PyObject *
_wrap_PyNs3CounterCalculator__Unsigned_int_Update__0(PyNs3CounterCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    self->obj->Update();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3CounterCalculator__Unsigned_int_Update__1(PyNs3CounterCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    unsigned int i;
    const char *keywords[] = {"i", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &i)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    self->obj->Update(i);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject * _wrap_PyNs3CounterCalculator__Unsigned_int_Update(PyNs3CounterCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3CounterCalculator__Unsigned_int_Update__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3CounterCalculator__Unsigned_int_Update__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3CounterCalculator__Unsigned_int_Output(PyNs3CounterCalculator__Unsigned_int *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3DataOutputCallback *callback;
    const char *keywords[] = {"callback", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DataOutputCallback_Type, &callback)) {
        return NULL;
    }
    self->obj->Output(*((PyNs3DataOutputCallback *) callback)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3CounterCalculator__Unsigned_int__copy__(PyNs3CounterCalculator__Unsigned_int *self)
{

    PyNs3CounterCalculator__Unsigned_int *py_copy;
    py_copy = PyObject_GC_New(PyNs3CounterCalculator__Unsigned_int, &PyNs3CounterCalculator__Unsigned_int_Type);
    py_copy->obj = new ns3::CounterCalculator< unsigned int >(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3CounterCalculator__Unsigned_int_methods[] = {
    {(char *) "GetCount", (PyCFunction) _wrap_PyNs3CounterCalculator__Unsigned_int_GetCount, METH_NOARGS, NULL },
    {(char *) "Update", (PyCFunction) _wrap_PyNs3CounterCalculator__Unsigned_int_Update, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Output", (PyCFunction) _wrap_PyNs3CounterCalculator__Unsigned_int_Output, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_NotifyConstructionCompleted", (PyCFunction) PyNs3CounterCalculator__Unsigned_int__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "_NotifyNewAggregate", (PyCFunction) PyNs3CounterCalculator__Unsigned_int__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "_DoDispose", (PyCFunction) PyNs3CounterCalculator__Unsigned_int__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "_Stop", (PyCFunction) PyNs3CounterCalculator__Unsigned_int__PythonHelper::_wrap_Stop, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_DoStart", (PyCFunction) PyNs3CounterCalculator__Unsigned_int__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "_Start", (PyCFunction) PyNs3CounterCalculator__Unsigned_int__PythonHelper::_wrap_Start, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_GetInstanceTypeId", (PyCFunction) PyNs3CounterCalculator__Unsigned_int__PythonHelper::_wrap_GetInstanceTypeId, METH_NOARGS, NULL },
    {(char *) "_Output", (PyCFunction) PyNs3CounterCalculator__Unsigned_int__PythonHelper::_wrap_Output, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3CounterCalculator__Unsigned_int__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3CounterCalculator__Unsigned_int__tp_clear(PyNs3CounterCalculator__Unsigned_int *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::CounterCalculator< unsigned int > *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3CounterCalculator__Unsigned_int__tp_traverse(PyNs3CounterCalculator__Unsigned_int *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj).name() == typeid(PyNs3CounterCalculator__Unsigned_int__PythonHelper).name()  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3CounterCalculator__Unsigned_int__tp_dealloc(PyNs3CounterCalculator__Unsigned_int *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3CounterCalculator__Unsigned_int__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3CounterCalculator__Unsigned_int__tp_richcompare (PyNs3CounterCalculator__Unsigned_int *PYBINDGEN_UNUSED(self), PyNs3CounterCalculator__Unsigned_int *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3CounterCalculator__Unsigned_int_Type)) {
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

PyTypeObject PyNs3CounterCalculator__Unsigned_int_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "stats.CounterCalculator__Unsigned_int",            /* tp_name */
    sizeof(PyNs3CounterCalculator__Unsigned_int),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3CounterCalculator__Unsigned_int__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3CounterCalculator__Unsigned_int__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3CounterCalculator__Unsigned_int__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3CounterCalculator__Unsigned_int__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3CounterCalculator__Unsigned_int_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3CounterCalculator__Unsigned_int, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3CounterCalculator__Unsigned_int__tp_init,             /* tp_init */
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
PyNs3PacketCounterCalculator__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3PacketCounterCalculator *self)
{
    PyObject *py_retval;
    PyNs3PacketCounterCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketCounterCalculator__PythonHelper* >(self->obj);
    
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
PyNs3PacketCounterCalculator__PythonHelper::_wrap_NotifyNewAggregate(PyNs3PacketCounterCalculator *self)
{
    PyObject *py_retval;
    PyNs3PacketCounterCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketCounterCalculator__PythonHelper* >(self->obj);
    
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
PyNs3PacketCounterCalculator__PythonHelper::_wrap_DoDispose(PyNs3PacketCounterCalculator *self)
{
    PyObject *py_retval;
    PyNs3PacketCounterCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketCounterCalculator__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class PacketCounterCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3PacketCounterCalculator__PythonHelper::_wrap_Stop(PyNs3PacketCounterCalculator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Time *stopTime;
    PyNs3PacketCounterCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketCounterCalculator__PythonHelper* >(self->obj);
    const char *keywords[] = {"stopTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Time_Type, &stopTime)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method Stop of class DataCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    helper->Stop__parent_caller(*((PyNs3Time *) stopTime)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3PacketCounterCalculator__PythonHelper::_wrap_DoStart(PyNs3PacketCounterCalculator *self)
{
    PyObject *py_retval;
    PyNs3PacketCounterCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketCounterCalculator__PythonHelper* >(self->obj);
    
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
PyNs3PacketCounterCalculator__PythonHelper::_wrap_Start(PyNs3PacketCounterCalculator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Time *startTime;
    PyNs3PacketCounterCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketCounterCalculator__PythonHelper* >(self->obj);
    const char *keywords[] = {"startTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Time_Type, &startTime)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method Start of class DataCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    helper->Start__parent_caller(*((PyNs3Time *) startTime)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3PacketCounterCalculator__PythonHelper::_wrap_GetInstanceTypeId(PyNs3PacketCounterCalculator *self)
{
    PyObject *py_retval;
    PyNs3PacketCounterCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketCounterCalculator__PythonHelper* >(self->obj);
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
PyNs3PacketCounterCalculator__PythonHelper::_wrap_Output(PyNs3PacketCounterCalculator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3DataOutputCallback *callback;
    PyNs3PacketCounterCalculator__PythonHelper *helper = dynamic_cast< PyNs3PacketCounterCalculator__PythonHelper* >(self->obj);
    const char *keywords[] = {"callback", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DataOutputCallback_Type, &callback)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method Output of class CounterCalculator is protected and can only be called by a subclass");
        return NULL;
    }
    helper->Output__parent_caller(*((PyNs3DataOutputCallback *) callback)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

void
PyNs3PacketCounterCalculator__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::PacketCounterCalculator *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_DoDispose"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::PacketCounterCalculator::DoDispose();
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3PacketCounterCalculator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3PacketCounterCalculator* >(m_pyself)->obj = (ns3::PacketCounterCalculator*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3PacketCounterCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3PacketCounterCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3PacketCounterCalculator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


void
PyNs3PacketCounterCalculator__PythonHelper::Stop(ns3::Time const & stopTime)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::DataCalculator *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_Stop"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::DataCalculator::Stop(stopTime);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = (ns3::DataCalculator*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(stopTime);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_Stop", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3PacketCounterCalculator__PythonHelper::Start(ns3::Time const & startTime)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::DataCalculator *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "_Start"); PyErr_Clear();
    if (py_method == NULL || py_method->ob_type == &PyCFunction_Type) {
        ns3::DataCalculator::Start(startTime);
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj;
    reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = (ns3::DataCalculator*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(startTime);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "_Start", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3DataCalculator* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3PacketCounterCalculator__PythonHelper::GetInstanceTypeId() const
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
PyNs3PacketCounterCalculator__PythonHelper::DoStart()
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
PyNs3PacketCounterCalculator__PythonHelper::NotifyNewAggregate()
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
PyNs3PacketCounterCalculator__PythonHelper::NotifyConstructionCompleted()
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
_wrap_PyNs3PacketCounterCalculator__tp_init__0(PyNs3PacketCounterCalculator *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3PacketCounterCalculator *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3PacketCounterCalculator_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (self->ob_type != &PyNs3PacketCounterCalculator_Type)
    {
        self->obj = new PyNs3PacketCounterCalculator__PythonHelper(*((PyNs3PacketCounterCalculator *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3PacketCounterCalculator__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::PacketCounterCalculator(*((PyNs3PacketCounterCalculator *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3PacketCounterCalculator__tp_init__1(PyNs3PacketCounterCalculator *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
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
    if (self->ob_type != &PyNs3PacketCounterCalculator_Type)
    {
        self->obj = new PyNs3PacketCounterCalculator__PythonHelper();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3PacketCounterCalculator__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::PacketCounterCalculator();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3PacketCounterCalculator__tp_init(PyNs3PacketCounterCalculator *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3PacketCounterCalculator__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3PacketCounterCalculator__tp_init__1(self, args, kwargs, &exceptions[1]);
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
_wrap_PyNs3PacketCounterCalculator_PacketUpdate(PyNs3PacketCounterCalculator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *path;
    Py_ssize_t path_len;
    PyNs3Packet *packet;
    ns3::Packet *packet_ptr;
    const char *keywords[] = {"path", "packet", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!", (char **) keywords, &path, &path_len, &PyNs3Packet_Type, &packet)) {
        return NULL;
    }
    packet_ptr = (packet ? packet->obj : NULL);
    self->obj->PacketUpdate(std::string(path, path_len), ns3::Ptr< ns3::Packet  > (packet_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3PacketCounterCalculator_FrameUpdate(PyNs3PacketCounterCalculator *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *path;
    Py_ssize_t path_len;
    PyNs3Packet *packet;
    ns3::Packet *packet_ptr;
    PyNs3Mac48Address *realto;
    const char *keywords[] = {"path", "packet", "realto", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!O!", (char **) keywords, &path, &path_len, &PyNs3Packet_Type, &packet, &PyNs3Mac48Address_Type, &realto)) {
        return NULL;
    }
    packet_ptr = (packet ? packet->obj : NULL);
    self->obj->FrameUpdate(std::string(path, path_len), ns3::Ptr< ns3::Packet  > (packet_ptr), *((PyNs3Mac48Address *) realto)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3PacketCounterCalculator__copy__(PyNs3PacketCounterCalculator *self)
{

    PyNs3PacketCounterCalculator *py_copy;
    py_copy = PyObject_GC_New(PyNs3PacketCounterCalculator, &PyNs3PacketCounterCalculator_Type);
    py_copy->obj = new ns3::PacketCounterCalculator(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3PacketCounterCalculator_methods[] = {
    {(char *) "PacketUpdate", (PyCFunction) _wrap_PyNs3PacketCounterCalculator_PacketUpdate, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "FrameUpdate", (PyCFunction) _wrap_PyNs3PacketCounterCalculator_FrameUpdate, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_NotifyConstructionCompleted", (PyCFunction) PyNs3PacketCounterCalculator__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "_NotifyNewAggregate", (PyCFunction) PyNs3PacketCounterCalculator__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "_DoDispose", (PyCFunction) PyNs3PacketCounterCalculator__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "_Stop", (PyCFunction) PyNs3PacketCounterCalculator__PythonHelper::_wrap_Stop, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_DoStart", (PyCFunction) PyNs3PacketCounterCalculator__PythonHelper::_wrap_DoStart, METH_NOARGS, NULL },
    {(char *) "_Start", (PyCFunction) PyNs3PacketCounterCalculator__PythonHelper::_wrap_Start, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "_GetInstanceTypeId", (PyCFunction) PyNs3PacketCounterCalculator__PythonHelper::_wrap_GetInstanceTypeId, METH_NOARGS, NULL },
    {(char *) "_Output", (PyCFunction) PyNs3PacketCounterCalculator__PythonHelper::_wrap_Output, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3PacketCounterCalculator__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3PacketCounterCalculator__tp_clear(PyNs3PacketCounterCalculator *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::PacketCounterCalculator *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3PacketCounterCalculator__tp_traverse(PyNs3PacketCounterCalculator *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj).name() == typeid(PyNs3PacketCounterCalculator__PythonHelper).name()  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3PacketCounterCalculator__tp_dealloc(PyNs3PacketCounterCalculator *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3PacketCounterCalculator__tp_clear(self);
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3PacketCounterCalculator__tp_richcompare (PyNs3PacketCounterCalculator *PYBINDGEN_UNUSED(self), PyNs3PacketCounterCalculator *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3PacketCounterCalculator_Type)) {
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

PyTypeObject PyNs3PacketCounterCalculator_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    (char *) "stats.PacketCounterCalculator",            /* tp_name */
    sizeof(PyNs3PacketCounterCalculator),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3PacketCounterCalculator__tp_dealloc,        /* tp_dealloc */
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
    (traverseproc)PyNs3PacketCounterCalculator__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3PacketCounterCalculator__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3PacketCounterCalculator__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3PacketCounterCalculator_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3PacketCounterCalculator, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3PacketCounterCalculator__tp_init,             /* tp_init */
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
initstats(void)
{
    PyObject *m;
    PyObject *submodule;
    m = Py_InitModule3((char *) "stats", stats_functions, NULL);
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
    /* Import the 'ns3::Header' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Header_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Header");
    
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
    /* Import the 'ns3::EmptyAttributeValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule("ns.core");
        if (module == NULL) {
            return ;
        }
        _PyNs3EmptyAttributeValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, "EmptyAttributeValue");
    
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
    /* Import the 'ns3::NixVector' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3NixVector_Type = (PyTypeObject*) PyObject_GetAttrString(module, "NixVector");
    
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
    /* Import the 'ns3::Packet' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule("ns.network");
        if (module == NULL) {
            return ;
        }
        _PyNs3Packet_Type = (PyTypeObject*) PyObject_GetAttrString(module, "Packet");
    
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
    PyModule_AddObject(m, (char *) "_PyNs3DataOutputCallback_wrapper_registry", PyCObject_FromVoidPtr(&PyNs3DataOutputCallback_wrapper_registry, NULL));
    /* Register the 'ns3::DataOutputCallback' class */
    if (PyType_Ready(&PyNs3DataOutputCallback_Type)) {
        return;
    }
    PyModule_AddObject(m, (char *) "DataOutputCallback", (PyObject *) &PyNs3DataOutputCallback_Type);
    PyModule_AddObject(m, (char *) "_PyNs3StatisticalSummary_wrapper_registry", PyCObject_FromVoidPtr(&PyNs3StatisticalSummary_wrapper_registry, NULL));
    /* Register the 'ns3::StatisticalSummary' class */
    if (PyType_Ready(&PyNs3StatisticalSummary_Type)) {
        return;
    }
    PyModule_AddObject(m, (char *) "StatisticalSummary", (PyObject *) &PyNs3StatisticalSummary_Type);
    PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.register_wrapper(typeid(ns3::DataCalculator), &PyNs3DataCalculator_Type);
    /* Register the 'ns3::DataCalculator' class */
    PyNs3DataCalculator_Type.tp_base = &PyNs3Object_Type;
    if (PyType_Ready(&PyNs3DataCalculator_Type)) {
        return;
    }
    PyModule_AddObject(m, (char *) "DataCalculator", (PyObject *) &PyNs3DataCalculator_Type);
    PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.register_wrapper(typeid(ns3::DataCollector), &PyNs3DataCollector_Type);
    /* Register the 'ns3::DataCollector' class */
    PyNs3DataCollector_Type.tp_base = &PyNs3Object_Type;
    if (PyType_Ready(&PyNs3DataCollector_Type)) {
        return;
    }
    PyModule_AddObject(m, (char *) "DataCollector", (PyObject *) &PyNs3DataCollector_Type);
    PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.register_wrapper(typeid(ns3::DataOutputInterface), &PyNs3DataOutputInterface_Type);
    /* Register the 'ns3::DataOutputInterface' class */
    PyNs3DataOutputInterface_Type.tp_base = &PyNs3Object_Type;
    if (PyType_Ready(&PyNs3DataOutputInterface_Type)) {
        return;
    }
    PyModule_AddObject(m, (char *) "DataOutputInterface", (PyObject *) &PyNs3DataOutputInterface_Type);
    PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.register_wrapper(typeid(ns3::MinMaxAvgTotalCalculator< unsigned int >), &PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Type);
    /* Register the 'ns3::MinMaxAvgTotalCalculator< unsigned int >' class */
    PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Type.tp_base = &PyNs3DataCalculator_Type;
    PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Type.tp_bases = PyTuple_New(2);
        Py_INCREF((PyObject *) &PyNs3DataCalculator_Type);
        PyTuple_SET_ITEM(PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Type.tp_bases, 0, (PyObject *) &PyNs3DataCalculator_Type);
        Py_INCREF((PyObject *) &PyNs3StatisticalSummary_Type);
        PyTuple_SET_ITEM(PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Type.tp_bases, 1, (PyObject *) &PyNs3StatisticalSummary_Type);
    if (PyType_Ready(&PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Type)) {
        return;
    }
    PyModule_AddObject(m, (char *) "MinMaxAvgTotalCalculator__Unsigned_int", (PyObject *) &PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Type);
    PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.register_wrapper(typeid(ns3::OmnetDataOutput), &PyNs3OmnetDataOutput_Type);
    /* Register the 'ns3::OmnetDataOutput' class */
    PyNs3OmnetDataOutput_Type.tp_base = &PyNs3DataOutputInterface_Type;
    if (PyType_Ready(&PyNs3OmnetDataOutput_Type)) {
        return;
    }
    PyModule_AddObject(m, (char *) "OmnetDataOutput", (PyObject *) &PyNs3OmnetDataOutput_Type);
    PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.register_wrapper(typeid(ns3::PacketSizeMinMaxAvgTotalCalculator), &PyNs3PacketSizeMinMaxAvgTotalCalculator_Type);
    /* Register the 'ns3::PacketSizeMinMaxAvgTotalCalculator' class */
    PyNs3PacketSizeMinMaxAvgTotalCalculator_Type.tp_base = &PyNs3MinMaxAvgTotalCalculator__Unsigned_int_Type;
    if (PyType_Ready(&PyNs3PacketSizeMinMaxAvgTotalCalculator_Type)) {
        return;
    }
    PyModule_AddObject(m, (char *) "PacketSizeMinMaxAvgTotalCalculator", (PyObject *) &PyNs3PacketSizeMinMaxAvgTotalCalculator_Type);
    PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.register_wrapper(typeid(ns3::SqliteDataOutput), &PyNs3SqliteDataOutput_Type);
    /* Register the 'ns3::SqliteDataOutput' class */
    PyNs3SqliteDataOutput_Type.tp_base = &PyNs3DataOutputInterface_Type;
    if (PyType_Ready(&PyNs3SqliteDataOutput_Type)) {
        return;
    }
    PyModule_AddObject(m, (char *) "SqliteDataOutput", (PyObject *) &PyNs3SqliteDataOutput_Type);
    PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.register_wrapper(typeid(ns3::TimeMinMaxAvgTotalCalculator), &PyNs3TimeMinMaxAvgTotalCalculator_Type);
    /* Register the 'ns3::TimeMinMaxAvgTotalCalculator' class */
    PyNs3TimeMinMaxAvgTotalCalculator_Type.tp_base = &PyNs3DataCalculator_Type;
    if (PyType_Ready(&PyNs3TimeMinMaxAvgTotalCalculator_Type)) {
        return;
    }
    PyModule_AddObject(m, (char *) "TimeMinMaxAvgTotalCalculator", (PyObject *) &PyNs3TimeMinMaxAvgTotalCalculator_Type);
    PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.register_wrapper(typeid(ns3::CounterCalculator< unsigned int >), &PyNs3CounterCalculator__Unsigned_int_Type);
    /* Register the 'ns3::CounterCalculator< unsigned int >' class */
    PyNs3CounterCalculator__Unsigned_int_Type.tp_base = &PyNs3DataCalculator_Type;
    if (PyType_Ready(&PyNs3CounterCalculator__Unsigned_int_Type)) {
        return;
    }
    PyModule_AddObject(m, (char *) "CounterCalculator__Unsigned_int", (PyObject *) &PyNs3CounterCalculator__Unsigned_int_Type);
    PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.register_wrapper(typeid(ns3::PacketCounterCalculator), &PyNs3PacketCounterCalculator_Type);
    /* Register the 'ns3::PacketCounterCalculator' class */
    PyNs3PacketCounterCalculator_Type.tp_base = &PyNs3CounterCalculator__Unsigned_int_Type;
    if (PyType_Ready(&PyNs3PacketCounterCalculator_Type)) {
        return;
    }
    PyModule_AddObject(m, (char *) "PacketCounterCalculator", (PyObject *) &PyNs3PacketCounterCalculator_Type);
    submodule = initstats_FatalImpl();
    if (submodule == NULL) {
        return;
    }
    Py_INCREF(submodule);
    PyModule_AddObject(m, (char *) "FatalImpl", submodule);
}
