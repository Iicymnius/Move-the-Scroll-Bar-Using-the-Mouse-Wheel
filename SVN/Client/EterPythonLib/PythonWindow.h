//find;

			virtual BOOL	OnMouseMiddleButtonUp();

//add below;

#ifdef ENABLE_MOUSEWHEEL_EVENT
			virtual BOOL	OnMouseWheelScroll(short wDelta);
			virtual void	SetScrollable();
#endif

//find again;

			TWindowContainer	m_pReserveChildList;

//add below;

#ifdef ENABLE_MOUSEWHEEL_EVENT
			bool				m_bIsScrollable;
#endif