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
if (x*2>y || x*4<y){
cout<<"No"<<endl;
}else{
cout<<"Yes"<<endl;
}
return 0;
}
