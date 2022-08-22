#include<bits/stdc++.h>
using namespace std;
int main(){
int X,Y,a,count=0;
cin>>X>>Y;
for(int a=0; a<=X; a++){
int b=X-a;
if(2*a+4*b==Y){
count++;
}
}
if(count>0){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
}
