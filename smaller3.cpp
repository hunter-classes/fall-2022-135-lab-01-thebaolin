/*
Author: Baolin Chang
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Task B. Find the smaller of three integers
Asks the user to input three integers and prints out the smallest of the three
*/

#include <iostream>

int main() {
  int firstnum, secondnum,thirdnum;
  
  std::cout << "Enter the first number:";
  std::cin>> firstnum;
  std::cout << "Enter the second number:";
  std::cin>> secondnum;
  std::cout << "Enter the third number:";
  std::cin>> thirdnum;

  if(firstnum < secondnum && firstnum < thirdnum)
  std::cout << "The smaller of the three is " << firstnum;
  else if(secondnum < firstnum && secondnum < thirdnum)
  std::cout << "The smaller of the three is " << secondnum;
  else
  std::cout << "The smaller of the three is " << thirdnum;
  }
