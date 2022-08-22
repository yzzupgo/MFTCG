#include<bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
string result = "No";
cin >> X >> Y;
for (int i = 0; i <= X; i++) {
if (2 * i + 4 * (X - i) == Y) {
result = "Yes";
break;
}
}
cout << result << endl;
return 0;
}
