#pragma once

#include "UE/F/FString.h"
#include "UE/T/TArray.h"

namespace UE
{
	class FURL
	{
	public:
		// members
		FString         protocol;     // 00
		FString         host;         // 10
		std::int32_t    port;         // 20
		std::int32_t    valid;        // 24
		FString         map;          // 28
		FString         redirectURL;  // 38
		TArray<FString> op;           // 48
		FString         portal;       // 58
	};
	static_assert(sizeof(FURL) == 0x68);
}
