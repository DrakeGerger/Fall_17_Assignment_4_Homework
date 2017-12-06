
#include <iostream>

using namespace std;

int main(){

    int ranNum;
    int userNum;
    bool Win = false;
    unsigned seed = time(0);
    
    srand(seed);
    ranNum=1+rand()%10;
    
    cout<<"Hello I am C++, I am thinking of a number! What is that number?"<<endl;
    cin>>userNum;
    
    while(!Win)
    {
        if (userNum < ranNum)
        {
            cout<<"That number was to low, try again!"<<endl;
            cin>>userNum;
        }
        else if (userNum > ranNum)
        {
            cout<<"That number was to high, try again!"<<endl;
            cin>>userNum;
        }
        else
        {
            cout<<"Woah you guessed the correct number! Great Job!"<<endl;
            Win=true;
        }
    }
    
    return 0;
}