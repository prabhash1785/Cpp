//
//  calculate_fine_by_comparing_book_return_date.cpp
//  MyCPPPlayGround
//
//  Created by Rathore, Prabhash on 5/24/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class date {

private:
    int day, month, year;
    
public:
    date(int day, int month, int year) {
        this -> day = day;
        this -> month = month;
        this -> year = year;
    }
    
    ~date();
    
    void print_date() {
        cout << "Date is: ";
        cout << day << " " << month << " " << year << endl;
    }
    
    int get_day() {
        return day;
    }
    
    int get_month() {
        return this -> month;
    }
    
    int get_year() {
        return this -> year;
    }
};

date::~date() {
}

date parse_date(string &s) {
    
    istringstream stream(s);
    int day, month, year;
    stream >> day >> month >> year;
    
    return date(day, month, year);
}

int calculate_fine(date &actual_date, date &expected_date) {
    
    if(actual_date.get_year() > expected_date.get_year()) {
        return 10000;
    } else if(actual_date.get_year() == expected_date.get_year()) {
        
        if(actual_date.get_month() > expected_date.get_month()) {
            
            return 500 * (actual_date.get_month() - expected_date.get_month());
        } else if(actual_date.get_month() == expected_date.get_month()) {
            
            if(actual_date.get_day() > expected_date.get_day()) {
                
                return 15 * (actual_date.get_day() - expected_date.get_day());
            }
        }
    }
    
    return 0;
}

int main() {
    
    string line1, line2;
    getline(cin, line1);
    getline(cin, line2);
    
    cout << "Actual Return date: " << line1 << endl;
    cout << "Expected Return date:" << line2 << endl;
    
    date actual_date = parse_date(line1);
    date expected_date = parse_date(line2);
    
    int fine = calculate_fine(actual_date, expected_date);
    cout << fine << endl;
}
