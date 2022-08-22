#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <queue>
#include <iomanip>
#include <list>
#include <string>
typedef char SINT8;
typedef unsigned char UINT8;
typedef short SINT16;
typedef unsigned short UINT16;
typedef int SINT32;
typedef unsigned int UINT32;
typedef long long SINT64;
typedef unsigned long long UINT64;
typedef double DOUBLE;
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(a) ((a)>(0)?(a):-(a))
#define rep(i,a,b) for(int (i)=int(a);(i)<int(b);(i)++)
#define rrep(i,a,b) for(int (i)=int(a);(i)>=int(b);(i)--)
#define put(a) cout << (a) << endl
#define puts(a) cout << (a) << " "
#define pute(a) cout << endl
#define INF 1000000001
#define MOD 1000000007
#define INF64 1000000000000000001
#define F first
#define S second
#define Pii pair<SINT32,SINT32>
#define Pll pair<SINT64,SINT64>
#define Piii pair<SINT32,pair<SINT32,SINT32>>
#define Plll pair<SINT64,pair<SINT64,SINT64>>
#define Vll(a,b,c) vector<vector<SINT64>> (a)((b),vector<SINT64>((c))
#define Vlll(a,b,c,d) vector<vector<vector<SINT64>>> (a)((b),vector<vector<SINT64>>((c),vector<SINT64>((d)))
using namespace std;
int main() {
SINT64 A,B; cin >> A >> B;
if (A >= 13) {
put(B);
} else if ( A >= 6) {
put(B/2);
} else {
put(0);
}
return 0;
}
