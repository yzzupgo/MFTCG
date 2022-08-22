#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <list>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
if(a==0&&a==b){
cout<<"No"<<endl;
return 0;
}
if(a*4<b||a*2>b||b%2!=0){
cout<<"No"<<endl;
}else{
cout<<"Yes"<<endl;
}
}
