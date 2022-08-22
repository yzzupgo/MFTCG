#define _GLIBCXX_DEBUG
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;
using ll = long long;
int main(){
cin.tie(nullptr);
ios_base::sync_with_stdio(false);
int x,y;
cin >> x >> y;
for (int i = 0; i < x; i++)
{
if ((i+1)*2+(x-i-1)*4 == y)
{
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
