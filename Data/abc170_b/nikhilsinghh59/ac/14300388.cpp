#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define watch(x) cout << (#x) << " is " << (x) << endl
#define endl "\n"
#define PB push_back
#define F first
#define S second
#define all(c) (c).begin(),(c).end()
const int M = 1e9+7;
int main()
{
ll x , y;
cin >> x>> y;
bool ans = false;
for(int i=0;i<=x ; i++){
if(y == 2*i + (x - i)*4) {
ans = true;
break;
}
}
if(ans) {
cout << "Yes\n";
}
else {
cout << "No\n";
}
return 0;
}
