#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <functional>
#include <map>
#define rep(i,n) for(int i=0, i ##_len=(n); i<i ##_len; i++)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
using ll = long long int;
int main() {
int n;
cin >> n;
int ans = n * 1.08;
if(ans == 206) {
cout << "so-so" << endl;
} else if(ans > 206) {
cout << ":(" << endl;
} else {
cout << "Yay!" << endl;
}
return 0;
}
