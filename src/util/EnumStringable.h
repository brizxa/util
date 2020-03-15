#pragma once

#include <vector>
#include <string>

#include "DLLEXPORT.h"

//#pragma warning(disable : 26812)

namespace bxx_util
{
	//=========================================================================
	// namespace bxx_util
	//=========================================================================
	template<typename EnumContainer_T>
	class EnumStringable : public EnumContainer_T
	{
	protected:
		EnumStringable(); // Prevent from creating instance
		// ~EnumStringable() = 0; // Don't want vtable

	public:
		typedef typename EnumContainer_T::Type Type_T;

	public:
		DLLEXPORT static std::vector<Type_T> getKeys();
		DLLEXPORT static const std::string& toString(Type_T);
		DLLEXPORT static Type_T from(const int);
		DLLEXPORT static Type_T from(const std::string&);
	};

	//=========================================================================
}
