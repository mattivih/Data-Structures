//
// Created by Matti Vihiniemi on 31/01/2017.
//

#ifndef Time_h
#define Time_h

#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;

class Time{
private:
    int hours, mins, dur;
public:
    Time();
    Time(int hours, int mins);
    void read(string time);
    bool lessThan(Time time);
    Time subtract(Time time);
    void display();
    bool operator==(const Time& time);
    bool operator<(const Time& time);
    friend istream& operator>>(istream& stream, Time &time);
    friend ostream&operator<<(ostream& stream, const Time &time);
    Time operator-(const Time& time);
    Time operator+(const Time& time);
};

#endif /* Time_h */
