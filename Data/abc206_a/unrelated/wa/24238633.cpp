#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include<string>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
int main() {
int N;
cin >> N;
int sum = N * 1.08;
string ans;
if(sum > 206) {
ans = ":(";
} else if(sum == 206) {
ans = "so-so";
} else {
ans = "Yay!";
}
cout << sum;
}
