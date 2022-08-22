#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin >> x >> y;
bool kind = true;
for(int i=0;i<=x;i++){
for(int j=0;j<=x-i;j++){
if(y==2*i+4*j){
kind=false;
cout << "Yes" << endl;
break;
}
}
if(kind==false)break;
}
if(kind)cout << "No" << endl;
}
