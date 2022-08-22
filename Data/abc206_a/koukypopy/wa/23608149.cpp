#include <iostream>
#include <string>
using namespace std;
int main() {
double N, val;
string ans;
cin >> N;
val = int(N * 1.08);
if(val < 206) {
ans = "Yay!";
} else if(val == int(N)) {
ans = "so-so";
} else if(val > N) {
ans = ":(";
}
cout << ans << endl;
}
