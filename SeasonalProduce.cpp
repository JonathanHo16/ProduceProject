//
// Created by Jonathan Ho on 2018-11-26.
//

#include "SeasonalProduce.hpp"
#include <iostream>
using namespace std;


FallProduce::FallProduce() : type("Fall"), Produce("n/a", 0, 1, 1, 2000) {}

FallProduce::FallProduce(string new_name, double new_weight, int new_day, int new_month, int new_year):
                        Produce(new_name, new_weight, new_day, new_month, new_year) {}

void FallProduce::print()
{
    cout << "Type: " << type << endl;
    Produce::print();
}
bool FallProduce::operator==(FallProduce &other) const
{
    name == other.name && weight == other.weight && compareDate( other.getDate());
}


WinterProduce::WinterProduce() : type("Winter"), Produce("n/a", 0, 1, 1, 2000) {}

WinterProduce::WinterProduce(string new_name, double new_weight, int new_day, int new_month, int new_year):
        Produce(new_name, new_weight, new_day, new_month, new_year) {}

void WinterProduce::print()
{
    cout << "Type: " << type << endl;
    Produce::print();
}
bool WinterProduce::operator==(WinterProduce &other) const
{
    name == other.name && weight == other.weight && compareDate( other.getDate());
}


SpringProduce::SpringProduce() : type("Spring"), Produce("n/a", 0, 1, 1, 2000) {}

SpringProduce::SpringProduce(string new_name, double new_weight, int new_day, int new_month, int new_year):
        Produce(new_name, new_weight, new_day, new_month, new_year) {}

void SpringProduce::print()
{
    cout << "Type: " << type << endl;
    Produce::print();
}
bool SpringProduce::operator==(SpringProduce &other) const
{
    name == other.name && weight == other.weight && compareDate( other.getDate());
}

SummerProduce::SummerProduce() : type("Summer"), Produce("n/a", 0, 1, 1, 2000) {}

SummerProduce::SummerProduce(string new_name, double new_weight, int new_day, int new_month, int new_year):
        Produce(new_name, new_weight, new_day, new_month, new_year) {}

void SummerProduce::print()
{
    cout << "Type: " << type << endl;
    Produce::print();
}
bool SummerProduce::operator==(SummerProduce &other) const
{
    name == other.name && weight == other.weight && compareDate( other.getDate());
}



