#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<iostream>
#include<queue>
#include<vector>
#include <bitset>
using namespace std;
#define INF 110000000000
#define MAX 100000
typedef long long ll;
typedef pair<ll,int> P;
bool check(int x){
int count=1;
while(true){
x/=10;
if(x==0) break;
else count++;
}
return count%2;
}
int main(){
int N,ans=0;
cin>>N;
for(int i=0;i<=N;i++){
if(check(i)) ans++;
}
cout<<ans<<endl;
}
