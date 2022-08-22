#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y,range;
cin>>x>>y;
range=2+(x-1)*4;
if(range>=y){
if(y%2==0)
cout<<"Yes";
else
cout<<"No";
}
else
cout<<"No";
}
