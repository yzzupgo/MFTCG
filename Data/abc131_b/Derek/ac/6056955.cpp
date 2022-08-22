#include <algorithm>
#include <cstdio>
#include <iostream>
#include <cfloat>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <queue>
#include <sstream>
#include <stack>
#include <time.h>
#include <vector>
#include <complex>
#include <map>
#include <set>
#include <iomanip>
#include <math.h>
#include <stdlib.h>
#include <list>
#include <utility>
#include <memory>
#include <cstring>
#include <fstream>
#include <numeric>
#include <assert.h>
#include <bitset>
using namespace std;
int main(){
int n,l,num=1e9,ans=0;
cin>>n>>l;
for (int i=1;i<=n;i++){
int x=l+i-1;
ans+=x;
if (abs(x)<abs(num)) num=x;
}
cout<<ans-num;
}
