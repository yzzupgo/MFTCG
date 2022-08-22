#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
if(y%2==1){
cout<<"No"<<endl;
}
else if(2*x<=y && y<=2*2*x){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
}
