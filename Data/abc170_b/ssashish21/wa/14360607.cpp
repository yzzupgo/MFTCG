#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
int i = 0;
int j = x;
while(x--){
if(((i++ * 4) + (j-- *2)) == y){
cout<<"Yes";
return 0;
}
}
cout<<"No";
return 0;
}
