#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,f=0,f2=0,f1=0,f3=0;
cin >> n;
for(int i = 1;i <= n;i++)
{
if(i <= 9)
f++;
else if(i>=100&& i <=999)
f1++;
else if(i >10000 && i < 100000)
f2++;
else if(i > 100000 && i < 1000000)
f3++;
}
cout << f+f1+f2+f3;
}
