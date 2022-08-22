#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <functional>
#include <map>
using namespace std;
using ll = long long int;
int main(){
int N,L;cin>>N>>L;
int _min = 1e9;
int ans = 0;
for(int i=0;i<N;i++){
ans += L + i;
if(abs(L+i)<_min) _min = L + i;
}
cout << ans - _min << endl;
return 0;
}
