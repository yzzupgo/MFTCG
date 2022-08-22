#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define all(p) p.begin(),p.end()
typedef long long ll;
int main(int argc, char *argv[]) {
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
double x;
cin >> x;
double ans = 1.08 * x;
if(ans < 206) {
cout << "Yay!\n";
} else if(ans == 206) {
cout << "so-so\n";
} else if(ans > 206) {
cout << ":(\n";
}
return 0;
}
