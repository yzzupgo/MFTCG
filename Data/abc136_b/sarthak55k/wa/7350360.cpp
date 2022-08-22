#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k=0;
cin>>n;
if(n<100)
{
k=9;
}
else if(n<1000&&n>=100)
{
k=(n-90);
}
else if(n<10000&&n>=1000)
{
k=909;
}
else if(n<=100000&&n>=10000)
{
k=909+(n-10000);
}
cout<<k;
}
