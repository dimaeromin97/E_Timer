#include "E_Timer.h"

E_Timer::E_Timer(long interval_ms) {
	_interval_ms = interval_ms;
}

boolean E_Timer::isReady() {
	return millis() - _timer_ms >= _interval_ms;
}

boolean E_Timer::turn() {
	if (E_Timer::isReady()) {
		_timer_ms = millis();

		return true;
	}

	return false;
}