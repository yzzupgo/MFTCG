#include "bits/stdc++.h"
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int x,y;
cin >> x >> y;
for(int i=0;i<=x;i++){
if(i*2+(x-i)*4==y){
cout<<"Yes"<<endl;
break;
}
}
cout<<"No"<<endl;
}
