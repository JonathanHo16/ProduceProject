//
// Created by Jonathan Ho on 2018-11-26.
//

#ifndef PRODUCEPROJECT_WINTERPRODUCE_HPP
#define PRODUCEPROJECT_WINTERPRODUCE_HPP

#include "Produce.hpp"


class FallProduce : public Produce
{
public:
    string type;
    string const fruit_list[38] = { "Apples", "Bananas", "Beets", "Bell Peppers", "Broccoli", "Brussels Sprouts", "Cabbage",
                                    "Carrots", "Cauliflower", "Celery", "Collared Greens", "Cranberries", "Garlic", "Ginger",
                                    "Grapes", "Green Beans", "Kale", "Kiwifruit", "Lemons", "Lettuce", "Limes", "Mangoes",
                                    "Mushrooms", "Onions", "Parsnips", "Pears", "Peas", "Pineapples", "Potatoes", "Pumpkins",
                                    "Radishes", "Raspberries", "Rutabagas", "Spinach", "Sweet Potatoes & Yams", "Swiss Chard",
                                    "Turnips", "Winter Squash"};

    FallProduce() : type("Fall"), Produce("n/a", 0, 1, 1, 2000)
    {

    }
};


#endif //PRODUCEPROJECT_WINTERPRODUCE_HPP
