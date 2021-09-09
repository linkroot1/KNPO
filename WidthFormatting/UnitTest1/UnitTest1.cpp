#include "pch.h"
#include "CppUnitTest.h"
#include "../WidthFormatting/functions.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			int expectation = 0;
			int result = 0;
			FILE* test;
			fopen_s(&test, "test1.txt", "r");

			if (test == NULL)
			{
				expectation = -1;
			}

			result = getMaxLen(test);
			Assert::AreEqual(expectation, result);
			fclose(test);

		}


		TEST_METHOD(TestMethod2)
		{

			int expectation = 6;
			int result = 0;
			FILE* test;
			fopen_s(&test, "test2.txt", "r");

			if (test == NULL)
			{
				expectation = -1;
			}

			result = getMaxLen(test);
			Assert::AreEqual(expectation, result);
			fclose(test);

		}


		TEST_METHOD(TestMethod3)
		{

			int expectation = 8;
			int result = 0;
			FILE* test;
			fopen_s(&test, "test3.txt", "r");

			if (test == NULL)
			{
				expectation = -1;
			}

			result = getMaxLen(test);
			Assert::AreEqual(expectation, result);
			fclose(test);
		}



		TEST_METHOD(TestMethod4)
		{

			int expectation = 8;
			int result = 0;
			FILE* test;
			fopen_s(&test, "test4.txt", "r");

			if (test == NULL)
			{
				expectation = -1;
			}

			result = getMaxLen(test);
			Assert::AreEqual(expectation, result);
			fclose(test);

		}


		TEST_METHOD(TestMethod5)
		{

			int expectation = 6;
			int result = 0;
			FILE* test;
			fopen_s(&test, "test5.txt", "r");

			if (test == NULL)
			{
				expectation = -1;
			}

			result = getMaxLen(test);
			Assert::AreEqual(expectation, result);
			fclose(test);

		}


		TEST_METHOD(TestMethod6)
		{

			int expectation = 7;
			int result = 0;
			FILE* test;
			fopen_s(&test, "test6.txt", "r");

			if (test == NULL)
			{
				expectation = -1;
			}

			result = getMaxLen(test);
			Assert::AreEqual(expectation, result);
			fclose(test);

		}

	};
}