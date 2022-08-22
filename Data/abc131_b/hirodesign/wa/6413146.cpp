#include <iostream>
#include <vector>
#include <queue>
#include <deque>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
int main(){
int N, L;
cin >> N >> L;
int sum = L * N + N * (N-1) / 2;
if(L >= 0) sum -= L;
else if(abs(L) > N) sum -= (L + N -1);
cout << sum << endl;
return 0;
}
