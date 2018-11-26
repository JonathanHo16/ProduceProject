//
// Created by Jonathan Ho on 2018-11-26.
//

#ifndef PRODUCEPROJECT_WINTERPRODUCE_HPP
#define PRODUCEPROJECT_WINTERPRODUCE_HPP

#include "Produce.hpp"
#include <vector>


class FallProduce : public Produce
{
public:
    string type;
    vector<string>fruit_list;
    FallProduce() : type("Fall"), Produce("n/a", 0, 1, 1, 2000)
    {

    }
};


#endif //PRODUCEPROJECT_WINTERPRODUCE_HPP
