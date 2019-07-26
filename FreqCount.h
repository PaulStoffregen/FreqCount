#ifndef FreqCount_h
#define FreqCount_h

#include <Arduino.h>

class FreqCountClass {
public:
	#if(!defined(__IMXRT1062__))
		static void begin(uint16_t msec);
	#else
		static void begin(uint32_t usec);
	#endif
	static uint8_t available(void);
	static uint32_t read(void);
	static void end(void);
};

extern FreqCountClass FreqCount;

#endif
