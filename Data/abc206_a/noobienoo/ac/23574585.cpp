#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define SI(a) scanf("%d",&a)
#define SLL(a) scanf("%lld",&a)
#define SL(a) scanf("%ld",&a)
#define PI(a) printf("%d\n",a)
#define PL(a) printf("%ld\n",a)
#define PLL(a) printf("%lld\n",a)
#define SC(a) scanf("%c",&a)a
#define PC(a) printf("%c",a)
typedef long long ll;
#define mod 1000000007
#define W while
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define INF INT_MAX
#define fr(i,a,b) for(int i=a;i<=b;i++)
int main() {
int t;
t = 1;
W(t--) {
int n;
cin >> n;
n *= 108;
n /= 100;
if(n < 206) {
cout << "Yay!\n";
} else if(n == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
}
return 0;
}
