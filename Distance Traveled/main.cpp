/* 
 * File: main.cpp
 * Author: Drake Gerger
 * Purpose: Distance Traveled
 * Created on October 18, 2017, 9:57 AM
 */

#include <iostream>
using namespace std;

int main(){
    
    float distance;
    float speed;
    int time;
    
    cout << "Enter the Speed of the Vehicle: ";
    cin>>speed;
    
    while (speed <= 0)
    {
        cout << "Sorry the Speed has to be more than 0 mph. Try Again" <<endl;
        cout << "Enter the Speed of the Vehicle: ";
        cin >> speed;
    }
    
    cout << "Enter the Hours Traveled: ";
    cin >> time;
    
    while (time < 1)
    {
        cout << "Sorry the Time has to be more than 0. Try Again" <<endl;
        cout << "Enter the Hours Traveled: ";
        cin >> time;
    }
    
    cout << "Hour   Distance Traveled" << endl;
    cout << "-------------------------" << endl;
    
    for (int num = 1; num <= time; num++)
    {
        distance = speed * num;
        cout << " " << num << "     " << distance << " miles" << endl;
    }
    
    
    

return 0;
}