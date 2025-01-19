#include <iostream>
#include "ThreadTest.h"

int main()
{
	ThreadTest* ttest = new ThreadTest();
	ttest->TestLambdaFunction();
	delete ttest;
}