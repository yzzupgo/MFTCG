#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <iomanip>
#include <limits>
#include <list>
#include <queue>
#include <tuple>
#include <map>
using namespace std;
#define MOD (long long int)(1e9+7)
#define ll long long int
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define reps(i,n) for(int i=1; i<=(int)(n); i++)
#define REP(i,n) for(int i=n-1; i>=0; i--)
#define REPS(i,n) for(int i=n; i>0; i--)
#define INF (int)(1123456789)
#define LINF (long long int)(112345678901234567)
#define chmax(a,b) a = (((a)<(b)) ? (b) : (a))
#define chmin(a,b) a = (((a)>(b)) ? (b) : (a))
#define all(v) v.begin(), v.end()
int main(void){
int N,L;
cin >> N >> L;
int a;
if(N == 2){
if(L<0){
a = L;
}else{
a = L + 1;
}
}else{
if(L<1){
if(N+L<0){
a = N*(N+1)/2 + (L-1)*N - (N+L-1);
}else{
a = N*(N+1)/2 + (L-1)*N;
}
}else{
a = N*(N+1)/2 + (N-1)*(L-1) - 1;
}
}
cout << a << endl;
return 0;
}
