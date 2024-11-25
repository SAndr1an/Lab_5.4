#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.4/Lab_5.4.cpp"
#include <cmath>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMetho1)
		{
            double expactation = Interaction(10);
            double expected_result = -2.67874;
            Assert::AreEqual(expactation, expected_result);
        }

        TEST_METHOD(TestMethod2)
        {
            double expactation = S1uu(10, 3);
            double expected_result = -2.67874;
            Assert::AreEqual(expactation, expected_result);
        }

        TEST_METHOD(TestMethod3)
        {
            double expactation = S2ud(10, 10);
            double expected_result = -2.67874;
            Assert::AreEqual(expactation, expected_result);
        }

        TEST_METHOD(TestMethod4)
        {
            double expactation = S4dd(10, 3, 0);
            double expected_result = -2.67874;
            Assert::AreEqual(expactation, expected_result);
        }

        TEST_METHOD(TestMethod5)
        {
            double expactation = S4dd(10, 10, 0);
            double expected_result = -2.67874;
            Assert::AreEqual(expactation, expected_result);
		}
	};
}
