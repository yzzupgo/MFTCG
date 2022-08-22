#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin>>x>>y;
for(int i=0; i<=x; i++){
for(int j=0; j<=x; j++){
if(i+j==x&&i*2+j*4==y){
cout<<"Yes";
return 0;
}
}
}
cout<<"No";
return 0;
}
