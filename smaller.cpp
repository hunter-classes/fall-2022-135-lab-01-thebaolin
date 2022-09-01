/*
Author: Baolin Chang
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Task A. Find the smaller of three integers
Asks the user to input three integers and prints out the smallest of the three
*/

#include <iostream>

int main() {
  int firstnum, secondnum;
  
  std::cout << "Enter the first number:";
  std::cin>> firstnum;
  std::cout << "Enter the second number:";
  std::cin>> secondnum;

  if(firstnum < secondnum)
    std::cout << "\nThe smaller of the two numbers is " << firstnum;
  else
    std::cout << "\nThe smaller of the two numbers is " << secondnum;
}