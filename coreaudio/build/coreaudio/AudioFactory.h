#pragma once
#include "AudioCoreAPI.h"
class AudioFactory
{
public:
	AudioFactory(void);
	~AudioFactory(void);

public:
	AudioCoreAPI * CreateAudioAPI();
};

