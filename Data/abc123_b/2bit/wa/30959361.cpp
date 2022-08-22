#include <bits/stdc++.h>
#define rep(i, n) for (long long  i = 0; i < (long long )(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = long long ;
using namespace std;
vector<int> A(5);
vector<pair<int,int>>x;
int ans = 0;
int main(){
  rep(i,5)cin>>A[i];
  sort(all(A));
  rep(i,5){
	if(A[i]%10==0)ans+=A[i];
	else x.push_back(make_pair(10-A[i]%10,i));
  }
  sort(all(x));
  reverse(all(x));
  rep(k,x.size()){
	int i=x[k].second;
	int n=x[k].first;
	cout<<n<<" "<<i<<endl;
	if(k==0)ans+=A[i];
	else{
	  ans+=A[i]+n;
	}
  }
  cout<<ans<<endl;
}
