#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin>>x>>y;
for(int i=0;i<=100;i++){
for(int j=0;j<=100;j++){
if(2*i+4*j==y&&i+j==x){
cout<<"Yes"<<endl;
return 0;
}
}
}
cout<<"No"<<endl;
return 0;
}
