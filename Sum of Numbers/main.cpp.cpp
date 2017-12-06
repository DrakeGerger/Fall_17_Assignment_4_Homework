/* 
 * File: main.cpp
 * Author: Drake Gerger
 * Purpose: Sum of Numbers
 * Created on October 18, 2017, 9:57 AM
 */

#include <iostream>
using namespace std;

int main() {

int num, sum = 0;

cout << "Enter the Number this Program Counts too: ";
cin >> num;

for (int number = 1; number <=num; number++)
cout << number << endl;

return 0;
}