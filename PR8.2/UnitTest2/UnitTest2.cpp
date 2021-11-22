#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\PR8.2\PR8.2\PR8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str = "abc qwe  fg   poi";
			int max = MaxLength(str);
			Assert::AreEqual(max, 3);
		}
	};
}
