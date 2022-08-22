#include<iostream>
#include<vector>
#include<string>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<queue>
#include <forward_list>
#define mod 1000000007
using namespace std;
int main() {
int N, L;
cin >> N >> L;
if (L<0 && N+L-1 < 0) {
cout << (N - 1) * (L + N + L -1 -1) / 2 << endl;
}
else if (L <= 0) {
cout << (N - 1) * (L + N + L-1) / 2 << endl;
}
else if (L > 0) {
cout << (N - 1) * (L+1 + N + L-1) / 2 << endl;
}
}
