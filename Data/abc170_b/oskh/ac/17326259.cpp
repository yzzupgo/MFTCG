#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,n) for (int i = 1; i <= (int)(n); i++)
int main()
{
int x,y;
cin >> x >> y;
for(int i = 0; i <= x; i++)
{
for(int j = 0; j <= x;j++)
{
if(i+j == x && 4*i+2*j == y)
{
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
