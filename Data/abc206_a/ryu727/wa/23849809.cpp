#include <bits/stdc++.h>
using namespace std;
#define rep(i,A) for(int i = 0;i < A;i++)
int main() {
double A;
cin >> A;
if(A * 1.08 > 206) {
cout << ":(";
} else if(A * 1.08 == 206) {
cout << "so-so";
} else {
cout << "Yay!";
}
}
