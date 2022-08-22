#include <bits/stdc++.h>
using namespace std;
int main () {
int A , B;
cin >> A >> B;
if (A >= 13){
cout << B;
}
else if (6 <= A && A <= 12){
cout << B/2;
}
else {
cout << 0;
}
}
