#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B, S, T, U;
cin >> A >> B;
S = A+B;
T = A-B;
U = A*B;
if(S>=T && S>=U){
cout << S <<endl;
}
if(T>=S && T>=U){
cout << T << endl;
}
if(U>=S && U>=T){
cout << U << endl;
}
return 0;
}
