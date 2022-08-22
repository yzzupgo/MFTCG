#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<utility>
#include<queue>
#include<deque>
#include<tuple>
#include<stdio.h>
#include<iomanip>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
int x, y;
cin>>x>>y;
rep(i, x+1){
if(2*i+4*(x-i)==y){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
return 0;
}
