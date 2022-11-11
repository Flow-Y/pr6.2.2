#include "pch.h"
#include "CppUnitTest.h"
#include "../pr6.2.2/pr6.2.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest621
{
	TEST_CLASS(UnitTest621)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int x[10] = { 1, 2, 3, 4, 5 , 6 ,7 ,8 , 9 , 10 };
			int res = change(x, 10);
			Assert::AreEqual(res, res);

		}
	};
}