#include <iostream>

#include "AnimalType.h"
#include "NadesicoCharacter.h"

using namespace std;
using namespace bxx_main;

void fly_me_to_the_moon(const AnimalType::Type animal)
{
}

int main()
{
	// Index from 0 to AnimalType::End
	cout << "Animals:" << endl;
	for (int index = 0; index < AnimalType::End; ++index)
	{
		const AnimalType::Type type = AnimalType::from(index);
		cout << "    " << index << "    " << AnimalType::toString(type) << endl;
	}
	cout << endl;
	
	// Index from getKeys()
	cout << "Martian Successor Nadesico characters:" << endl;
	for (const auto key : NadesicoCharacter::getKeys())
	{
		cout << "    " << key << "    " << NadesicoCharacter::toString(key) << endl;
	}
	cout << endl;

	//
	const NadesicoCharacter::Type gai = NadesicoCharacter::from("Gai Daigoji");
	if (NadesicoCharacter::Gai == gai)
	{
		cout << "The full name that belongs to soul of Jiro Yamada is " << NadesicoCharacter::toString(gai);
	}

	// This problem still exist.
	AnimalType::Capybara == NadesicoCharacter::Akito;

	// Function parameters are type checked.
	fly_me_to_the_moon(AnimalType::Capybara);
	//fly_me_to_the_moon(NadesicoCharacter::Akito); // Compilation error.

	return 0;
}
