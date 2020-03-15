#pragma once

#include <util\EnumStringable.h>

namespace bxx_main
{
	//=========================================================================
	// namespace bxx_main
	//=========================================================================
	class AnimalEnum
	{
	public:
		enum Type
		{
			Capybara,
			Cheetah,
			Dolphin,
			End,
		};
	};

	class AnimalType
		: public bxx_util::EnumStringable<AnimalEnum>
	{
	};

	//=========================================================================
}
