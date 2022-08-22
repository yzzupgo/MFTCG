#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
string S;
cin >> S;
int ketasuu = S.size();
int N = stoi(S);
if (ketasuu == 1) {
cout << N << endl;
}
else if (ketasuu == 2) {
cout << 9 << endl;
}
else if (ketasuu == 3) {
cout << N - 90 << endl;
}
else if (ketasuu == 4) {
cout << 909 << endl;
}
else if (ketasuu == 5) {
cout << N - 9090 << endl;
}
else if (ketasuu == 6) {
cout << 90909 << endl;
}
}
