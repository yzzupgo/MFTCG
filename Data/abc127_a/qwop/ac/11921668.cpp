#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
if(a>12){
cout<<b<<endl;
}
else if(a<=12&&5<a){
cout<<b/2<<endl;
}
else{
cout<<0<<endl;
}
return 0;
}
