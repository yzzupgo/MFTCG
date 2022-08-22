#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define mod 1000000007
int getTheAnswer() {
return 42;
}
using namespace std;
using ll=long long;
class BCraneAndTurtle {
public:
void solve(std::istream& cin, std::ostream& cout) {
int x,y;
cin>>x>>y;
int a=2*x-(y/2);
if (((a*2+(x-a)*4)==y)&&a>=0&&(x-a)>=0)
cout<<"Yes";
else
cout<<"No";
}
};
int main() {
BCraneAndTurtle solver;
std::ios::sync_with_stdio(false);
std::cin.tie(NULL);
std::cout.tie(NULL);
std::istream& in(std::cin);
std::ostream& out(std::cout);
solver.solve(in, out);
return 0;
}
