#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y,max_range,min_range;
cin>>x>>y;
max_range=x*4;
min_range=x*2;
if(y<=max_range && y>=min_range){
if(y%2==0)
cout<<"Yes";
else
cout<<"No";
}
else
cout<<"No";
}
