#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include <vector>
#include <numeric>
#include <map>
#include <cmath>
#include <iomanip>
#include <queue>
#include <set>
using ll =long long;
using vi = vector<int>;
using vl = vector<ll>;
using vvi = vector<vi>;
using vs = vector<string>;
int main() {
int X, Y;
cin >> X >> Y;
for(int i=0; i<=X; i++){
if(2*i + 4*(X-i) == Y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
