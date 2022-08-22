#include <bits/stdc++.h>
using namespace std;
int main(){
long long x,y;
cin>>x>>y;
bool abc=false;
for(int i=1;i<30;i++){
if(4*x-2*i==y){
abc=true;
break;
}
}
if(abc){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
}
