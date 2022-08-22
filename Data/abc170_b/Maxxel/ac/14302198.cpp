#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
for(int i=0;i<=y/2;++i){
if(4*x-2*i==y){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
}
