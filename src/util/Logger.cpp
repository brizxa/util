#include "Logger.h"

#include <iostream>

//=============================================================================
using namespace bxx_util;

//=============================================================================
// LogLevel
//=============================================================================
std::string LogLevel::toString(const LogLevel::Type)
{
	return std::string();
}

//=============================================================================
// Logger
//=============================================================================
void Logger::write(const LogLevel::Type type, const std::string& msg)
{
	std::cout << "[" << LogLevel::toString(type) << "]" << msg << std::endl;
}
