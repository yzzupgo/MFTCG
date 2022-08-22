#define _USE_MATH_DEFINES
#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<climits>
#include<bitset>
#include<unordered_map>
#include<unordered_set>
#include<random>
#include<list>
#include<functional>
using namespace std;
#define MAX(A,B) ((A)>(B)?(A):(B))
#define MIN(A,B) ((A)<(B)?(A):(B))
#define LP(I,S,G) for (long long int I = S; I < G; I++)
#define IN(X) for (int i = 0; i < X.size(); i++)cin >> X[i]
#define OUT(X) for (int i = 0; i < X.size(); i++)cout << X[i]<<" "
#define SORT(X) sort(X.begin(), X.end())
#define CSORT(X,Y) sort(X.begin(), X.end(),Y)
#define COPY(X,Y) copy(X.begin(), X.end(), Y.begin())
#define ALL(X,Y) for (auto X = Y.begin(); X != Y.end(); X++)
#define FULL(a) (a).begin(),(a).end()
typedef long long int ll;
long long int M = pow(10, 9) + 7;
template<class I1, class I2>
istream &operator>>(istream &s, pair<I1, I2> &in) {
s >> in.first >> in.second;
return s;
}
bool comp(pair<long long int, long long int >a, pair<long long int, long long int >b) {
return a.second < b.second;
}
struct HashPair {
template<class T1, class T2>
size_t operator()(const pair<T1, T2> &p) const {
auto hash1 = hash<T1> {}(p.first);
auto hash2 = hash<T2> {}(p.second);
size_t seed = 0;
seed ^= hash1 + 0x9e3779b9 + (seed << 6) + (seed >> 2);
seed ^= hash2 + 0x9e3779b9 + (seed << 6) + (seed >> 2);
return seed;
}
};
int main(void) {
int a;
cin >> a;
a = (double)a * 1.08;
if(a < 206) {
cout << "Yay!";
} else if(a > 206) {
cout << ":(";
} else {
cout << "so-so";
}
return 0;
}
