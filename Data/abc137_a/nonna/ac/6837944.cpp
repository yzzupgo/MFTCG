#include <bits/stdc++.h>
using namespace std;
main(){
int M, A, B;
cin >> A >> B;
M = max(max(A + B, A - B), A * B);
cout << M << endl;
}
