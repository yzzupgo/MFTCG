#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define rep2(i,s,n) for (int i = (s); i < (int)(n); i++)
int main() {
int N;
cin >> N;
int total;
if(N < 10) {
total = N - 1;
} else if(N < 100) {
total = 9;
} else if(N < 1000) {
total = 9 + N - 100 + 1;
} else if(N < 10000) {
total = 9 + 900;
} else if(N < 100000) {
total = 9 + 900 + N - 10000 + 1;
} else if(N < 1000000) {
total = 9 + 900 + 90000;
}
cout << total;
}
