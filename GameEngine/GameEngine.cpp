#include <iostream>
#include "Unit.h"

int main()
{
	Unit* unit = new Unit();

	float count = 0.0f;
	while (count < 10) {
		unit->Update();
		unit->MoveTo((int)count, 10);
		std::cout << unit->GetCachedData().str() << "\n";
		count += 0.333f;
	};
	delete unit;
}