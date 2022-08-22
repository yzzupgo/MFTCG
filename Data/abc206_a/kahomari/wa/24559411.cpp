#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
string answer;
if(N * 1.08 < 206) {
answer = "Yay!";
} else if(N * 1.08 == 206) {
answer = "so-so";
} else if(N * 1.08 > 206) {
answer = ":(";
}
cout << answer << endl;
}
