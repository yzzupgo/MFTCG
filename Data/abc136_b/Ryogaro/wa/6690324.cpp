#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
int N;
cin >> N;
if (N > 100000) cout << 90909;
else if (N >= 10000)cout << N - 10000 + 909 + 1;
else if (N >= 1000)cout << 909;
else if (N >= 100)cout << N - 100 + 9 + 1;
else if (N >= 10)cout << 9;
else cout << N;
}
