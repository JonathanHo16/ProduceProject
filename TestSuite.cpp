//
// Created by Jonathan Ho on 2018-11-28.
//

#include "TestSuite.hpp"
#include "Produce.hpp"
#include "SeasonalProduce.hpp"
#include "FruitsAndVeggiesBox.hpp"
#include <iostream>
#include <assert.h>
using namespace std;

TestSuite::TestSuite() {}

void TestSuite::testProduce()
{
    Produce test1 = Produce();
    test1.print();

    cout << endl;

    Produce test2 = Produce("test_name", 12.34, 11, 2, 2019);
    test2.print();
    cout << endl;
}
void TestSuite::testLists()
{
    FruitsAndVeggiesBox::printLists();
}
void TestSuite::testOperators()
{
    Produce test1 = Produce();
    Produce test2 = Produce();
    Produce test3 = Produce("test_name", 12.34, 1, 1 ,2000);
    assert(test1 == test2);
    assert(!(test1 == test3));

    WinterProduce w_test1 = WinterProduce();
    WinterProduce w_test2 = WinterProduce();
    WinterProduce w_test3 = WinterProduce("test_name", 43.21, 2,2,2022);
    assert(w_test1 == w_test2);
    assert(!(w_test1 == w_test3));

    FallProduce f_test1 = FallProduce();
    FallProduce f_test2 = FallProduce();
    FallProduce f_test3 = FallProduce("test_name", 43.21, 2,2,2022);
    assert(f_test1 == f_test2);
    assert(!(f_test1 == f_test3));

    SpringProduce Sp_test1 = SpringProduce();
    SpringProduce Sp_test2 = SpringProduce();
    SpringProduce Sp_test3 = SpringProduce("test_name", 43.21, 2,2,2022);
    assert(Sp_test1 == Sp_test2);
    assert(!(Sp_test1 == Sp_test3));

    SummerProduce su_test1 = SummerProduce();
    SummerProduce su_test2 = SummerProduce();
    SummerProduce su_test3 = SummerProduce("test_name", 43.21, 2,2,2022);
    assert(su_test1 == su_test2);
    assert(!(su_test1 == su_test3));

    cout << "Operator tests pass \n";
}
 void TestSuite::testBox()
 {
    FruitsAndVeggiesBox test_box1 = FruitsAndVeggiesBox();
    assert(test_box1.order_size == 0);
     cout << "Progress 1\n";

    FruitsAndVeggiesBox test_box2 = FruitsAndVeggiesBox(FruitsAndVeggiesBox::sizes::MEDIUM_ORDER);
    assert(test_box2.order_size == FruitsAndVeggiesBox::sizes::MEDIUM_ORDER);


    test_box2.fill_the_box(1);
    // January
    test_box2.print();
    cout << "First test pass\n";

    FruitsAndVeggiesBox test_box3 = FruitsAndVeggiesBox(FruitsAndVeggiesBox::sizes::LARGE_ORDER);
    test_box3.fill_the_box(3);
    test_box3.print();
     cout << "First test pass\n";
 }
void TestSuite::testWinter() {

    WinterProduce check1;
    check1.print();

    cout << endl;

    WinterProduce check2 = WinterProduce("asfd", 12.1, 1, 1, 2019);
    check2.print();

}

void TestSuite::testSpring() {
    SpringProduce check7;
    check7.print();

    cout << endl;

    SpringProduce check8 = SpringProduce("vnxm,zcvnjkr", 95.2, 2, 9, 2019);
    check8.print();

}

void TestSuite::testSummer() {
    SummerProduce check5;
    check5.print();

    cout << endl;

    SummerProduce check6 = SummerProduce("mckesmd", 63.2, 5, 2, 2019);;
    check6.print();

}

void TestSuite::testFall() {
    FallProduce check3;
    check3.print();

    cout << endl;

    FallProduce check4 = FallProduce("asfdqweaf", 5.1, 12, 11, 2019);
    check4.print();

}
void TestSuite::runTest()
{
    testProduce();
    testLists();
    testWinter();
    testSpring();
    testSummer();
    testFall();
    testOperators();
    testBox();
    cout << "All Tests Passed";

}