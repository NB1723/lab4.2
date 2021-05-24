#include "pch.h"
#include "CppUnitTest.h"
#include "../Rectangular_triangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rectangular_triangle C(5, 10);
			int S = C.Square();
			Assert::AreEqual(C.Square(), 25.0);
		}
	};
}
