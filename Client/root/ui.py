#find;

		self.onMouseLeftButtonUpEvent = None

#add below;

		if app.ENABLE_MOUSEWHEEL_EVENT:
			self.onMouseWheelScrollEvent=None

#find again;

	def OnMouseLeftButtonUp(self):
		if self.onMouseLeftButtonUpEvent:
			self.onMouseLeftButtonUpEvent()

#add below;

	if app.ENABLE_MOUSEWHEEL_EVENT:
		def SetMouseWheelScrollEvent(self, event):
			self.onMouseWheelScrollEvent = event
			wndMgr.SetScrollable(self.hWnd)

		def OnMouseWheelScroll(self, mode = "UP"):
			print("OnMouseWheelScroll")
			if self.onMouseWheelScrollEvent:
				self.onMouseWheelScrollEvent(mode)

#find again;

class ScrollBar(Window):

#find in function;

		self.SCROLLBAR_BUTTON_HEIGHT = self.upButton.GetHeight()

#add below;

		if app.ENABLE_MOUSEWHEEL_EVENT:
			self.upButton.SetMouseWheelScrollEvent(self.OnMouseWheelScroll_ScrollBar)
			self.downButton.SetMouseWheelScrollEvent(self.OnMouseWheelScroll_ScrollBar)
			self.middleBar.SetMouseWheelScrollEvent(self.OnMouseWheelScroll_ScrollBar)
			self.barSlot.SetMouseWheelScrollEvent(self.OnMouseWheelScroll_ScrollBar)
			self.SetMouseWheelScrollEvent(self.OnMouseWheelScroll_ScrollBar)

	if app.ENABLE_MOUSEWHEEL_EVENT:
		def OnMouseWheelScroll_ScrollBar(self,mode):
			eventDct = { "UP" : lambda : self.SetPos(self.curPos - (self.scrollStep/4)) , "DOWN" : lambda: self.SetPos(self.curPos + (self.scrollStep/4)) }

			if mode in eventDct:
				eventDct[mode]()

#find again;

class SmallThinScrollBar(ScrollBar):

#find in function;

		self.TEMP_SPACE = 0

#add below;

		if app.ENABLE_MOUSEWHEEL_EVENT:
			self.middleBar.SetMouseWheelScrollEvent(self.OnMouseWheelScroll_ScrollBar)
			self.upButton.SetMouseWheelScrollEvent(self.OnMouseWheelScroll_ScrollBar)
			self.downButton.SetMouseWheelScrollEvent(self.OnMouseWheelScroll_ScrollBar)
			self.SetMouseWheelScrollEvent(self.OnMouseWheelScroll_ScrollBar)