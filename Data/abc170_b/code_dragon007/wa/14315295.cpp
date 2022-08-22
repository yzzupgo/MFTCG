#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y,range,min_range;
cin>>x>>y;
range=2+(x-1)*4;
min_range=(x-1)*2+4;
if(range>=y && min_range>=y){
if(y%2==0)
cout<<"Yes";
else
cout<<"No";
}
else
cout<<"No";
}
