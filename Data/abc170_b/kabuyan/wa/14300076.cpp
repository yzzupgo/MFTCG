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
while(x>0&&y>0){
if(y>4) y-=4;
else y-=2;
x--;
}
if(y==0&&x==0){
cout<<"Yes"<<endl;
}else{
cout<<"No"<<endl;
}
}
