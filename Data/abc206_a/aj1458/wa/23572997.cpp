#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define w(t) int t;cin>>t;while(t--)
#define int long long
#define fr(i,a,b) for(int i=a;i<=b;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define pii pair<int,int>
#define vi vector<int>
#define vvi vector<vi>
#define pqi priority_queue<int>
#define pqd priority_queue<int,vi,greater<int>>
#define inf 1e18
#define mod 1000000007
#define PI 3.14159265358979323846264338327950288419716939937510
int32_t main() {
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int n;
cin >> n;
double x = (double)1.08 * n;
x = floor(x);
if(x < 206) {
cout << "Yay!";
}
if(x == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
