#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <list>
#include <numeric>
#include <stack>
#include <queue>
#include <tuple>
#include <bitset>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)
typedef long long ll;
typedef pair<int,int> P;
const int inf = 1012345678;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int N;
int main(){
int A, B;
cin >> A >> B;
cout << max((A*B, A-B),A+B) << endl;
}
