/* 
 * File: main.cpp
 * Author: Drake Gerger
 * Purpose: Display a table 
 * Created on October 18, 2017, 9:57 AM
 */

#include <iostream>
using namespace std;

int main() {
 char code;
 int Launch;
 
cout << "This program displays the characters for ASCII codes 0 - 127"<< endl;
cout << "Type Launch to Find Out the ASCII Codes" << endl;
cin >> Launch;

code = 0;
for (int count = 0; count <=127; count++)
{
    if (count % 16 ==0)
        cout<<endl;
    cout << code << " "; code++;
}
return 0;
}

