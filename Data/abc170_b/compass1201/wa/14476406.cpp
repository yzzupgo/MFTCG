#include<iostream>
using namespace std;
int main()
{
int X;
int Y;
cin>>X>>Y;
int max;
int min;
max=X*2;
min=X*4;
if(Y>max || Y<min)
cout<<"No";
else
cout<<"Yes";
return 0;
}
