#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.2/Project5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 1;
			double n = 0;
			double a = -1;
			double expectation = -1;
			double res = A(x, n, a);
			Assert::AreEqual(res , expectation);

		}
		TEST_METHOD(TestMethod2)
		{

			double x = 1;
			double eps = 2;
			int n = 0;
			double s = -1;
			double expectation = -1;
			double c = S(x, eps, n, s);
			double expected = round(c);
			Assert::AreEqual(expected, expectation);
		}
	};
}
