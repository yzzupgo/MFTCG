#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define pi pair<int,int>
#define vp vector<pi>
#define pb push_back
#define For(i,a,b) for(int i=a;i<b;i++)
#define debug(x) cout<<"DEBUG------> "<<x<<endl
#define endl "\n"
int main() {
int x, y; cin >> x >> y;
if (y >= 2 * x && y <= 4 * x) {
if (y % 2 == 0)
cout << "Yes" << endl;
else
cout << "No" << endl;
}
else
cout << "No" << endl;
return 0;
}
