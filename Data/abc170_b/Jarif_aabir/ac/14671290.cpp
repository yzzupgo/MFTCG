#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define REPA(i,a,n) for(int i=a; i<n; i++)
#define REPE(i,a,n) for(int i=a; i<=n; i++)
#define SetArray(a,n) for(int array_i=0; array_i<n; array_i++) cin >> a[array_i]
#define print(x) cout << x
#define printw(x) cout << x << " "
#define println(x) cout << x << endl
#define printl() cout << endl
#define sqr(x) (x)*(x)
#define cube(x) (x)*(x)*(x)
typedef long long ll;
typedef unsigned int uint;
typedef vector<int> vi;
int main(){
int x, y;
cin >> x >> y;
if(y >= 2*x && y <= 4*x){
if(y%2 == 0){
println("Yes");
return 0;
}
}
println("No");
return 0;
}
