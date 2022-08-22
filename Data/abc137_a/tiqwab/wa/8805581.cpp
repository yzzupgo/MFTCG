#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
template<class T>
inline bool chmax(T &a, T b) {
if(a < b) {
a = b;
return true;
}
return false;
}
template<class T>
inline bool chmin(T &a, T b) {
if(a > b) {
a = b;
return true;
}
return false;
}
int main(void) {
int A, B;
cin >> A >> B;
int answer = A + B;
chmin(answer, A - B);
chmin(answer, A * B);
cout << answer << endl;
return 0;
}
