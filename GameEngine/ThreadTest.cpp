#include "ThreadTest.h"
#include <iostream>
#include <chrono>

void ThreadTest::TestStaticFunctionPointer() {
	m_thread = std::thread(StaticThreadFunction);
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Display From MainThread\n" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
	}
	m_thread.join();
}

void ThreadTest::StaticThreadFunction()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "thread static function pointer Executing\n" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
	}
}