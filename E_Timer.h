#ifndef E_Timer_h
#define E_Timer_h
#include <Arduino.h>

class E_Timer {
	public:
		E_Timer(long);
		boolean isReady();
		boolean turn();

	private:
		long _timer_ms = 0;
		long _interval_ms = 0;
};

#endif