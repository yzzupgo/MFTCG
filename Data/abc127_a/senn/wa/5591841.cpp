#include <bits/stdc++.h>
using namespace std;
int main() {
int A,B;
cin >> A >> B;
if(13 <= A){
cout << B;
}else if(6 <= A <= 12) {
cout << B/2;
}else if(A <= 5){
cout << 0;
}
}
