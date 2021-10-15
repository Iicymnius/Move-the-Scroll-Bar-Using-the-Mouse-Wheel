//find;

	void CWindowManager::RunMouseMiddleButtonUp(long x, long y)
	{
		[...]
	}

//add below;

#ifdef ENABLE_MOUSEWHEEL_EVENT
	bool CWindowManager::RunMouseWheelScroll(long x, long y, short wDelta)
	{
		SetMousePosition(x, y);
		CWindow * pWin = GetPointWindow();
		if (!pWin)
			return false;

		return pWin->OnMouseWheelScroll(wDelta) == TRUE;
	}
#endif