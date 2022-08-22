#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <math.h>
#include <string>
#include <map>
#include <cstdlib>
using namespace std;
typedef long long ll;
int main()
{
int N,L;
cin >> N >> L;
vector<int> taste(N);
int sum=0, m=10000000;
for(int i=0; i<N; i++){
taste[i]=L+i;
sum+=taste[i];
m=min(m, abs(taste[i]));
}
cout << sum-m << endl;
return 0;
}
