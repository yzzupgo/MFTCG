#include<bits/stdc++.h>
#include<string>
#include<cmath>
using namespace std;
#define ll long long int
#define ld long double
#define loop(i,n) for (int i = 0; i < n; i++)
#define loops(i,s,n) for (int i = s; i < n; i++)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define sz(x) ((int)(x).size())
#define fi first
#define se second
#define deb(x) cout<< #x << '=' << x <<endl
#define MOD 1000000007
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x , y;
cin>>x>>y;
bool f = 0;
for(int i = 1; i<=100; i++){
if((y - (i*2))%4 == 0){
int a = (y - (i*2))/4;
if(a + i == x){
f = 1;
break;
}
}
}
if(f){
cout<<"Yes\n";
}else{
cout<<"No\n";
}
}
