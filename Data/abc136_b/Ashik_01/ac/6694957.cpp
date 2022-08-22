#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fastest ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main()
{
Fastest
int a;
cin >> a;
if(a >= 1 && a <= 9) cout << a << endl;
else if(a >= 10 && a <= 99) cout << 9 << endl;
else if(a >= 100 && a <= 999) cout << 9 + (a-100+1) << endl;
else if(a >= 1000 && a <= 9999) cout << 9 + 900 << endl;
else if(a >= 10000 && a <= 99999) cout << 9+900+(a-10000+1) << endl;
else cout << 9+900+90000 << endl;
return 0;
}
