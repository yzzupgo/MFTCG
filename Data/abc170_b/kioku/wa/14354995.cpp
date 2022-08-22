#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
int x;
int y;
int result;
cin>>x>>y;
result = 4*x - y;
if(result >=0 && result %2==0 && y>x){
if(x!=y) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}else cout<<"No"<<endl;
return 0;
}
