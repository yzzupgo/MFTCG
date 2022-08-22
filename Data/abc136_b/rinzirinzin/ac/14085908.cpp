#include <bits/stdc++.h>
using namespace std;
int main()
{
int A;
cin >> A;
if(A<=9)
{
cout << A <<endl;
}
if(A>=10&&A<100)
{
cout << 9 <<endl;
}
if(A>=100&&A<1000)
{
cout << 9+A-99 <<endl;
}
if(A>=1000&&A<10000)
{
cout << 909 <<endl;
}
if(A>=10000&&A<100000)
{
cout << 909+A-9999 <<endl;
}
if(A==100000)
{
cout << 90909 <<endl;
}
}
