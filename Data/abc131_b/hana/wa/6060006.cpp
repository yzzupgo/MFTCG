#include<iostream>
#include<iomanip>
#include<math.h>
#include<algorithm>
#include<utility>
#include<functional>
#include<queue>
#include<string.h>
#include<string>
#include<set>
#include<map>
#include<vector>
using namespace std;
typedef long long LL;
typedef pair<int, int> P;
const int MOD = 1000000007;
LL N,M,S,L;
int a,b,c,d;
string s;
int main(){
cin>>N>>L;
LL sum=0;
LL minA=N+L;
for(int i=1;i<=N;i++){
minA=min(minA,abs(L+i-1));
sum+=L+i-1;
}
cout<<sum-minA;
return 0;
}
