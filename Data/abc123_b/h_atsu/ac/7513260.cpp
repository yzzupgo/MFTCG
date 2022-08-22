#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <list>
#include <numeric>
#include <stack>
#include <queue>
#include <tuple>
#include <bitset>
#include <map>
#include <math.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)
typedef long long ll;
typedef pair<int,int> P;
const int inf = 1012345678;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

int gcd(int a, int b)
{
  if (a%b==0){
    return(b);
  }
  else{
    return(gcd(b,a%b));
  }
}



int a[6];
int M = 10;
int mod;
int main(){
  rep(i,5){
    cin >> a[i];
    if(a[i]%10 == 0) continue;
    else{
      mod = a[i] % 10 ;
      a[i] = a[i] + 10 - mod;
      M = min(mod,M);
    }
  }
  int time = 0;
  if(M == 10){
    rep(i,5){
      time += a[i];
    }
  }
  else{
    rep(i,5){
      time += a[i];
    }
    time = time + M - 10;
  }
  cout << time << endl;
  return 0;
}
