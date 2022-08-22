#include <iostream>
using namespace std;
int main(void) {
int N;
cin >> N;
int res = 0;
int now = 10;
while (now <= N) {
res += (now-1)-(now/10)+1;
now *= 100;
}
now /= 10;
if (N >= now) {
res += N-now+1;
}
cout << res << endl;
return 0;
}
