#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
#include <vector>
#include <unordered_map>
#include <map>
#include <cmath>
#define rep(i,n) for(int i = 0; i < (n); i++)
#define ALL(x) (x).begin(),(x).end()
#define pb push_back
#define SZ(x) ((int)(x).size())
typedef long long ll;
using namespace std;
int main(){
int N,L;
int gap;
int a;
cin >> N >> L;
vector<int> ans(N);
int sum = (L-1)*N + N*(N+1)/2;
rep(i,N){
gap = L+i;
if(gap >= 0) a = 1;
else a = -1;
ans[i] = abs(gap);
}
cout << sum-a*(*min_element(ALL(ans))) << endl;
}
