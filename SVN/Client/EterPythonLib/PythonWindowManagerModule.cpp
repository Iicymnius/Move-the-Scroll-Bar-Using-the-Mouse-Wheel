//find;

PyObject * wndMgrIsRTL(PyObject * poSelf, PyObject * poArgs)
{
	[...]
}

//add below;

#ifdef ENABLE_MOUSEWHEEL_EVENT
PyObject* wndMgrSetScrollable(PyObject* poSelf, PyObject* poArgs)
{
	UI::CWindow * pWin;
	if (!PyTuple_GetWindow(poArgs, 0, &pWin))
		return Py_BuildException();

	if(pWin)
		pWin->SetScrollable();

	return Py_BuildNone();
}
#endif

//find again;

		{ "IsRTL",						wndMgrIsRTL,						METH_VARARGS },

//add below;

#ifdef ENABLE_MOUSEWHEEL_EVENT
		{ "SetScrollable",				wndMgrSetScrollable,				METH_VARARGS },
#endif