#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
int a1=x,a2=0;
while(a1){
if((a1*2+a2*4)==y){
cout<<"Yes";
return 0;
}
a1--;
a2++;
}
cout<<"No";
}
