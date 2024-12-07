#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.1/Project6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k[5] = {12,23,3,4,-5};
			int Actual = Count_un_el(k, 5);
			int Expected = 3;
			Assert::AreEqual(Expected, Actual);
			
		}

	};
	
}
