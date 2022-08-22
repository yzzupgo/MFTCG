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
int main(void) {
int N,L;
cin>>N>>L;
int sum = 0;
int minimum = INT_MAX;
int sign = 0;
for(int i = 1;i <= N;i++) {
sum += L+i-1;
if(abs(L+i-1) < minimum) {
minimum = abs(L+i-1);
if(L+i-1 > 0) {
sign=1;
} else {
sign=-1;
}
}
}
cout<<sum+sign*minimum<<endl;
return 0;
}
