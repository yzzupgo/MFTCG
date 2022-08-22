#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
string Ans;
if(191 > N) {
Ans = "Yay!";
} else if(191 == N) {
Ans = "so-so";
} else {
Ans = ":(";
}
cout << Ans << endl;
}
