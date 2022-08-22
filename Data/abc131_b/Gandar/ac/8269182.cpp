#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
int N,L;
int main() {
cin >> N >> L;
if(L<=0&&0<=L+N-1)cout << (L + L + N - 1) * N/ 2 << endl;
else if(0<L)cout << (int)((L + 1 + L + N - 1) * (N - 1) / 2.0) << endl;
else cout << (int)((L + L + N - 2) * (N - 1) / 2.0) << endl;
}
