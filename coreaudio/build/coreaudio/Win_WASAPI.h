#pragma once
#include "AudioCoreAPI.h"
class Win_WASAPI:public AudioCoreAPI
{
public:
	Win_WASAPI(void);
	~Win_WASAPI(void);
public:
	void print();
};

