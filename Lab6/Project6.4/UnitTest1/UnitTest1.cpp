#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.4/Project6.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			double* a = new double[n];
			a[0] = -12;
			a[1] = 2;
			a[2] = 12;
			a[3] = 12;
			a[4] = -12;
			double expected = 26;
			double actual = sum_elements_bet(a,n);
			Assert::AreEqual(expected, actual);
		}
	};
}
