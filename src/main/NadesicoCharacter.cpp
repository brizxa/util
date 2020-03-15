#include "NadesicoCharacter.h"

#include <util\EnumMapper.h>

//=============================================================================
// namespace
//=============================================================================
using namespace bxx_util;
using namespace bxx_main;

//=============================================================================
static const EnumMapper<NadesicoEnum::Type, std::string> sEnumMapper(
	"[NadesicoCharacter]",
	{
		{ NadesicoCharacter::Akito, "Akito Tenkawa" },
		{ NadesicoCharacter::Yurika, "Yurika Misumaru" },
		{ NadesicoCharacter::Ruri, "Ruri Hoshino" },
		{ NadesicoCharacter::Gai, "Gai Daigoji" },
	}
);

//=============================================================================
#include <util\EnumStringable_impl.h>
template class EnumStringable<NadesicoEnum>;
