#include "time.h"

Time::Time() : hour(new int(0)), minute(new int(0)), second(new int(0)) {}

Time::Time(int hour, int minute, int second) : hour(new int(hour)), minute(new int(minute)), second(new int(second)) {}

Time::Time(const Time& other) : hour(new int(*other.hour)), minute(new int(*other.minute)), second(new int(*other.second)) {}

Time::~Time() {
    delete hour;
    delete minute;
    delete second;
}

Time& Time::operator=(const Time& other) {
    if (this != &other) {
        *hour = *other.hour;
        *minute = *other.minute;
        *second = *other.second;
    }
    return *this;
}

Time Time::operator+(const Time& other) const {
    int sum_hour = *hour + *other.hour;
    int sum_minute = *minute + *other.minute;
    int sum_second = *second + *other.second;
    if (sum_second >= 60) {
        sum_minute += 1;
        sum_second -= 60;
        if (sum_minute >= 60) {
            sum_hour += 1;
            sum_minute -= 60;
        }
    }
    return Time(sum_hour, sum_minute, sum_second);
}

Time Time::operator-(const Time& other) const {
    int totalsec1 = *second + (*minute * 60) + (*hour * 3600);
    int totalsec2 = *other.second + (*other.minute * 60) + (*other.hour * 3600);
    int difff_second = totalsec1 - totalsec2;




    int diff_hour = difff_second / 3600;
    int diff_seconds = difff_second % 3600;
    int diff_minutes = diff_seconds / 60;
    diff_seconds = diff_seconds % 60;


    return Time(diff_hour, diff_minutes, diff_seconds);
}

int Time::minu(const Time& t)
{
    int h = abs(*hour);
    int m = abs(*minute);
    int s = abs(*second);
    int minutes = h * 60 + m;
    if (s > 0) {
        minutes = minutes + 1;
    }
    return minutes;
}


bool Time::operator==(const Time& other) const {
    return (*hour == *other.hour) && (*minute == *other.minute) && (*second == *other.second);
}

bool Time::operator!=(const Time& other) const {
    return !(*this == other);
}

bool Time::operator<(const Time& other) const {
    if (*hour < *other.hour) {
        return true;
    }
    else if (*hour == *other.hour) {
        return *minute < *other.minute;
    }
    else if (*minute == *other.minute) {
        return *second < *other.second;
    }
    return false;
}

bool Time::operator>(const Time& other) const {
    return !(*this < other) && (*this != other);
}

std::ostream& operator<<(std::ostream& os, const Time& time) {
    if ((*time.hour >= 0) && ((*time.second < 0) || (*time.minute < 0))) {
        os << "-" << *time.hour << " часов " << abs(*time.minute) << " минут " << abs(*time.second) << " секунд ";
    }
    if ((*time.hour < 0) && ((*time.second < 0) || (*time.minute < 0))) {
        os << *time.hour << " часов " << abs(*time.minute) << " минут " << abs(*time.second) << " секунд ";
    }
    else {
        os << *time.hour << " часов " << *time.minute << " минут " << *time.second << " секунд ";
    }
    return os;
}

std::istream& operator>>(std::istream& is, Time& time) {

    is >> *time.hour >> *time.minute >> *time.second;
    return is;
}