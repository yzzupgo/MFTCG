#include<bits/stdc++.h>
using namespace std;
int original;
int maxx = 1000000007;
int n;
int l;
int absd(int i)
{
int now = original - i - l;
return abs(original - now);
}
int main()
{
cin>>n>>l;
original = (n*(n-1))/2 + n*l;
int low=0,h=n-1;
int ind=maxx;
while((h-low)>=3)
{
int m1 = low +(h-low)/3;
int m2 = h -(h-low)/3;
int f1 = absd(m1);
int f2 = absd(m2);
if(f1 < f2)
h = m2;
else
low = m1;
}
int minans=maxx;
for(int i=low;i<=h;i++)
{
if(minans > absd(i))
ind = i;
}
int fin = original - ind;
cout<<fin;
return 0;
}
