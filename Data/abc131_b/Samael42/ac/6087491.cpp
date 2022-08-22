#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const int N = 1e5+5;
int a[N];
void fileIO()
{
#ifndef ONLINE_JUDGE
freopen("int.txt","r",stdin);
freopen("out.txt","w",stdout);
#endif
}
int main()
{
IOS;
int n,l;
cin >> n >> l;
int temp = 0;
for(int i = 0; i < n; i++)
{
temp += l+i;
}
if(l >= 0)
{
cout << temp - l;
}
else if(l < 0 and l+n-1 >= 0)
{
cout << temp;
}
else
{
cout << temp-n-l+1;
}
return 0;
}
