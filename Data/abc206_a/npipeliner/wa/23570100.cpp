# include <iostream>
# include <vector>
# include <string>
# include <algorithm>
# include <cmath>
# include <bitset>
# include <map>
# include <set>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
int main() {
double N;
cin >> N;
if(1.08e0 * N > 206e0) {
cout << ":(";
} else if(1.08e0 * N == 206e0) {
cout << "so-so";
} else {
cout << "Yay!";
}
return 0;
}
