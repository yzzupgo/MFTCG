#include<bits/stdc++.h>
using namespace std;
int main(){
int TESTS=1;
while(TESTS--){
int a,b;
cin>>a>>b;
if(b>=2*a && b<=4*a && b%2==0)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
}
