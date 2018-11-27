//
// Created by Jonathan Ho on 2018-11-26.
//

#ifndef PRODUCEPROJECT_SEASONALPRODUCE_HPP
#define PRODUCEPROJECT_SEASONALPRODUCE_HPP

#include "Produce.hpp"
#include <vector>



class FallProduce : public Produce
{
public:
    string type;
    FallProduce();
    FallProduce(string new_name, double new_weight, int new_day, int new_month, int new_year);
    void print();
    bool operator==(FallProduce& other) const;
};
class WinterProduce : public Produce
{
public:
    string type;
    WinterProduce();
    WinterProduce(string new_name, double new_weight, int new_day, int new_month, int new_year);
    void print();
    bool operator==(WinterProduce& other) const;
};

class SpringProduce : public Produce
{
public:
    string type;
    SpringProduce();
    SpringProduce(string new_name, double new_weight, int new_day, int new_month, int new_year);
    void print();
    bool operator==(SpringProduce& other) const;
};
class SummerProduce : public Produce
{
public:
    string type;
    SummerProduce();
    SummerProduce(string new_name, double new_weight, int new_day, int new_month, int new_year);
    void print();
    bool operator==(SummerProduce& other) const;
};




#endif //SEASONALPROJECT_FALLPRODUCE_HPP
