#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<numeric>
using namespace std;
using lint = long long;
#define PI acos(-1)
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
int main(){
int n;cin>>n;
int cnt=0;
for(int i=1;i<=n;i++){
string s=to_string(i);
if(s.size()%2 == 1) cnt++;
}
cout<<cnt<<endl;
return 0;
}
