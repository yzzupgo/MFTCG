#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
int X,Y;
cin>>X>>Y;
int flg=0;
for(int i=0;i<=X;i++){
if(i*2+(X-i)*4==Y){
cout<<"Yes"<<endl;
flg=1;
}
}
if(!flg)cout<<"No"<<endl;
return 0;
}
