#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.2/lab6_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62
{
	TEST_CLASS(UnitTest62)
	{
	public:
		
		TEST_METHOD(TestMethod6_2)
		{
			int t = 0;
			int a = 5, n = 5, i = 0, min=0;
			
				t = Min(&a, n, i, min);
				Assert::AreEqual(t, 0);
		}
	};
}
