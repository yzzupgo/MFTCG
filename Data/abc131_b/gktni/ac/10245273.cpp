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
int main(void) {
int N, L;
cin>>N>>L;
int diff = 1e8;
int taste = 0;
int sum = 0;
for(int i = 1;i <= N;i++) {
sum += L+i-1;
}
int eat = 0;
for(int j = 1;j <= N;j++) {
eat = sum-(L+j-1);
if(abs(sum-eat) < diff) {
diff = abs(sum-eat);
taste = eat;
}
}
cout<<taste<<endl;
return 0;
}
