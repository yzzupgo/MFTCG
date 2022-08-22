#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
if(A <= 5){
B = 0;
}else if(A > 5 && A < 13){
B /= 2;
}
cout << B << endl;
return 0;
}
