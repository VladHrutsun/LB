#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.4/Project5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestINTERATION)
		{
			int expected = INTERATION(2,19);
			int actual = 20.909;
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestRECURS1)
		{
			int expected = RECURS1(2, 19, 2);
			int actual = 20.909;
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestRECURS2)
		{
			int expected = RECURS2(2, 19, 19);
			int actual = 20.909;
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestRECURS3)
		{
			int expected = RECURS3(2, 19, 2, 0);
			int actual = 20.909;
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestRECURS4)
		{
			int expected = RECURS4(2, 19, 19, 0);
			int actual = 20.909;
			Assert::AreEqual(expected, actual);
		}
	};
}
