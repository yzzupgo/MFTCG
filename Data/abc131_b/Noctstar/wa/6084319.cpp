#include <iostream>
using namespace std;
int main() {
int n, a; cin >> n >> a;
int L = a;
int R = a + n - 1;
int eat;
if (R <= 0) eat = R;
else if (L >= 0) eat = L;
else eat = 0;
int ans = (R - L)*(R - L + 1) / 2 - eat;
cout << ans << endl;
return 0;
}
