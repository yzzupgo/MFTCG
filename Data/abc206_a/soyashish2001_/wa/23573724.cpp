#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define yes cout<< "Yes"<<endl
#define no cout<< "No"<<endl
#define all(v) (v).begin(),(v).end()
#define r(v) reverse(v,v+n)
#define read(a,n) for(int i=0;i<n;i++)cin>>a[i]
#define print(a,n) for(int i=0;i<n;i++)cout<<a[i]<<" "
#define RUN ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define debug(output) cout<<#output<<"="<<output<<endl
using namespace std;
signed main() {
RUN;
int test = 1, z = 1;
while(test--) {
int n;
cin >> n;
int x = 1.08 * n;
cout << x;
if(x < 206) {
cout << "Yay!";
} else if(x == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
}
