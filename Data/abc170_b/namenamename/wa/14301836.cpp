#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)
#define all(v) v.begin(), v.end()
int main(){
int x,y;
cin>>x>>y;
rep(i,x+1){
if(2*i+4*(x-i)==y){
cout<<"YES"<<endl;
return 0;
}
}
cout<<"NO"<<endl;
}
