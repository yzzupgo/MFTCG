#include<bits/stdc++.h>
using namespace std;
int main(){
cin.tie(0);
ios_base::sync_with_stdio(false);
int a,b;
cin>>a>>b;
if((b/a>=2 && b/a<4 && (2*a-b)%2==0 && (b)%2==0)||(b==4*a)){
cout<<"Yes"<<endl;
}else{
cout<<"No"<<endl;
}
}
