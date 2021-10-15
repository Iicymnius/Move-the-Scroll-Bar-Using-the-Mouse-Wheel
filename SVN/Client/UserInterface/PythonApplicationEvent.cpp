//find;

void CPythonApplication::OnMouseRightButtonUp(int x, int y)
{
	[...]
}

//add below;

#ifdef ENABLE_MOUSEWHEEL_EVENT
bool CPythonApplication::OnMouseWheelScroll(long x , long y , short wDelta)
{
	UI::CWindowManager& rkWndMgr=UI::CWindowManager::Instance();
	return rkWndMgr.RunMouseWheelScroll(x, y, wDelta);
}
#endif