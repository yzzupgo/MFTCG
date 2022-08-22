#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define int long long
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0)
#define modulo 1000000007
#define modulo2 998244353
using namespace std;
int32_t main(){
fastio();
int x,y;
cin >> x >> y;
int a=y-2*x;
if(a>=0 && a%2==0){
cout << "Yes";
}
else cout << "No";
}
