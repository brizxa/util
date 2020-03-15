#pragma once

#include <map>
#include <stdexcept>
#include <string>
#include <vector>

#include "Logger.h"

namespace bxx_util
{
	//=========================================================================
	// namespace bxx_util
	//=========================================================================
	template<typename Key_T, typename Value_T>
	class EnumMapper
	{
	public:
		typedef std::map<Key_T, Value_T> map_t;

	protected:
		const map_t mMap;
		const std::string mPrefix;

	public:
		EnumMapper(
			const std::string& prefix,
			const map_t& map)
			: mPrefix(prefix)
			, mMap(map)
		{
		}

	public:
		std::vector<Key_T> getKeys() const
		{
			std::vector<Key_T> result;
			for (const auto& pair : mMap)
			{
				result.push_back(pair.first);
			}
			return result;
		}

		int toInt(const Key_T& type) const
		{
			return static_cast<int>(type);
		}

		const Value_T& toString(const Key_T& type) const
		{
			try
			{
				return mMap.at(type);
			}
			catch (const std::out_of_range & e)
			{
				const std::string& msg = mPrefix + "[EnumMapper][toString] " + "Type not found";
				Logger::write(LogLevel::Error, msg);
				throw e;
			}
		}

		Key_T from(const int i) const
		{
			for (const auto& pair : mMap)
			{
				const Key_T key = pair.first;
				if (toInt(key) == i)
				{
					return key;
				}
			}
			const std::string& msg = mPrefix + "[EnumMapper][from] " + "Type not found";
			Logger::write(LogLevel::Error, msg);
			throw std::out_of_range(msg.c_str());
		}

		Key_T from(const Value_T& str) const
		{
			for (const auto& pair : mMap)
			{
				if (pair.second == str)
				{
					return pair.first;
				}
			}
			const std::string msg = mPrefix + "[EnumMapper][from] " + "Type not found: " + str;
			Logger::write(LogLevel::Error, msg);
			throw std::out_of_range(msg.c_str());
		}
	};

	//=========================================================================
}
