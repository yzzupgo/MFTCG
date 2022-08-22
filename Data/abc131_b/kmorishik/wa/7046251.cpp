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
cin >> N >> L;
vector<int> ans(N);
int sum = (L-1)*N + N*(N+1)/2;
rep(i,N){
gap = sum - 2*(L+i);
ans[i] = gap;
}
cout << sum-(sum-*min_element(ALL(ans)))/2 << endl;
}
