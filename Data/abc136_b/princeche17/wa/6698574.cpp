#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
if(n>0 && n<10) cout<<"9";
if(n>9 && n<100) cout<<"9";
if(n>99 && n<1000) cout<<(n-100+1+9);
if(n>999 && n<10000) cout<<"909";
if(n>9999 && n<100000) cout<<(n-10000+1+9+900);
if(n==100000) cout<<"90909";
}
