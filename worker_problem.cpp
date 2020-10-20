#include<iostream>
using namespace std;

int main()
{

    int worker,day;

    cout << "how many workers will work on this job: ";
    cin >> worker;

    cout << " a worker how long finish this job:";
    cin >> day;

    float day2 = (float)day/worker;

    if (day2 < 1)
        cout << " this job will finish in " << (float)day2 <<" hours.";
    
    else
        cout << " this job will finish in " << day2 <<" days.";


}