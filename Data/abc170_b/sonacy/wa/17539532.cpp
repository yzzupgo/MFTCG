#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
bool kotae=true;
int turu=0,kame=x;
for(int i=0;i<x;i++){
if(2*turu+4*kame==y){
cout << "Yes" << endl;
kotae=false;
break;
}
turu++;
kame--;
}
if(kotae){cout << "No" << endl;}
}
