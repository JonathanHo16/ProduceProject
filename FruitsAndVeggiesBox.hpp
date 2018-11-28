//
// Created by Jonathan Ho on 2018-11-27.
//

#ifndef PRODUCEPROJECT_FRUITSANDVEGGIESBOX_HPP
#define PRODUCEPROJECT_FRUITSANDVEGGIESBOX_HPP

#include "SeasonalProduce.hpp"
#include <vector>


class FruitsAndVeggiesBox
{
private:
    static vector<string> fall_list, winter_list, spring_list, summer_list;
    int generate_number(vector<string> &name_list, vector<int> &used );
    string pickName(int index, vector<string> &list);
    void fill(vector<string> &season_list, int season);
    void fill (vector<string> &season1_list, int season1, vector<string> &season2_list, int season2 );
    void subFill(vector<string> &season_list, int season, vector<int> &used_names );
    double generateWeight();
    int randDay();
    int randMonth();
public:

    int order_size;
    vector<FallProduce> fall_box;
    vector<WinterProduce> winter_box;
    vector<SpringProduce> spring_box;
    vector<SummerProduce> summer_box;
    enum sizes { SMALL_ORDER = 5, MEDIUM_ORDER = 10, LARGE_ORDER = 15};
    enum seasons { Winter = 1, Spring = 2, Summer = 3, Fall = 4};
    FruitsAndVeggiesBox();

    FruitsAndVeggiesBox(sizes size);

    void fill_the_box(int current_month);

    static void setAvailablitiyList();
};


#endif //PRODUCEPROJECT_FRUITSANDVEGGIESBOX_HPP
