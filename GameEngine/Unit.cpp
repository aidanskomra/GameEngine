#include "Unit.h"
#include <iostream>

void Unit::MoveTo(int _x, int _y) {
	m_lastX = m_x;
	m_lastY = m_y;
	m_x = _x;
	m_y = _y;
	std::cout << "Move to: x:" << m_x << " y: " << m_y << "\n";
};