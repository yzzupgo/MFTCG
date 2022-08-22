#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<stack>
#include<queue>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<functional>
#include<utility>
#include<cstdlib>
using namespace std;
typedef long long int lli;
typedef size_t idx;
#define vi vector<int>
#define pb(n) push_back(n)
#define ln "\n"
#define sp ends
int main() {
int n;
cin >> n;
if((1.8 * n) < 206) {
cout << "Yay!\n";
} else if((1.8 * n) == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
return 0;
}
