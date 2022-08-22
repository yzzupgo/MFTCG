#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<numeric>
#include<map>
#include<set>
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
int main(){
int x,y;cin>>x>>y;
bool ans=false;
for(int i=1;i<=x;i++){
int j=x-i;
if(i*2+j*4==y)ans=true;
}
cout<<(ans?"Yes":"No")<<endl;
return 0;
}
