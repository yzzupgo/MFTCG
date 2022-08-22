#include <bits/stdc++.h>
using namespace std;
int main(){
int A,B;
cin >> A,B;
int n = max(A+B, A-B);
int answer = max(n, A*B);
cout << answer << endl;
}
