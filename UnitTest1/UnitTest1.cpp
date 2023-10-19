#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.2sophia/lab5.2sophia.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 2.0;
			double eps = 0.0001;
			double expected = 0.0001;


			double result = (x, eps);


			Assert::AreEqual(expected, result, 0.00001);
		}
	};
}
