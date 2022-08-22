#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
const int N=2e5+10;
int judge(int n)
{
if(n/100000) return 6;
if(n/10000) return 5;
if(n/1000) return 4;
if(n/100) return 3;
if(n/10) return 2;
return 1;
}
int init[10];
int main()
{
int n;
init[2]=9; init[4]=909; init[6]=90909;
while(cin>>n)
{
int len=judge(n);
if(len==1)
cout<<n<<endl;
if(len==2)
cout<<init[2]<<endl;
if(len==3)
cout<<init[2]+n-100+1<<endl;
if(len==4)
cout<<init[4]<<endl;
if(len==5)
cout<<init[4]+n-10000+1<<endl;
if(len==6)
cout<<init[6]<<endl;
}
return 0;
}
