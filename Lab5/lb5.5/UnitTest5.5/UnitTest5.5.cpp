#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.5/Project5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int depth = 0;
			int res = Akerman(0, 2, 1, depth);
			Assert::AreEqual(res, 3);
		}
	};
}
