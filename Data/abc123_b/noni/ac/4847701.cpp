#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <climits>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <numeric>
#include <iostream>

using namespace std;

#define FOR(i, a, b)   for(int i = (a); i < (b); ++i)
#define RFOR(i, a, b)  for(int i = (a); i > (b); --i)
#define rep(i, n)      for(int i = 0; i < (n); ++i)
#define all(c)         begin(c), end(c)
#define rall(c)        rbegin(c), rend(c)
#define SZ(a)          ((ll) a.size())

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

int main() {
	int a[5];
  cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
  int tmp=10;
  int sum=0;
  rep(i,5){
    if(a[i]%10==0){
      sum+=a[i];
    }
    else{
      sum+=(a[i]/10+1)*10;
      tmp=min(a[i]%10,tmp);
    }
  }

  cout << (sum-10+tmp);
  return 0;
}
