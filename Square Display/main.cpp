/* 
 * File: main.cpp
 * Author: Drake Gerger
 * Purpose: Distance Traveled
 * Created on October 18, 2017, 9:57 AM
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>
#include <ctime>

using namespace std; //Name-space under which system libraries exist

//Execution begins here
int main (){

//Declare variables
    int square = 0;

    cout<<"Enter a Digit from 1 to 15"<<endl;
    cin>>square;

    for (int h = 1;h<=square;h++)
    {
        for (int v=1;v<=square;v++)
        {
            cout<<"X";
        }
        cout<<endl;
    
    }
    return 0;
}



