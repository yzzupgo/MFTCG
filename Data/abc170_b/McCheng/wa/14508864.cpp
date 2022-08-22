#include <bits/stdc++.h>
#define int long long
using namespace std;
class A {
public:
static constexpr int kStressCount = 0;
static void generateTest(ostream& test) {}
void solve(istream& cin, ostream& cout) {
for (int i = 1; i < 6; i++) {
int a,b;
cin>>a>>b;
if (b%2) {
cout<<"No";
return;
}
if (b<2*a){
cout << "No";
return;
}
if (b>4*a){
cout << "No";
return;
}
cout << "Yes";
}
}
};
#undef int
signed main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
istream &in(cin);
ostream &out(cout);
out << fixed;
out.precision(20);
A solver;
solver.solve(in, out);
}
