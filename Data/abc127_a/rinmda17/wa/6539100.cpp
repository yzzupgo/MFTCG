#include <bits/stdc++.h>
using namespace std;
int main () {
int A , B;
cin >> A >> B;
if (A >= 13){
cout << B;
}
else if (12 >= A >= 6){
cout << B/2;
}
else {
cout << 0;
}
}
