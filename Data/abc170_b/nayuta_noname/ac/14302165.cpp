#include <algorithm>
#include<iostream>
#include<vector>
#include<deque>
#include<queue>
#include<stack>
#include<list>
#include<map>
#include<set>
#include<string>
#include <sstream>
#include<bitset>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>
const int INF = 0x7fffffff;
using lll = long long;
using ull = unsigned long long;
using namespace std;
int main(){
lll ii,jj,kk;
vector<int> ret;
int x,y;
cin >> x >> y;
int a,b;
int animal,foot;
bool flg;
flg=false;
for(ii=0;ii<=x;ii++){
a = ii;
b = x-ii;
if(y == (2*a + 4*b)){
flg = true;
}
}
if(flg){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
return 0;
}
