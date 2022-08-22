#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
#define rep(i,x,n) for (int i = x; i < (n); ++i)
using namespace std;
using ll = long long;
int main() {
int N = 0;
cin >> N;
N *= 1.08;
if(N == 206) {
cout << "so-so";
} else if(N < 206) {
cout << "Yes!";
} else {
cout << ":(";
}
return 0;
}
