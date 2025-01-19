#include <iostream>
#include "Achievements.h"
#include "Unit.h"

void Achievements::OnNotify(Unit* _unit, std::string _event) {
	if ((_event == "UnitFalling") && (_unit->getY() < 0)) {
		UnlockAchievement("Died From Falling");
	}
}

void Achievements::UnlockAchievement(std::string _achievement) {
	std::cout << "Achievement unlocked: " << _achievement << "!!\n";
}