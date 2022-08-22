#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
int c=0, t=0;
if(x*2==y || x*4==y){
cout<<"YES";
return 0;
}
else if(x*2>y){
cout<<"NO";
return 0;
}
else{
while(c<=x){
c++;
t=x-c;
if(c*2 + t*4 ==y){
cout<<"YES";
return 0;
}
}
}
cout<<"NO";
return 0;
}
