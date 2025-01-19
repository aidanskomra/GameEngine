#include "Unit.h"
#include <iostream>

void Unit::MoveTo(int _x, int _y) 
{
	m_dirty = ((m_x != _x) || (m_y != _y));
	m_lastX = m_x;
	m_lastY = m_y;
	m_x = _x;
	m_y = _y;
};

void Unit::Update()
{
	if (m_dirty)
	{
		m_dirty = false;
		std::cout << " Preform the operation once per movement. \n";
		m_cachedData.str("");
		m_cachedData << "New Position is x: " << m_x << "  y: " << m_y;
	}
}