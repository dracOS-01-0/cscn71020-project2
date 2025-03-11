#include "pch.h"
#include "CppUnitTest.h"

//extern "C" //insert function
extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);
extern "C" void setLength(int, int*);
extern "C" void setWidth(int, int*);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MeasurementTests
{
	TEST_CLASS(MeasurementTests) //for the methods that calculate measurements
	{
	public:
		
		TEST_METHOD(PerimeterCalculation)
		{
			//tests proper calculations of perimeter
			int result = 0;
			int a = 3;//regular numbers, testing basic functionality
			int b = 4;
			result = getPerimeter(&a, &b);
			Assert::AreEqual(14, result); //2(3+4) should equal 14. 
			//if not, something is wrong with getPerimeter's perimeter equation
			
		}

		TEST_METHOD(AreaCalculation)
		{
			//tests proper calculations of area
			int result = 0;
			int a = 4;//regular numbers, testing basic functionality
			int b = 9;
			result = getArea(&a, &b);
			Assert::AreEqual(36, result);// 4*9 should equal 36
			//if not, something is wrong with getArea's area calculation
		}

	};
}

namespace SettingTests
{
	TEST_CLASS(SettingTests)//for the methods that set dimensions
	{
	public:


		TEST_METHOD(LengthEstablishment)//tests whether it can correctly set the length
		{
			int in = 30;//regular number
			int out = 12;//doesnt matter
			setLength(in, &out);
			Assert::AreEqual(30, out);// out should change to what the input was
			//if not, something is wrong with setLength's length setting
		}

		TEST_METHOD(LengthLowerLimit)//tests input under lower bound
		{
			int in = 0;//smaller than the minimum length required (1)
			int out = 10;//doesnt matter
			setLength(in, &out);
			Assert::AreEqual(10, out);//expecting value to remain the same
			//if not, setLength's minimum value is not working			

		}

		TEST_METHOD(LengthUpperLimit)//tests input over upper bound
		{
			int in = 100;//bigger than max input(99)
			int out = 10;//doesn't matter
			setLength(in, &out);
			Assert::AreEqual(10, out);//expecting vlaue to remain the same
			//if not, setLenght's maximum value is not working

		}

		TEST_METHOD(WidthEstablishment)//tests whether it can correctly set the width
		{
			int in = 27;//regular number
			int out = 18;//doesnt matter
			setWidth(in, &out);
			Assert::AreEqual(27, out);// out should change to what the input was
			//if not, something is wrong with setwidth's width setting
		}

		TEST_METHOD(WidthLowerLimit)//tests input under lower bound
		{
			int in = 0;//smaller than the minimum length required (1)
			int out = 10;//doesnt matter
			setWidth(in, &out);
			Assert::AreEqual(10, out);//expecting value to remain the same
			//if not, setwidth's minimum value is not working			

		}

		TEST_METHOD(WidthUpperLimit)//tests input over upper bound
		{
			int in = 100;//bigger than max input(99)
			int out = 10;//doesn't matter
			setWidth(in, &out);
			Assert::AreEqual(10, out);//expecting value to remain the same
			//if not, setWidth's maximum value is not working

		}
	};
}
