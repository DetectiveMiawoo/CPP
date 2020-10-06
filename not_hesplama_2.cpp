#include<iostream>
#include <unistd.h>

using namespace std;

int main()
{
    int a;
    usleep(1000000);
    
    cout << " Not girin:" << endl;
    cin >> a;
    usleep(1000000);

    if( a <50 && a >0)
    {
        cout << " F not aldınız" << endl;
    }
    else if( a >=50 && a <70 )
    {
        cout << " D not aldınız" << endl;
    }
    else if( a >=70 && a <90)
    {
        cout << " C not aldınız" << endl;
    }
    else if( a >=90 && a <100)
    {
        cout << " B not aldınız" << endl;
    }
    else if( a ==100)
    {
        cout << " A not aldınız" << endl;
    }
    else
    {
        cout << " Birseyler Yanlıs gibi" << endl;
    }
}