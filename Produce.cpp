//
// Created by Jonathan Ho on 2018-11-24.
//

#include "Produce.hpp"

Produce::date::date(): day(1), month(1), year(2000){}

Produce::date::date(int new_day, int new_month, int new_year) : day(new_day), month(new_month), year(new_year){}

Produce::Produce(): name("n/a"), weight(0) , expiry_date() {}

Produce::Produce(string new_name, double new_weight, int new_day, int new_month, int new_year):
                name(new_name), weight(new_weight), expiry_date(new_day, new_month, new_year)  {}

string Produce::getName()
{
    return name;
}
double Produce::getWeight()
{
    return weight;
}
Produce::date Produce::getDate()
{
    return expiry_date;
}
bool Produce::compareDate(Produce::date other_date) const
{
    return expiry_date.day == other_date.day && expiry_date.month == other_date.month && expiry_date.year == other_date.year;
}
bool Produce::operator==( Produce& other) const
{
    name== other.getName() && weight == other.getWeight() &&  compareDate(other.getDate());
}