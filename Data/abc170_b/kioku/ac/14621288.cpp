#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
int x;
int y;
int result;
cin>>x>>y;
if(y>=2*x && y<=4*x && y%2==0){
cout<<"Yes"<<endl;
}else cout<<"No"<<endl;
return 0;
}
