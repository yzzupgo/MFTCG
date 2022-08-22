#include <iostream>
#include <string>
#include <cstdio>
#include <unordered_map>
#include <vector>
#define task ""
using namespace std;
using ll = long long;
using ld = long double;
const int N = 1e5 + 2;
int a, b;
void Read(){
cin >> a >> b;
}
void Solve(){
int Dx = 4 * a - b;
int Dy = b - 2 * a;
if(Dx < 0 || Dy < 0 || (Dx & 1) || (Dy & 1))
cout << "No";
else
cout << "Yes";
}
main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
Read();
Solve();
}
