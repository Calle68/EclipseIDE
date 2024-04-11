/*
 * main.cpp
 *
 *  Created on: 17.02.2024
 *  Author: Fehlhaber
 */

#include <iostream>
using namespace std;

int main() {

     if (__cplusplus == 202002L)
                 std::cout << "Your running C++20" << endl;
              else if    (__cplusplus == 201703L)
                  std::cout << "Your running C++17" << endl;
              else if (__cplusplus == 201402L)
                  std::cout << "Your running C++14" << endl;
              else if (__cplusplus == 201103L)
                  std::cout << "Your running C++11" << endl;
              else if (__cplusplus == 199711L)
                  std::cout << "Your running C++98" << endl;
              else
                  std::cout << "pre-standard C++" << endl;

    return 0;
}
