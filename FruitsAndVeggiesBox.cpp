//
// Created by Jonathan Ho on 2018-11-27.
//

#include "FruitsAndVeggiesBox.hpp"
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iostream>


FruitsAndVeggiesBox::FruitsAndVeggiesBox() : order_size(0)
{

}
FruitsAndVeggiesBox::FruitsAndVeggiesBox(FruitsAndVeggiesBox::sizes size): order_size(size)
{}

vector<string> FruitsAndVeggiesBox::fall_list;
vector<string> FruitsAndVeggiesBox::winter_list;
vector<string> FruitsAndVeggiesBox::spring_list;
vector<string> FruitsAndVeggiesBox::summer_list;


void FruitsAndVeggiesBox::setAvailablitiyList()
{
    //cout << "function called\n";
    ifstream my_ifstream;
    string curr_line;
    my_ifstream.open("../Fall.txt");
    if(!my_ifstream.fail())
    {
        //cout << "first filed opened\n";
        while (true)
        {
            if (my_ifstream.eof())
            {
                break;

            }
            getline(my_ifstream, curr_line);
            FruitsAndVeggiesBox::fall_list.push_back(curr_line);
        }
    }
    my_ifstream.clear();
    my_ifstream.close();
    my_ifstream.open("../Winter.txt");
    if(!my_ifstream.fail())
    {
        while (true)
        {
            if (my_ifstream.eof())
            {
                break;

            }
            getline(my_ifstream, curr_line);
            FruitsAndVeggiesBox::winter_list.push_back(curr_line);
        }
    }
    my_ifstream.clear();
    my_ifstream.close();
    my_ifstream.open("../Spring.txt");
    if(!my_ifstream.fail())
    {
        while (true)
        {
            if (my_ifstream.eof())
            {
                break;

            }
            getline(my_ifstream, curr_line);
            FruitsAndVeggiesBox::spring_list.push_back(curr_line);
        }
    }
    my_ifstream.clear();
    my_ifstream.close();
    my_ifstream.open("../Summer.txt");
    if(!my_ifstream.fail())
    {
        while (true)
        {
            if (my_ifstream.eof())
            {
                break;

            }
            getline(my_ifstream, curr_line);
            FruitsAndVeggiesBox::summer_list.push_back(curr_line);
        }
    }
    my_ifstream.clear();
    my_ifstream.close();

}
void FruitsAndVeggiesBox::fill_the_box(int current_month)
{

    switch( current_month)
    {
        case 1:
        {
            fill(FruitsAndVeggiesBox::winter_list, seasons::Winter);
            break;
        }
        case 2:
        {
            fill(FruitsAndVeggiesBox::winter_list, seasons::Winter, FruitsAndVeggiesBox::spring_list, seasons::Spring);
            break;
        }
        case 3:
        {
            fill(FruitsAndVeggiesBox::winter_list, seasons::Winter, FruitsAndVeggiesBox::spring_list, seasons::Spring);
            break;
        }
        case 4:
        {
            fill(FruitsAndVeggiesBox::spring_list, seasons::Spring);
            break;
        }
        case 5:
        {
            fill(FruitsAndVeggiesBox::spring_list, seasons::Spring, FruitsAndVeggiesBox::summer_list, seasons::Summer);
            break;
        }
        case 6:
        {
            fill(FruitsAndVeggiesBox::spring_list, seasons::Spring, FruitsAndVeggiesBox::summer_list, seasons::Summer);
            break;
        }
        case 7:
        {
            fill(FruitsAndVeggiesBox::summer_list, seasons::Summer);
            break;
        }
        case 8:
        {
            fill(FruitsAndVeggiesBox::summer_list, seasons::Summer, FruitsAndVeggiesBox::fall_list, seasons::Fall);
            break;
        }
        case 9:
        {
            fill(FruitsAndVeggiesBox::summer_list, seasons::Summer, FruitsAndVeggiesBox::fall_list, seasons::Fall);
            break;
        }
        case 10:
        {
            fill(FruitsAndVeggiesBox::fall_list, seasons::Fall);
            break;
        }
        case 11:
        {
            fill(FruitsAndVeggiesBox::fall_list, seasons::Fall, FruitsAndVeggiesBox::winter_list, seasons::Winter);
            break;
        }
        case 12:
        {
            fill(FruitsAndVeggiesBox::fall_list, seasons::Fall, FruitsAndVeggiesBox::winter_list, seasons::Winter);
            break;
        }
    }

}
void FruitsAndVeggiesBox::fill(vector<string> &season1_list, int season1, vector<string> &season2_list, int season2)
{
    vector <int> season1_used_names, season2_used_names;
    int curr_season;
    for (int i = 0; i < order_size ; i++)
    {
        curr_season = rand() % 2;
        if (curr_season == 0)
        {
            subFill(season1_list, season1, season1_used_names);
        }
        else if (curr_season == 1)
        {
            subFill(season2_list, season2, season2_used_names);
        }
    }
}
void FruitsAndVeggiesBox::subFill(vector<string> &season_list, int season, vector<int> &used_names )
{
    switch (season)
    {
        case seasons::Winter:
        {
            winter_box.push_back(WinterProduce(pickName(generate_number(season_list, used_names), season_list),
                                               generateWeight(),
                                               randDay(),
                                               randMonth(),
                                               2019));
            break;
        }
        case seasons::Spring:
        {
            spring_box.push_back(SpringProduce(pickName(generate_number(season_list, used_names), season_list),
                                                   generateWeight(),
                                                   randDay(),
                                                   randMonth(),
                                                   2019));
            break;
        }
        case seasons::Summer:
        {
                summer_box.push_back(SummerProduce(pickName(generate_number(season_list, used_names), season_list),
                                                   generateWeight(),
                                                   randDay(),
                                                   randMonth(),
                                                   2019));
            break;
        }
        case seasons::Fall:
        {
            fall_box.push_back(FallProduce(pickName(generate_number(season_list, used_names), season_list),
                                           generateWeight(),
                                           randDay(),
                                           randMonth(),
                                           2019));

            break;
        }
    }

}
void FruitsAndVeggiesBox::fill (vector<string> &season_list, int season)
{
    cout << "Filled entered\n";
    string  produce_name;
    vector<int> used_names;
    switch (season)
    {
        case seasons::Winter:
        {

            for (int i = 0; i < order_size ; i++)
            {
                winter_box.push_back(WinterProduce(pickName(generate_number(season_list, used_names), season_list),
                                                   generateWeight(),
                                                   randDay(),
                                                   randMonth(),
                                                   2019));
            }
            break;
        }
        case seasons::Spring:
        {
            for (int i = 0; i < order_size ; i++)
            {
                spring_box.push_back(SpringProduce(pickName(generate_number(season_list, used_names), season_list),
                                                   generateWeight(),
                                                   randDay(),
                                                   randMonth(),
                                                   2019));
            }
            break;
        }
        case seasons::Summer:
        {
            for (int i = 0; i < order_size ; i++)
            {
                summer_box.push_back(SummerProduce(pickName(generate_number(season_list, used_names), season_list),
                                                   generateWeight(),
                                                   randDay(),
                                                   randMonth(),
                                                   2019));
            }
            break;
        }
        case seasons::Fall:
        {
            for (int i = 0; i < order_size ; i++)
            {
                fall_box.push_back(FallProduce(pickName(generate_number(season_list, used_names), season_list),
                                                   generateWeight(),
                                                   randDay(),
                                                   randMonth(),
                                                   2019));
            }
            break;
        }
    }

}
int FruitsAndVeggiesBox::generate_number(vector<string> &name_list, vector<int> &used )
{
    cout << "Number generated entered\n";
    int index;
    while (true)
    {
        index = rand() % name_list.size();
        if (unique(index, used))
        {
            break;
        }
        else
        {
            continue;
        }

    }
    cout << "Number generated\n";
    used.push_back(index);
    return index;
}
string FruitsAndVeggiesBox:: pickName(int index, vector<string> &list)
{
    return list[index];
}
double FruitsAndVeggiesBox::generateWeight()
{
    return (rand()%1000 + 1) / 1000;
}

