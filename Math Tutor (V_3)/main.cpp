/* 
 * File: main.cpp
 * Author: Drake Gerger
 * Purpose: Math Tutor Version 3
 * Created on October 18, 2017, 9:57 AM
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>     //For the power function
#include <iomanip>   //Formatting Library
#include <cstdlib>   //Random Number Library
#include <ctime>     //Set the Random Seed with Time
using namespace std; //Name-space under which system libraries exist

//Execution begins here
int main (){
//Declare variables
    int choice;
    unsigned short op1,op2,op3,op4,op5,op6,op7,op8,stuAns,result;
//Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
//Initialize variables
    op1=rand()%900+100;//[100-999]  3 Digit Random Number
    op2=rand()%900+100;//[100-999]  3 Digit Random Number
    op3=rand()%900+500;//[100-999]  3 Digit Random Number
    op4=rand()%499+100;//[100-999]  3 Digit Random Number
    op5=rand()%24+0;//[0-12]  3 Digit Random Number
    op6=rand()%12+0;//[0-100]  3 Digit Random Number
    op7=rand()%12+0;//[100-999]  3 Digit Random Number
    op8=rand()%100+0;//[100-999]  3 Digit Random Number
    
    do{
      
        // Display the menu
        cout<<"Welcome to the Math Tutor Menu"<<endl;
        cout<<"1.Addition Help"<<endl;
        cout<<"2.Subtraction Help"<<endl;
        cout<<"3.Multiplication Help"<<endl;
        cout<<"4.Division Help"<<endl;
        cout<<"5.Quit Program"<<endl;
        cin>> choice;
        
        switch (choice){
            case 1:{
                cout<<"Welcome to Addition Help"<<endl;
                cout<<"Type the answer"<<endl;
                cout<<setw(6)<<op1<<endl;
                cout<<"+"<<setw(5)<<op2<<endl;
                cout<<"------"<<endl;
                cin>>stuAns;
                //Calculate the result
                result=op1+op2;
                //Output the result
                cout<<"The result = "<<result<<endl;
                cout<<((result==stuAns)?"Correct":"Incorrect")<<endl;
                break;
            }

            case 2:{
                cout<<"Welcome to Subtraction Help"<<endl;
                cout<<"Type the answer"<<endl;
                cout<<setw(6)<<op3<<endl;
                cout<<"-"<<setw(5)<<op4<<endl;
                cout<<"-------"<<endl;
                cin>>stuAns;
                //Calculate the result
                result=op3-op4;
                //Output the result
                cout<<"The result = "<<result<<endl;
                cout<<((result==stuAns)?"Correct":"Incorrect")<<endl;
                break;
            }

            case 3:{
                cout<<"Welcome to Multiplication Help"<<endl;
                cout<<"Type the answer"<<endl;
                cout<<setw(6)<<op5<<endl;
                cout<<"x"<<setw(5)<<op6<<endl;
                cout<<"------"<<endl;
                cin>>stuAns;
                //Calculate the result
                result=op5*op6;
                //Output the result
                cout<<"The result = "<<result<<endl;
                cout<<((result==stuAns)?"Correct":"Incorrect")<<endl;
                break;
            }

            case 4:{
                cout<<"Welcome to Division Help"<<endl;
                cout<<"Type the answer"<<endl;
                cout<<setw(6)<<op7<<endl;
                cout<<"÷"<<setw(5)<<op8<<endl;
                cout<<"------"<<endl;
                cin>>stuAns;
                //Calculate the result
                result=op7/op8;
                //Output the result
                cout<<"The result = "<<result<<endl;
                cout<<((result==stuAns)?"Correct":"Incorrect")<<endl;
                break;
            }
            default:{
                cout<<"Exiting Program!"<<endl;
            }
        }
    }while(choice>0&&choice<5);
    
    
    return 0;
}