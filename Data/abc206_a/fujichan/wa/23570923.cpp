#include<string>
#include<math.h>
#include<algorithm>
#include<cmath>
#include<map>
#include<vector>
#include<iostream>
#include<cstring>
#include<math.h>
#include<queue>
#include<sstream>
#include<stack>
using namespace std;
typedef long long ll;
typedef long long int lli;
typedef unsigned long long ull;
using Cgraph = vector<vector<char>>;
const long long INF = 1LL << 60;
int main() {
double n;
cin >> n;
if(1.08 * n > 206) {
cout << ":(" << endl;
} else if(1.08 * n == 206) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
}
