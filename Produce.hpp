//
// Created by Jonathan Ho on 2018-11-24.
//

#ifndef PRODUCEPROJECT_PERSON_HPP
#define PRODUCEPROJECT_PERSON_HPP

#include <string>
using namespace std;


class Produce {
private:
    string name;
    double weight;
    struct date
        {
            int day;
            int month;
            int year;
            bool operator==(date& other)
            {
                day == other.day && month == other.month && year == other.year;
            }
        };
    date expiry_date;
    bool compareDate(Produce::date other_date) const;
public:
    string getName();
    double getWeight();
    Produce::date getDate();
    bool operator==(Produce& other) const;




};


#endif //PRODUCEPROJECT_PERSON_HPP
