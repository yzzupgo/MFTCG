#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
int a = (y - 2*x)/2;
if ((y - 4*a)/2 == (x - a)){
cout<<"Yes";
}
else{
cout<<"No";
}
return 0;
}
