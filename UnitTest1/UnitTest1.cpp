﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 8.1 string/Lab 8.1 string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        TEST_METHOD(FindCharTest)
        {
            char str[12] = "BASIC";
            int result = Count(str);
            Assert::AreEqual(result, 5);
        }
    };
}