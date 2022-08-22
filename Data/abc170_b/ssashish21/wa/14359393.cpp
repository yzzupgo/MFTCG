#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
if(y&1){
cout<<"NO";
return 0;
}
for(int i=0 ;i<=x;i++){
int C = i;
int T = x - i;
if(((T * 4) + (C *2)) == y){
cout<<"YES";
return 0;
}
}
cout<<"NO";
return 0;
}
