#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y,z;
cin>>x>>y;
bool c = false;
z=x*4;
if(z==y){
c=true;
}
else{
for (int i = 0; i <x ; i++) {
z-=2;
if(z==y){
c=true;
break;
}
}
}
if(c){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
}
