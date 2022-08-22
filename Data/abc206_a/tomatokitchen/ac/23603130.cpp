#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
#include<numeric>
using namespace std;
int main() {
double N;
cin >> N;
int res = 206 - ceil(1.08 * N) + 1;
if(res < 0) {
cout << ":(";
}
if(res == 0) {
cout << "so-so";
}
if(res > 0) {
cout << "Yay!";
}
}
