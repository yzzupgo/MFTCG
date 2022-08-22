#include<bits/stdc++.h>
using namespace std;
int main(){
int count;
int legs;
cin>>count;
cin>>legs;
if(legs%2==1){
cout<<"No";
return 0;
}
for(int i=0;i<=count;++i){
if((i*4)+((count-i)*2)==legs){
cout<<"YES";
return 0;
}
}
cout<<"NO";
return 0;
}
