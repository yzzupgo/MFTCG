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
if(a%2==0){
int kaplumbaga=a/2;
int turna=x-kaplumbaga;
if(turna>=0 && kaplumbaga>=0){
cout << "Yes";
return 0;
}
}
cout << "No";
}
