#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../BCSRec/main.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(BCSREC)
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
}
