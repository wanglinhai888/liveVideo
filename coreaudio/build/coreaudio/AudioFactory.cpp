#include "StdAfx.h"
#include "AudioFactory.h"
#include "Win_WASAPI.h"

AudioFactory::AudioFactory(void)
{
}


AudioFactory::~AudioFactory(void)
{
}

AudioCoreAPI * AudioFactory::CreateAudioAPI()
{
	return new Win_WASAPI;
}
