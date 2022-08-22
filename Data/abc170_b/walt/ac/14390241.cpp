#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
int x,y;
cin>>x>>y;
for(int i=0; i<=x; i++){
for(int j=i; j<=x; j++){
if((j*4+(x-j)*2)==y){
cout<<"Yes"<<endl;
return 0;
}
}
}
cout<<"No"<<endl;
}
