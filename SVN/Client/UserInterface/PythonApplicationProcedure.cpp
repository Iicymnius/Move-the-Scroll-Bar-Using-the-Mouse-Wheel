//find;

			OnMouseWheel(short(HIWORD(wParam)));

//add above;

#ifdef ENABLE_MOUSEWHEEL_EVENT
			long xPos		= GET_X_LPARAM(lParam);
			long yPos		= GET_Y_LPARAM(lParam);
			short zDelta	= GET_WHEEL_DELTA_WPARAM(wParam);

			if(OnMouseWheelScroll(xPos, yPos, zDelta))
				break;
#endif
