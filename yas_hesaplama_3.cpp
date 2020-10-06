#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{

int yil;
int yil_2;
int yil_3;


cout << " yas hesaplama " << endl;
usleep(1000000);

cout << " guncel yili girin: ";
cin >> yil;


if( yil == 2020 )
{
cout << " kaos yili" << endl;
}

else
{
cout << " guzel yıl" << endl;
}

usleep(1000000);
cout << " dogum yilinizi girin: ";
cin >> yil_2;

usleep(1000000);
yil_3 = yil - yil_2;
cout << yil_3 << " yasindasiniz " << endl;
if( yil_3 >= 50)
{
usleep(1000000);
cout << " baya yaslısın sen ya" << endl;
}

else
{
usleep(1000000);
cout << " guzel yas" << endl;
}
usleep(5000000);
return 0;
}
    