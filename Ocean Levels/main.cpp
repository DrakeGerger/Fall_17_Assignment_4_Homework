/* 
 * File: main.cpp
 * Author: Drake Gerger
 * Purpose: Distance Traveled
 * Created on October 18, 2017, 9:57 AM
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist
//Execution begins here
int main (){
//Declare variables
   float level = 0;
   int years = 25;
   
   for (int ocean = 1; ocean <= years; ocean++)
   {
       level += 1.5;
       cout<<"After "<<ocean<<" years the ocean level will rise "<<level<<" millimeters."<<endl;
   }

    return 0;
}



