// Created by DetectiveMiawoo

#include<iostream>
#include <unistd.h> // delay

using namespace std;

int main()
{
    int a;
    usleep(1000000);// 1 sec.
    
    cout << " enter a grade:";
    cin >> a;
    usleep(1000000);// 1 sec.

    if( a <50 && a >=0)
    {
        cout << " you got F" << endl;
    }
    else if( a >=50 && a <70 )
    {
        cout << " you got C" << endl;
    }
    else if( a >=70 && a <90)
    {
        cout << " you got B" << endl;
    }
    else if( a >=90 && a <=100)
    {
        cout << " you got A" << endl;
    }
    else
    {
        cout << " Something went wrong :( " << endl;
    }
    usleep(5000000);// 5 sec.
}