/*
Author: Baolin (Paulina) Chang
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Task C. A leap year or a common year
Asks user to input a year, and detrermines if the input is a leap year or common year
*/

#include <iostream>

int main() {
  
  int year;
  std::cout << "Enter a year: ";
  std::cin >> year;

  if(year % 4 != 0)
    std::cout << "Common Year";
  else if(year % 100 !=0)
    std::cout << "Leap Year";
  else if(year % 400 != 0)
    std::cout << "Common Year";
  else
    std::cout << "Leap Year";

  return 0;
}