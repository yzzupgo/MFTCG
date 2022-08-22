#include<iostream>
using namespace std;
int main()
{
int N;
cin >> N;
int ans;
if(N<10)
ans=N;
if(N>=10&&N<100)
ans=9;
if(N>99&&N<1000)
ans=N-100+10;
if(N>999&&N<10000)
ans=909;
if(N>9999&&N<100000)
ans=N-9999+909;
if(N>99999&&N<1000000)
ans=90909;
cout << ans;
return 0;
}
