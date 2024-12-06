#include "pch.h"
#include "CppUnitTest.h"
#include "../Last+/Last+.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 5;
			int a[size] = { 32,1,-1,-24,5 };
			int Expected = 8;
			int Actual = Sum_max_min_el(a, size);
			Assert::AreEqual(Expected, Actual);
		}
	};
}
