#include "Time.hpp"

int Time::n_time = 0;

Time::Time(){
    this->hour = 0;
    this->minute = 0;
    this->second = 0;
    n_time++;
}

Time::Time(int h, int m, int s){
    this->hour = h;
    this->minute = m;
    this->second = s;
    n_time++;
}

Time::Time(const Time& Time){
    this->hour = Time.hour;
    this->minute = Time.minute;
    this->second = Time.second;
    n_time++;
}

void Time::setHour(int h){
    this->hour = h;
}

void Time::setMinute(int m){
    this->minute = m;
}

void Time::setSecond(int s){
    this->minute = s;
}

int Time::getHour() const{
    return this->hour;
}

int Time::getMinute() const{
    return this->minute;
}

int Time::getSecond() const{
    return this->second;
}

int Time::countTimeInstance(){
    return n_time;
}

int Time::convertToSecond() const{
    return this->hour * 3600 + this->minute * 60 + this->second;
}

void Time::printTime(){
    if (this->hour < 10) {
        cout << "0" << this->hour << ":";
    } else {
        cout << this->hour << ":";
    }
    if (this->minute < 10){
        cout << "0" << this->minute << ":";
    } else {
        cout << this->minute << ":";
    }
    if (this->second < 10){
        cout << "0" << this->second << endl;;
    } else {
        cout << this->second << endl;
    }
}

void Time::addTime(const Time& t){
    int newTime = this->convertToSecond() + t.convertToSecond();
    int newHour = (newTime / 3600) % 24;
    newTime -= newHour * 3600;
    int newMinute = (newTime / 60) % 60;
    newTime -= newMinute * 60;
    int newSeconds = newMinute % 60;
    this->setHour(newHour);
    this->setMinute(newMinute);
    this->setSecond(newSeconds);
}

void Time::decreaseTime(const Time& t){
    if (this->laterThan(t)){
        int newTime = this->convertToSecond() - t.convertToSecond();
        int newHour = (newTime / 3600) % 24;
        newTime -= newHour * 3600;
        int newMinute = (newTime / 60) % 60;
        newTime -= newMinute * 60;
        int newSeconds = newMinute % 60;
        this->setHour(newHour);
        this->setMinute(newMinute);
        this->setSecond(newSeconds);
    }
}

bool Time::earlierThan(const Time& t){
    return this->convertToSecond() < t.convertToSecond();
}

bool Time::laterThan(const Time &t){
    return this->convertToSecond() > t.convertToSecond();
}

