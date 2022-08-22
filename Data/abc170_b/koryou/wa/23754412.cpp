#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <list>
#include <cassert>
#include <numeric>
#include <cstdint>
#include <queue>
#include <deque>
using ll = long long;
using ld = long double;
using namespace std;
using Graph = vector<vector<int>>;
using Priority = priority_queue<int>;
#define teisu 1000000007
#define MAX_WIDTH 60
#define MAX_HEIGHT 60
#define INF 1e16
ll X,Y;
int main(){
cin >> X >> Y;
for(int i=1;i<=X;i++){
ll calc = (2*i)+(X-i)*4;
if(calc == Y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
