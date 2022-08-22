#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
for(int i = 0 ; i <= x; i++){
int C = i;
int T = x - i;
if(((T * 4) + (C * 2)) == y){
cout<<"Yes";
return 0;
}
}
cout<<"No";
return 0;
}
