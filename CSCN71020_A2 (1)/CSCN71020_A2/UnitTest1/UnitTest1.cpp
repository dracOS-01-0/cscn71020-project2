#include "pch.h"
#include "CppUnitTest.h"

//extern "C" //insert function
extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MeasurementTests
{
	TEST_CLASS(MeasurementTests)//
	{
	public:
		
		TEST_METHOD(PerimeterCalculation)//tests a function
		{
			int result = 0;
			int a = 3;
			int b = 4;
			result = getPerimeter(&a, &b);
			Assert::AreEqual(14, result);
			
		}

		TEST_METHOD(AreaCalculation)
		{
			int result = 0;
			int a = 4;
			int b = 9;
			result = getArea(&a, &b);
			Assert::AreEqual(36, result);
		}

	};
}
