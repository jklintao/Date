#include <iostream>
#include <string>

using namespace std;

class Date{
public:
    void defaultDate(){
        month = 0;
        day = 0;
        year = 0;
    }
    bool setMonth(int m){
        if(m > 0 && m <= MAX_MONTH){
            month = m;
            return true;
        }
        else{
            return false;
        }
    }
    bool setDay(int d){
        switch (month) {
            case 1:{
                if(d > 0 && d <= 31){
                    day = d;
                    return true;
                }
            }
            case 2:{
                if(d > 0 && d <= 28){
                    day = d;
                    return true;
                }
            }
            case 3:{
                if(d > 0 && d <= 31){
                    day = d;
                    return true;
                }
            }
            case 4:{
                if(d > 0 && d <= 30){
                    day = d;
                    return true;
                }
            }
            case 5:{
                if(d > 0 && d <= 31){
                    day = d;
                    return true;
                }
            }
            case 6:{
                if(d > 0 && d <= 30){
                    day = d;
                    return true;
                }
            }
            case 7:{
                if(d > 0 && d <= 31){
                    day = d;
                    return true;
                }
            }
            case 8:{
                if(d > 0 && d <= 31){
                    day = d;
                    return true;
                }
            }
            case 9:{
                if(d > 0 && d <= 30){
                    day = d;
                    return true;
                }
            }
            case 10:{
                if(d > 0 && d <= 31){
                    day = d;
                    return true;
                }
            }
            case 11:{
                if(d > 0 && d <= 30){
                    day = d;
                    return true;
                }
            }
            case 12:{
                if(d > 0 && d <= 31){
                    day = d;
                    return true;
                }
            }
            default:{
                return false;
            }
        }
    }
    bool setYear(int y){
        if(y > 0 && y <= MAX_YEAR){
            year = y;
            return true;
        }
        else{
            return false;
        }
    }

    void setDate(int m, int d, int y){
        setMonth(m);
        setDay(d);
        setYear(y);
    }
    void tomorrow(){
        if(month == MAX_MONTH && day == 31){
            year++;
            month = 1;
            day = 1;
            return;
        }
        if(day == 31){
            month++;
            day = 1;
            return;
        }
        if(month == 2 && day == 28){
            month++;
            day = 1;
            return;
        }
        if((month == 4 || month == 6 || month == 9 || month == 11) && day == 30){
            month++;
            day = 1;
            return;
        }
        else{
            day++;
            return;
        }

    }

    int getMonth(){
        return month;
    }
    int getDay(){
        return day;
    }
    int getYear(){
        return year;
    }
    void printDate(){
        cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
    }

private:
    int month;
    int day;
    int year;
    int MAX_MONTH = 12;
    int MAX_YEAR = 9999;
};

int main(){
    Date today;
    today.setDate(11,7,2021);
    today.printDate();
    today.tomorrow();
    today.printDate();
}