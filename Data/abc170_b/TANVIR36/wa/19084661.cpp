#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int N=1e5+10;
#define pii pair<int,int>
#define MOD 1000000007
#define PI acos(-1.0)
int main(){
int x,y;
cin>>x>>y;
while(x--){
y-=2;
}
if(y==0 || y==2 || y==4){
cout<<"Yes\n";
}
else cout<<"No\n";
}
