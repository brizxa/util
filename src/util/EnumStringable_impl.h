#pragma once

#include "EnumStringable.h"

namespace bxx_util
{
	//=========================================================================
	// namespace bxx_util
	//=========================================================================
	template<typename EnumContainer_T>
	EnumStringable<EnumContainer_T>::EnumStringable()
	{
	}

	template<typename EnumContainer_T>
	std::vector<typename EnumContainer_T::Type>
		EnumStringable<EnumContainer_T>::getKeys()
	{
		return sEnumMapper.getKeys();
	}

	template<typename EnumContainer_T>
	const std::string& EnumStringable<EnumContainer_T>::toString(
		const Type_T type)
	{
		return sEnumMapper.toString(type);
	}

	template<typename EnumContainer_T>
	typename EnumContainer_T::Type EnumStringable<EnumContainer_T>::from(
		const int i)
	{
		return sEnumMapper.from(i);
	}

	template<typename EnumContainer_T>
	typename EnumContainer_T::Type EnumStringable<EnumContainer_T>::from(
		const std::string& str)
	{
		return sEnumMapper.from(str);
	}

	//=========================================================================
}
