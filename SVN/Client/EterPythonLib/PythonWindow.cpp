//find;

		m_isUpdatingChildren(FALSE)

//add below;

#ifdef ENABLE_MOUSEWHEEL_EVENT
		,m_bIsScrollable(false)
#endif

//find again;

	BOOL CWindow::OnMouseMiddleButtonUp()
	{
		[...]
	}

//add below;

#ifdef ENABLE_MOUSEWHEEL_EVENT
	BOOL CWindow::OnMouseWheelScroll(short wDelta)
	{
#ifdef _DEBUG
		Tracenf("Mouse Wheel Scroll : wDelta %d ",wDelta);
#endif
		PyCallClassMemberFunc(m_poHandler , "OnMouseWheelScroll" , Py_BuildValue("(s)" , wDelta > 0? "UP":"DOWN") );
		return m_bIsScrollable;
	}

	void CWindow::SetScrollable()
	{
		m_bIsScrollable = true;
	}
#endif