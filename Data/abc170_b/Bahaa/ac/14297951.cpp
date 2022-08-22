#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mk make_pair
#define ff first
#define ss second
typedef long long ll;
int main(){ ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int x,y;
cin>>x>>y;
while(y>1){
if(y%4==0&&y/4==x){
cout<<"Yes";
return 0;
}
y-=2;
x--;
}
if(x==0&&y==0)cout<<"Yes";
else cout<<"No";
return 0;
}
