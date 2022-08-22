#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <deque>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <cstring>
#include <iomanip>
#include <utility>
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,n) for(int i=1;i<=(n);i++)
const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fLL;
using namespace std;
int main(){
cin.tie(0);
ios::sync_with_stdio(0);
int n;
cin>>n;
int sum=0;
for(int i=1;i<min(10,n);i++){
sum++;
}
for(int i=100;i<=min(999,n);i++){
sum++;
}
for(int i=10000;i<=min(99999,n);i++){
sum++;
}
cout<<sum<<'\n';
return 0;
}
