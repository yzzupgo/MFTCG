#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<map>
#include<tuple>
#define MOD 1000000007
#define rep(i,k,N) for(int i=k;i<N;i++)
#define MP make_pair
#define MT make_tuple
#define PB push_back
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int main(){
int N,L;
cin>>N>>L;
long long sum=0;
rep(i,1,N+1){
sum+=(L+i-1);
}
if(L>0){
cout<<sum-L;
}
else if(N+L-1>=0){
cout<<sum;
}
else{
cout<<sum-(N+L-1);
}
return 0;
}
