#include<bits/stdc++.h>;
using namespace std;
typedef long long ll;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
int a[5];
int main(){
#ifdef LOCAL
freopen("in.txt", "r", stdin);
#else
fastIO;
#endif
int x,y;
cin>>x>>y;
for(int i=0;i<x+1;i++){
int b = x-i;
if(i*2 + b*4 ==y){
cout<<"yes"<<endl;
break;
}
}
}
