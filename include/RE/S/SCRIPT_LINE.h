#pragma once

#include "RE/S/SCRIPT_ERROR.h"
#include "RE/S/SCRIPT_OUTPUT.h"

namespace RE
{
	struct SCRIPT_LINE
	{
	public:
		// members
		std::uint32_t lineNumber;      // 000
		char          line[512];       // 004
		std::uint32_t size;            // 204
		std::uint32_t offset;          // 208
		char          output[512];     // 20C
		std::uint32_t outputSize;      // 40C
		SCRIPT_OUTPUT expression;      // 410
		std::uint32_t refObjectIndex;  // 414
		SCRIPT_ERROR  scriptError;     // 418
	};
	static_assert(sizeof(SCRIPT_LINE) == 0x41C);
}
