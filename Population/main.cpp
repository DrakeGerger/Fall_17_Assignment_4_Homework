/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on October 18, 2017, 9:57 AM
 */

#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main() {
    float pop, incPop, popPow;
    int nYears;
    
    cout << "Cal the increase in population over time" << endl;
    cout << "Input the pop, percentage yearly increase and "
    << "the number of years" << endl;
    cin>>pop>>incPop>>nYears;
    
    popPow=pop*pow((1+incPop/100), nYears);
    for (int year=0;year<=nYears;year++){
        pop*=(1+incPop/100.0f);
    }
    
    cout << "The result pop in " << nYears << " years =" << pop 
            << " people not pop" << endl;
    cout << "The same result pop in " << nYears << " years =" << popPow
            << " people not pop" << endl;

return 0;
}

