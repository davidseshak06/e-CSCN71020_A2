#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../BCSRec/main.c"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(BCSREC_functions)
	{
	public:

		TEST_METHOD(getPerimeter_test)
		{

			int length = 8;
			int width = 12;
			int perimeter = getPerimeter(&length, &width);
			Assert::AreEqual(perimeter, 40);
		}
		TEST_METHOD(getArea_test)
		{
			int length = 8;
			int width = 12;
			int area = getArea(&length, &width);
			Assert::AreEqual(area, 96);
		}

	};

	TEST_CLASS(BCSREC_inputs)
	{
	public:
		TEST_METHOD(setLength_test_perfect_case)
		{
			int input = 36;
			int length = 0;
			setLength(input, &length);
			Assert::AreEqual(length, 36);
		}
		TEST_METHOD(setLength_test_for_negative)
		{
			int input = -12;
			int length = 0;
			setLength(input, &length);
			Assert::AreEqual(length, 0);
		}
		TEST_METHOD(setLength_test_for_above_limit)
		{
			int input = 198;
			int length = 0;
			setLength(input, &length);
			Assert::AreEqual(length, 0);
		}
		TEST_METHOD(setWidth_test_for_perfect_case)
		{
			int input = 40;
			int width = 0;
			setWidth(input, &width);
			Assert::AreEqual(width, 40);
		}
		TEST_METHOD(setWidth_test_for_negative)
		{
			int input = -70;
			int width = 0;
			setWidth(input, &width);
			Assert::AreEqual(width, 0);
		}
		TEST_METHOD(setWidth_test_for_above_limit)
		{
			int input = 101;
			int width = 0;
			setWidth(input, &width);
			Assert::AreEqual(width, 0);
		};


	};
}
