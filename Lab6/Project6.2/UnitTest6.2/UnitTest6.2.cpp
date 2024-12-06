#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.2/Project6.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62
{
	TEST_CLASS(UnitTest62)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 5;
			int a[size] = {32,1,-1,-24,5};
			int Expected = 3;
			int Actual = Count_un_el(a, size);
			Assert::AreEqual(Expected, Actual);

		}
	};
}
