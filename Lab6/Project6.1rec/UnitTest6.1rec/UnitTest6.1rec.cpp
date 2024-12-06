#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.1rec/Project6.1rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61rec
{
	TEST_CLASS(UnitTest61rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k[5] = { 12,23,3,4,-5 };
			int Actual = Count_un_el_r(k, 5, 0, 0);
			int Expected = 3;
			Assert::AreEqual(Expected, Actual);
		}
	};
}
