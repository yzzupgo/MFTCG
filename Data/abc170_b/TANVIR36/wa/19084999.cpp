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
int a=((4*x-y)/2);
int b=((y-2*x)/2);
if(a>=0 && b>=0 && y>=2*x && y<=4*x){
cout<<"Yes\n";
}
else{
cout<<"No\n";
}
}
