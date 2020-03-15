#include "AnimalType.h"

#include <util\EnumMapper.h>

//=============================================================================
// namespace
//=============================================================================
using namespace bxx_util;
using namespace bxx_main;

//=============================================================================
static const EnumMapper<AnimalEnum::Type, std::string> sEnumMapper(
	"[AnimalType]",
	{
		{ AnimalType::Capybara, "Capybara" },
		{ AnimalType::Cheetah, "Cheetah" },
		{ AnimalType::Dolphin, "Dolphin" },
	}
);

//=============================================================================
#include <util\EnumStringable_impl.h>
template class EnumStringable<AnimalEnum>;
