#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<stack>
#include<cmath>
#include<list>
#include<set>
#include<map>
using namespace std;
long long MOD = 1000000007LL;
const double PI = 3.14159265358979323846;
#undef INT_MIN
#undef INT_MAX
#define INT_MIN -2147483648
#define INT_MAX 2147483647
#define endl "\n"
int main() {
double N;
cin >> N;
N *= 1.08;
if(N - 206 < 0) {
cout << "Yay!" << endl;
} else if(N - 206 == 0) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
