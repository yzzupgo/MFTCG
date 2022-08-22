#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
int64_t Fac(int k) {
return(k == 0 ? 1 : k * Fac(k - 1));
}
int sum(int l) {
return l * (l + 1) / 2;
}
int64_t Abs(int m) {
if(m >= 0) {
return m;
} else {
return m * (-1);
}
}
int main() {
double N;
cin >> N;
double K = N * (1.08);
double preanswer;
preanswer = 206 - K;
if(N == 191) {
cout << "so-so" << endl;;
} else if(preanswer > 0) {
cout << "Yay!" << endl;;
} else {
cout << ":(" << endl;;
}
return 0;
}
