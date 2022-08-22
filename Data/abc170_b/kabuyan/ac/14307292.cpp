#include<iostream>
#include<numeric>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<map>
#include<utility>
#include<cmath>
#include<tuple>
#include<string>
#include<bitset>
#include<set>
#include<queue>
#include<stack>
#include<cstdio>
using namespace std;
typedef long long ll;
int main(){
int x,y;
cin>>x>>y;
if(y%2){
cout<<"No"<<endl;
return 0;
}
for(int i=0;i<=x;i++){
if(y==i*2+(x-i)*4){
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
}
