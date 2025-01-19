#include "ThreadTest.h"
#include <iostream>
#include <chrono>

void ThreadTest::TestLambdaFunction() {
	m_thread = std::thread([]
		{
			for (int i = 0; i < 5; i++)
			{
				std::cout << "thread Lambda function Executing" << std::endl;
				std::this_thread::sleep_for(std::chrono::milliseconds(200));
			}
		});
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Display From MainThread" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
	}
	m_thread.join();
}