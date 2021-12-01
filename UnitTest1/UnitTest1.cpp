#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.3.2/Lab_6.3.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[]{ 8,-8,0,15,-1 };
			int k = 0;
			sort(arr, 5, 0, 0, k);
			int arr2[]{ 15,8,0,-1,-8 };
			for (int i = 0; i < 5; i++)
			{
				Assert::AreEqual(arr[i], arr2[i]);
			}
	
		}
	};
}
