#include "pch.h"
#include "CppUnitTest.h"
#include "..\Vector2D_public.cpp"
#include "..\Vector2D_private.cpp"
#include "..\Vector2D.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector2D_public v2(0, 4);
			Assert::AreEqual(4.0, v2.Length());
		}
	};
}
