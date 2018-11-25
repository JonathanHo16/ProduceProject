//
// Created by Jonathan Ho on 2018-11-24.
//

#include "Produce.hpp"


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