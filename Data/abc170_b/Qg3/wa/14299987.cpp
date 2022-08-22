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
For(i, 0, x + 1) {
int j = i * 2 + (x - i) * 3;
if (j == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
