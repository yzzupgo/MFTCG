#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int X = (N * 1.08) - 0.5;
string Ans;
if(206 > X) {
Ans = "Yay!";
} else if(206 == X) {
Ans = "so-so";
} else {
Ans = ":(";
}
cout << Ans << endl;
}
