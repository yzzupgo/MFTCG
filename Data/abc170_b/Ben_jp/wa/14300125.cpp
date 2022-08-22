#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using Vec = vector<int>;
int main() {
int a,b;
cin>>a>>b;
bool x=true;
for(int i=1;i<=a;i++){
if(i*2+4*(a-i)==b){
cout<<"Yes"<<endl;
x=false;
break;
}
}
if(x==true){
cout<<"No"<<endl;
}
}
