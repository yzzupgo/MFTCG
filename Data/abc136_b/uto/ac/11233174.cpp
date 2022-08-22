#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<stack>
#include<cstdio>
using namespace std;
int main(){
int n;cin>>n;
int max=9;
int count=0;
for(int i=1;i<=6;i++){
if(i%2==1&&max<n){
count+=((i==1)?max:9*(int)pow(10,i-1));
}
if(max>=n){
if(i%2==1) count+=((i==1)?n:n-(int)pow(10,i-1)+1);
break;
}
max=max*10+9;
}
cout<<count<<endl;
}
