#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
int sum = (2 * L + N - 1) * N * 0.5;
if( L > 0 ) sum -= L;
if( L + N - 1 < 0 ) sum -= (L + N - 1);
cout << sum << endl;
}
