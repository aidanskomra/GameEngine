#include <iostream>
#include "ThreadTest.h"

int main()
{
	ThreadTest* ttest = new ThreadTest();
	ttest->TestStaticFunctionPointer();
	delete ttest;
}
