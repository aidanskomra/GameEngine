#pragma once
#include <string>

class Command;

class CommandDemo
{
public:
	CommandDemo();
	~CommandDemo();
	void HandleInput(std::string _button);

private:
	Command* m_commandJump;
	Command* m_commandFireGun;
	Command* m_commandSwapWeapon;
	Command* m_commandLurch;
};