#pragma once

#include "UE/F/FGenericPlatformString.h"

namespace UE
{
	struct FMicrosoftPlatformString :
		public FGenericPlatformString
	{
		static std::int32_t Strlen(const wchar_t* a_str)
		{
			return (std::int32_t)wcslen(a_str);
		}

		static std::int32_t Strnlen(const wchar_t* a_str, std::size_t a_size)
		{
			return (std::int32_t)wcsnlen(a_str, a_size);
		}
	};
}
