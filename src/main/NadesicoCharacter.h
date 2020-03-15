#pragma once

#include <util\EnumStringable.h>

namespace bxx_main
{
	//=========================================================================
	// namespace bxx_main
	//=========================================================================
	class NadesicoEnum
	{
	public:
		enum Type
		{
			Akito,
			Yurika,
			Ruri,
			Gai,
			End,
		};
	};

	class NadesicoCharacter
		: public bxx_util::EnumStringable<NadesicoEnum>
	{
	};

	//=========================================================================
}
