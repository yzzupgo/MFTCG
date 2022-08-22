#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
#include<cstring>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<climits>
#include<fstream>
#define MOD (1000000007)
using namespace std;
typedef long long int Int;
constexpr Int TEN(int n) { return n == 0 ? 1 : 10 * TEN(n-1); }
int N,L;
int sum = 0;
int min_taste = 100000;
int main(void) {
cin>>N>>L;
for(int i = 1;i <= N;i++) {
sum += L+i-1;
min_taste = min(min_taste,abs(L+i-1));
}
cout<<sum-min_taste<<endl;
return 0;
}
