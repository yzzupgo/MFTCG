#include <iostream>
using namespace std;
class Solution {
public:
int Count(int N) {
int ret = 0;
for (int i = 1; i <= N; i++) {
int cnt = 0;
int tmp = i;
while (tmp) {
cnt++;
tmp /= 10;
}
if (!(cnt & 1))
ret++;
}
return ret;
}
};
int main() {
int N;
cin >> N;
Solution S;
cout << S.Count(N) << endl;
}
