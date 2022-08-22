#include <algorithm>
#include <cassert>
#include <iostream>
#include <queue>
#include <tuple>
#include <utility>
#include <vector>
using namespace std;
void solve(int n, int k, vector<char> &cv) { cv[k-1] = cv[k-1] + 0x20; }
int main(int argc, char const *argv[]) {
int a, b;
cin >> a;
cin >> b;
if(a<6){
cout << 0;
} else
if(6<=a && a < 13){
cout << b /2;
} else {
cout <<b;
}
return 0;
}
