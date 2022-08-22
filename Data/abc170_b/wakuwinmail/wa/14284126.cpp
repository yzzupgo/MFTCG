#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
int x,y;
cin>>x>>y;
for(int i = 0;i < x+1;++i) {
if(2*i+4*(x-i)==y){
cout<<"No"<<endl;
return 0;
}
}
cout<<"Yes"<<endl;
return 0;
}
