#include<bits/stdc++.h>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
int sum = 0;
bool flag = false;
for(int i=1;i<=x;i++)
{
sum = i*2 + (x-i)*4;
if(sum==y)
{
cout << "Yes";
flag = true;
break;
}
}
if(!flag)
cout << "No";
return 0;
}
