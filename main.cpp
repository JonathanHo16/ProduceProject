#include <iostream>
#include "FruitsAndVeggiesBox.hpp"
#include "TestSuite.hpp"
int main() {
    FruitsAndVeggiesBox::setAvailablitiyList();
    TestSuite suite = TestSuite();\
    suite.runTest();

    return 0;
}