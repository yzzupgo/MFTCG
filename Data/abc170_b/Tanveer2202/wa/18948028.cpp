#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
ll x,y;
cin >> x >> y;
if((y%2) || ((pow(2,x) < y)&&(pow(4,x) < y)))
cout << "No" << endl;
else
cout << "Yes" << endl;
return 0;
}
