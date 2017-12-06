/* 
 * File: main.cpp
 * Author: Drake Gerger
 * Purpose: Calories Burned
 * Created on October 18, 2017, 9:57 AM
 */

#include <iostream>
using namespace std;

int main(){
    
    float calBrnd;
    float calPerMin = 3.6f;
    
    for (int cal = 5; cal <=30; cal+=5)
    {
        calBrnd = cal * calPerMin;
        cout << "You burned " << calBrnd << " calories in " << cal << " minutes" << endl;
    }

return 0;
}