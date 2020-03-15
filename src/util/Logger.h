#pragma once

#include <string>

#include "DLLEXPORT.h"

namespace bxx_util
{
	//=========================================================================
	// namespace bxx_util
	//=========================================================================
	class LogLevel
	{
	public:
		enum Type
		{
			Error,
			Warning,
			Info,
			Verbose,
			Assert,
		};

		static std::string toString(const LogLevel::Type);
	};

	//=========================================================================
	class DLLEXPORT Logger
	{
	public:
		static void write(const LogLevel::Type type, const std::string& msg);
	};

	//=========================================================================
}
