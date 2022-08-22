#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
int a1=x;
while(a1){
if((a1*2+(x-a1)*4)==y){
cout<<"Yes";
return 0;
}
a1--;
}
cout<<"No";
}
