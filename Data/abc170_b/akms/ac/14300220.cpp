#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
#include <map>
using namespace std;
typedef long long ll;
int main(){
int x, y; cin >> x >> y;
if((4 * x - y) % 2 == 0){
int a = (4 * x - y) / 2;
int b = x - a;
if(a >= 0 && b >= 0) cout << "Yes" << endl;
else cout << "No" << endl;
}
else cout << "No" << endl;
return 0;
}
