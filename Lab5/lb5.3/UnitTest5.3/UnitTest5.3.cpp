#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.3/Project5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = acos(0);
			double res = p(x);
			Assert::AreEqual(res, 1.);
		}
		TEST_METHOD(TestMethod2)
		{
			double x = 0.5;
			double res = round(p(x) * 100000) / 100000;
			Assert::AreEqual(res, 1.15468);
		}
	};
}
