// Created by DetectiveMiawoo
#include<iostream>
using namespace std;

int main()
{
    
    int x;
    int y;

    bool equal = false;

    cout << " First Number: ";
    cin >> x;

    cout << " Second Number: ";
    cin >> y;

    if(x == y)
    {
        equal = true;
        cout << x <<" is equal with "<< y <<endl;
    }

    else
        cout << x << " isn't equal with "<< y << endl;

    if(x > y) {

        if(equal == true)
            cout << x <<" is more little than "<< y << endl;

        else
            cout << x <<" is more bigger than "<< y <<  endl;

    }

}