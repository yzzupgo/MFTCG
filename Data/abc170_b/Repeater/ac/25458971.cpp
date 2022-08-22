#include <bits/stdc++.h>
using namespace std;
int main()
{
int head,leg;
cin>>head>>leg;
if(leg<=head*4&&leg>=head*2&&leg%2==0)
cout<<"Yes";
else
cout<<"No";
return 0;
}
