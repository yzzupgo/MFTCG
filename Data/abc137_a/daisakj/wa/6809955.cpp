#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
int p = A + B;
int m = A - B;
int x = A * B;
if(p > m && p > x){
cout << p << endl;
} else if(m > p && m > x){
cout << m << endl;
} else if(x > p && x > m){
cout << x << endl;
}
}
