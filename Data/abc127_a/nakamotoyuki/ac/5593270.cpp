#include<iostream>
using namespace std;
int main()
{
int x,y;
cin >> x >> y;
if(x < 13 && x > 5)y/=2;
else if(x < 6)y=0;
cout << y << endl;
return 0;
}
