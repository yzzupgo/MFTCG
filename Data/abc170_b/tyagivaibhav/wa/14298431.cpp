#include<bits/stdc++.h>
#include <cmath>
#define ll long long
#define ull unsigned long long
using namespace std;
vector<vector<int>> g;
vector<int> len;
vector<vector<int>> col(2);
vector<int> ans;
vector<int> s;
void yn(bool a){
if(a){
cout<<"YES"<<endl;
}
else{
cout<<"NO"<<endl;
}
}
int main(){
int n,m;
cin>>n>>m;
if(m%2){
yn(0);
}else{
if(m>=n*2&&m<=n*4){
yn(1);
}else{
yn(0);
}
}
}
