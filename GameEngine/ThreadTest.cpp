#include "ThreadTest.h"
#include <iostream>
#include <chrono>

void ThreadTest::TestFunctionObject() {
	m_thread = std::thread(ThreadTest());
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Display From MainThread" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
	}
	m_thread.join();
}

void ThreadTest::operator()()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "thread function object Executing" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
	}
}