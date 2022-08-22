#include <iostream>
using namespace std;
int main() {
int n;
string ans;
cin >> n ;
int t = n * 1.08;
if(t < 206) {
ans = "Yay!";
} else if(n == 206) {
ans = "so-so";
} else if(t > 206) {
ans = ":(";
}
cout << ans << endl;
}
