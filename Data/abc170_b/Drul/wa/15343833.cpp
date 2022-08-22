#include<bits/stdc++.h>
using namespace std;
int main(){
int n, value;
cin>>n>>value;
if(value > n*4 || value&1 ){
cout<<"No\n";
}
else{
cout<<"Yes\n";
}
return 0;
}
