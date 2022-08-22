#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
using ll = long long;
const int MOD = 1000000007;

long long mod(long long val, long long m) {
  long long res = val % m;
  if (res < 0) res += m;
  return res;
}

bool is_prime(long long N) {
    if (N == 1) return false;
    for (long long i = 2; i * i <= N; ++i) {
        if (N % i == 0) return false;
    }
    return true;
}

vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0;
        while (N % a == 0) {
            ++ex;
            N /= a;
        }
        res.push_back({a, ex});
    }
    if (N != 1) res.push_back({N, 1});
    return res;
}
bool is_squrt(int dis){
  for(int i=1;i*i<=dis;i++){
    if(i*i==dis) return true;
  }
  return false; 
}

int main() {
  int sum,ans =133*5;
  vector<int> a(5);
  rep(i,5) cin >> a[i];
  sort(a.begin(),a.end());
  do{
      sum=0;
      for(int i=0;i<5;i++){
          sum+=a[i];
          if(sum%10!=0 && i!=4) sum+=(10-sum%10);
      }
      ans = min(ans,sum);
  } while(next_permutation(a.begin(),a.end()));

  cout << ans << endl;

  return 0;
}
