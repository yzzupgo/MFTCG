#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<set>
#include<map>
#include<queue>
#include<vector>
typedef long long int ll;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define FOR_IN(i, a, b) for(int i = (a); i < (b); i++)
#define BETWEEN(x, a, b) ((x) >= (a) && (x) <= (b))
#define BIT(b, i) (((b) >> (i)) & 1)
#define LOG_F 1
#define LOG(...) if(LOG_F) fprintf(stderr, __VA_ARGS__)

using namespace std;

ll pow(int x, int n){
  return n == 0 ? 1 : x * pow(x, n - 1);
}


/*

 */
int a[5];

int f(int x){
  int b = 10 - x%10;
  return x + (x%10 ? b : 0);
}

int main(){
  int ans=0;
  int m=10;
  REP(i,5){
    cin>>a[i];
    ans+=f(a[i]);
    int b = a[i]%10;
    if(b<m && b>0) m = b;
  }
  ans -= 10 - m;
  cout<<ans<<endl;
  return 0;
}