int FruitsAndVeggiesBox::randDay()
{
    return rand() % 28 + 1;
}
int FruitsAndVeggiesBox::randMonth()
{
    return rand()& 12 + 1;
}
void FruitsAndVeggiesBox::print()
{
    cout << "Winter Items\n";
    for (int i = 0; i < winter_box.size(); i++)
    {
        winter_box[i].print();
    }
    cout << "Spring Items\n";
    for (int i = 0; i < spring_box.size(); i++)
    {
        spring_box[i].print();
    }

    cout << "Summer Items\n";
    for (int i = 0; i < summer_box.size(); i++)
    {
        summer_box[i].print();
    }
    cout << "Fall Items\n";
    for (int i = 0; i < fall_box.size(); i++)
    {
        fall_box[i].print();
    }
}
void FruitsAndVeggiesBox::printLists()
{
    cout << "Winter availablity\n" ;
    for ( int i = 0; i < winter_list.size(); i++)
    {
        cout << winter_list[i] << endl;
    }

    cout << endl;
    cout << "Spring availablity\n" ;
    for ( int i = 0; i < spring_list.size(); i++)
    {
        cout << spring_list[i] << endl;
    }

    cout << endl;

    cout << "Summer availablity\n" ;
    for ( int i = 0; i < summer_list.size(); i++)
    {
        cout << summer_list[i] << endl;
    }

    cout << endl;

    cout << "Fall availablity\n" ;
    for ( int i = 0; i < fall_list.size(); i++)
    {
        cout << fall_list[i] << endl;
    }
}
bool FruitsAndVeggiesBox::unique(int number, vector<int> &used)
{
    int index = -1;
    for (int i = 0; i < used.size(); i++)
    {
        if (used[i] == number)
            index = i;
    }
    if (index == -1)
        return true;
    else
        return false;
}