#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin>>x>>y;
bool A=false;
for(int i=0;i<=x;i++){
for(int j=0;j<=x;j++){
if(i+j <=x && 2*i+4*j==y){A=true;break;}
}
if(A)break;
}
if(A) cout<<"Yes"<<endl;
else cout<< "No"<<endl;
}
