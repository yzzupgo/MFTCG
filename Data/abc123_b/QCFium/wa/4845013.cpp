#include <bits/stdc++.h>

#define countof(a) (sizeof(a)/sizeof(*a))

#define vi std::vector<int>
#define vvi std::vector<std::vector<int> >
#define vpi std::vector<pi >
#define pi std::pair<int,int>
#define fi first
#define se second
#define all(n) n.begin(), n.end()

#define FROMTO(var, from, to) for (int var = (from), var##down = ((int)(to)) < ((int)(from));var##down ? (var >= (int)(to)) : (var <= (int)(to));var##down ? var-- : var++)
#define UPTO(var, from, to)   for (int var = (from); var <= ((int)(to)); var++)
#define DOWNTO(var, from, to) for (int var = (from); var >= ((int)(to)); var--)
#define FOR(var, to)		  UPTO(var, 0, (to)-1)
#define DOWN(var, from)	   DOWNTO(var, (from)-1, 0)

#define INIT(var, val) FOR(i,countof(var)) var[i] = val
#define INPUT(var) FOR(i,countof(var)) cin >> var[i]
#define INPUT1(var) FOR(i,countof(var)) cin >> var[i], var[i]--

#define SORT(v) qsort(v,countof(v),sizeof(*v),int_less)
#define SORTT(v) qsort(v,countof(v),sizeof(*v),int_greater)
#define QSORT(v,b) qsort(v,countof(v),sizeof(*v),b)

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef int64_t s64;

static const int MOD = 1000000007;
static const int INF = ((1<<30)-1);
static const s64 LINF = ((1LL << 62)-1);

struct Comb {
	std::vector<std::vector<s64> > a;
	Comb(int n) { // O(n^2)
		a.resize(n+1);
		FOR(i,n+1) {
			a[i].resize(i+1, 1);
			UPTO(j,1,i-1) a[i][j] = a[i-1][j] + a[i-1][j];
		}
	}
	s64 ncr(int n, int r) {
		assert(n >= 0);
		assert(n <= (int)a.size());
		assert(r >= 0);
		assert(r <= n);
		return a[n][r];
	}
};

#define gc(c) (c)=getchar()
int ri() {
	int c,s=0,r=0;
	for(;;){gc(c);if(c=='-'){s=1;break;}if(c>='0'&&c<='9'){r=c-'0';break;}}
	for(;;){gc(c);if(c<'0'||c>'9')break;r*=10;r+=c-'0';}
	if(s)r=-r;
	return r;
}
s64 rs64() {
	s64 r;
	int c,s;
	for(;;){gc(c);if(c=='-'){s=1;break;}if(c>='0'&&c<='9'){r=c-'0';break;}}
	for(;;){gc(c);if(c<'0'||c>'9')break;r*=10;r+=c-'0';}
	if(s)r=-r;
	return r;
}

int int_less(const void *a, const void *b) {
	return (*(const int*)a - *(const int*)b);
}
int int_greater(const void *a, const void *b) {
	return (*(const int*)b - *(const int*)a);
}
std::string operator*(const std::string &s, int n){ std::string res; FOR(i,n) res += s; return res; }

template<class T> std::ostream& operator<<(std::ostream& os, std::vector<T> a) { for (auto i : a) os << i << " "; return os; }
template<class T> std::ostream& operator<<(std::ostream& os, std::set<T> a) { for (auto i : a) os << i << " "; return os; }
template<class A, class B> std::ostream& operator<<(std::ostream&os, std::pair<A,B> a) { os << a.fi << "," << a.se; return os; }


int main() {
	int a[5];
	FOR(i,5) a[i] = ri();
	int min = INF;
	FOR(i,5) {
		if (a[i] % 10 && min > a[i] % 10) min = a[i] % 10;
		if (a[i]%10) a[i] -= a[i] % 10 - 10;
	}
	if (min == INF) min = 10;
	std::cerr << a[0] + a[1] + a[2] + a[3] + a[4]  - (10 - min) << std::endl;
	
	return 0;
}
