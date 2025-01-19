#pragma once
#include "Subject.h"

class Unit;

class Physics
{
public:
	Physics();
	~Physics();

	Subject* GetEventFalling() { return m_falling; }
	void Update(Unit* _unit);

private:
	Subject* m_falling;
};

