#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.4rec/Project6.4rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64rec
{
	TEST_CLASS(UnitTest64rec)
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
			a[4] = -13;
			double expected = 26;
			double actual = sum_elements_bet_r(a, n, serch_minus_el_r(a, n, 0)+1, 0, serch_minus_el_r(a, n, 0), serch_minus_el_r(a, n, serch_minus_el_r(a, n, 0) + 1));
			Assert::AreEqual(expected, actual);
		}
	};
}
