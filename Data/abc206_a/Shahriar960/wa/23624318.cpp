#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pll pair<ll,ll>
#define v vector<ll>
#define st stack<ll>
#define pq priority_queue <int>
#define q queue<ll>
#define mod 1000000005
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0), cout.tie(0);
ll n;
cin >> n;
double ans = (1.08 * n);
if(ans < 206) {
cout << "Yay!" << endl;
} else if(ans == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
