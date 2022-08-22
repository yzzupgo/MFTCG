#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <queue>
#include <deque>
using namespace std;
using ll = long long int;
int main(){
ll N, L;
cin >> N >> L;
ll sum = 0;
for(ll i = 0; i < N; ++i) {
sum += L + i;
}
if(N >= 0){
sum -= N;
}else if(L + N - 1 <= 0){
sum -= (L + N - 1);
}
cout << sum << endl;
}
