#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define MAX 10000003
using namespace std;
int main()
{
int n,l,s=0,p,mina;
cin>>n>>l;
int arr[n+5];
for(int i=1;i<=n;i++)
{
arr[i]=l+i-1;
s=s+arr[i];
}
mina=abs(arr[0]);
for(int i=1;i<=n;i++)
{
if(abs(arr[i])<mina)
mina=abs(arr[i]);
}
if(s>=0)
cout << s-mina << endl;
else
cout << s+mina << endl;;
return 0;
}
