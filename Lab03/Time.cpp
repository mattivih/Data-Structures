#include "Time.h"

Time::Time(){

}

Time::Time(int h, int m){
    hours = h;
    mins = m;
}

void Time::read(string time){
    cout << "Pls input time: " << endl;
    string inputTime;
    cin >> inputTime;
    string token = inputTime.substr(0, inputTime.find(":"));
    hours = stoi(token);
    token = inputTime.erase(0, inputTime.find(":") +1);
    mins = stoi(token);
}

bool Time::lessThan(Time time){
    if(time.hours == hours){
        if(time.mins > mins){
            return true;
        }
    }else if(time.hours > hours){
        return true;
    }else{
        return false;
    }
    return false;
}

Time Time::subtract(Time time){
    time.hours = hours - time.hours;
    time.mins = mins - time.mins;
    if(time.mins < 0){
        time.mins = time.mins + 60;
        time.hours = time.hours - 1;
    }
    return time;
}

void Time::display(){
    cout << hours << ":" << mins << endl;
}

bool Time::operator==(const Time& time){
    if(time.hours == hours && time.mins == mins){
        return true;
    }else{
        return false;
    }
}

bool Time::operator<(const Time& time){
    return lessThan(time);
}


istream& operator>>(istream& stream, Time &time){
    string inputTime;
    stream >> inputTime;
    string h = inputTime.substr(0, inputTime.find(":"));
    time.hours = stoi(h);
    string m = inputTime.erase(0, inputTime.find(":") +1);
    time.mins = stoi(m);

    return stream;
}

ostream&operator<<(ostream& stream, const Time& time){
    stream << time.hours << ":" << time.mins;
    return stream;
}


Time Time::operator-(const Time& time){
    return subtract(time);
}

Time Time::operator+(const Time& time){
    int h = hours + time.hours;
    int m = mins + time.mins;
    if(m > 60){
        m -= 60;
        h++;
    }
    Time total(h, m);
    return total;
}




