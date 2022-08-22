#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <iomanip>
#include <list>
#include <queue>
#include <stack>
#include <map>
#define modulus 1000000007
#define ll long long
using namespace std;
int main(){
int x, y;
cin >> x >> y;
if(4 * x - y > 0 && (4 * x - y) % 2 == 0){
cout << "Yes" << endl;
}
else cout << "No" << endl;
}
