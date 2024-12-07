#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.3rec/Project6.3rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63
{
	TEST_CLASS(UnitTest63)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int k = 10;
			int a[k] = { 1,2,3,4,5,6,7,8,9,10 };
			int Expected = 55;
			int Actual = sum_elements_recursive(a, k);
			Assert::AreEqual(Expected, Actual);
		}
		TEST_METHOD(TestMethod2)
		{
			const int k = 10;
			int a[k] = { 1,2,3,4,5,6,7,8,9,10 };
			int Expected = 55;
			int Actual = sum_elements_template_recursive(a, k, 0);
			Assert::AreEqual(Expected, Actual);
		}
	};
}
