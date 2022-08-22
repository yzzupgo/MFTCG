#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
#include <limits>
#include <queue>
using namespace std;
#define rep(i,a,b) for( int i=a; i<b; i++ )
#define REP(i,n) rep(i,0,n)
#define INF 1000000
using lli = long long int;
using ulli = unsigned long long int;
typedef pair<int, int> P;
template <typename T>
vector<int> argsort(const vector<T> &v) {
vector<int> idx(v.size());
REP(i, v.size()) {
idx[i] = i;
}
sort(idx.begin(), idx.end(),
[&v](int i1, int i2) {
return v[i1] < v[i2];
});
return idx;
}
template<typename T>
void displayVector(vector<T> v) {
lli n = v.size();
REP(i, n - 1) {
cout << v[i] << " " ;
}
cout << v[n - 1] << endl;
}
string sub(string str, int start, int end) {
return str.substr(start, end - start + 1);
}
vector<int> decompositPrime(int n) {
vector<int> res(0);
int a = 2;
while(n > a) {
if(n % a == 0) {
res.push_back(a);
n /= a;
} else {
a++;
}
}
res.push_back(a);
return res;
}
bool judgePrime(int p) {
rep(i, 2, (int)(sqrt((double)p) + 1)) {
if(p % i == 0) {
return false;
}
}
return true;
}
int main() {
int N;
cin >> N;
int res = N * 1.08;
if(res < 206) {
cout << "Yay!" << endl;
} else if(res == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
