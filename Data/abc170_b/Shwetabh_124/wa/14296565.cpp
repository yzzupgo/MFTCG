#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin>>x>>y;
if((y-2*x)%2==0 && (4*x-y)%2==0 && y>=2*x && 4*x>=y){
cout<<"YES";
}
else{
cout<<"NO";
}
return 0;
}
