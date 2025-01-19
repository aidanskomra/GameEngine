#include <iostream>
#include "Robots.h"

int main()
{
	InheritenceRobot* ir = new InheritenceRobot();
	std::cout << "Inheritence Robot\n";
	ir->Grab();
	ir->Walk();

	CompositionRobot* cr = new CompositionRobot();
	std::cout << "\nComposition Robot\n";
	cr->Grab();
	cr->Walk();
}
