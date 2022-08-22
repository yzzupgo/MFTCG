#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<utility>
#include<map>
#include<unordered_map>
#define Debug cout<<"line: "<< __LINE__ <<"Debug"<<endl;
#define Yes cout<<"Yes"<<endl;
#define No cout<<"No"<<endl;
#define MOD 1000000007
using namespace std;
using ll = long long;
using vi = vector<int>;
using vd = vector<double>;
using vl = vector<long long>;
void Main(){
int x,y;
cin>>x>>y;
for(int i=0;i<x;i++){
int foots=2*(x-i)+4*i;
if(foots==y){
Yes
return;
}
}
No
return;
}
int main(){
cin.tie(0);
ios::sync_with_stdio(false);
Main();
return 0;
}
