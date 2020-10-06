// Created by DetectiveMiawoo
#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{

int year;
int year_2;
int age;


cout << " Age Calculator " << endl;
usleep(1000000);

cout << " Enter The Current Year: ";
cin >> year;


if( year == 2020 )
{
cout << " Year of The Chaos XD " << endl;
}

else
{
cout << " Good Year " << endl;
}

usleep(1000000);
cout << " Enter Year of Birth: ";
cin >> year_2;

usleep(1000000);
age = year - year_2;
cout << " Age: " << age << endl;
if( age >= 50)
{
usleep(1000000);
cout << " Hey Oldies " << endl;
}

else
{
usleep(1000000);
cout << " Great Age " << endl;
}
usleep(5000000);
return 0;
}
    