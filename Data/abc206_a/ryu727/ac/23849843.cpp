#include <bits/stdc++.h>
using namespace std;
#define rep(i,A) for(int i = 0;i < A;i++)
int main() {
int A;
cin >> A;
int B = A * 1.08;
if(B > 206) {
cout << ":(";
} else if(B == 206) {
cout << "so-so";
} else {
cout << "Yay!";
}
}
