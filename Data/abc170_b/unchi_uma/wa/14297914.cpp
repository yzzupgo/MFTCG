#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int dy[4]={1,0,-1,0};
int dx[4]={0,1,0,-1};
vector<vector<int>> graph;
bool sort_sec(const pair<int,int> &a,const pair<int,int> &b){
if(a.second<b.second){
return true;
}
return false;
}
void swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
}
int main(void){
int X,Y;
cin>>X>>Y;
bool flag=false;
for(int i=0;i<=X;i++){
for(int j=X-i;j>=0;j--){
if(2*i+4*j==Y){
flag=true;
}
}
}
if(flag){
cout<<"Yes"<<endl;
}else{
cout<<"No"<<endl;
}
return 0;
}
