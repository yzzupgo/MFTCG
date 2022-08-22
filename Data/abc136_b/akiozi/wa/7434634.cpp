#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <math.h>
#include <string>
#include <map>
#include <iomanip>
using namespace std;
typedef long long ll;
ll mod=1000000007;
typedef pair<int, int> P;
int main()
{
int n;
cin >> n;
int cnt=0;
for(int i=0; i<n; i++){
string s;
s=to_string(i);
if(s.size()%2==1) cnt++;
}
cout << cnt << endl;
return 0;
}
