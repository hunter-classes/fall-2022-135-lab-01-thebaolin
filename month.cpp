/*
Author: Baolin Chang
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Task D. Number of days in a given month
Asks user for a year and a month, and prints the number of days in the month
*/


#include <iostream>

int main() {
  
  int year, month;
  bool leapyear;
  
  std::cout << "Enter a year: ";
  std::cin >> year;
  std::cout << "Enter a month: ";
  std::cin >> month;

  //leapyear or not
  if(year % 4 != 0)
    leapyear = false;
  else if(year % 100 !=0)
    leapyear = true;
  else if(year % 400 != 0)
    leapyear = false;
  else
    leapyear = true;

  //odd numbered months
  if(month % 2 != 0){
    if(month < 8)
      std::cout << "31 days";
    if(month >=8)
      std::cout << "30 days";
  }

  //even numbered months
  if(month % 2 == 0){
    //accounts for february 
    if(month == 2){
      if(leapyear)
        std::cout << "29 days";
      else
        std::cout << "28 days";
    }
    else if(month < 7)
      std::cout << "30 days";
    else if(month >=7)
      std::cout << "31 days";
  }
}