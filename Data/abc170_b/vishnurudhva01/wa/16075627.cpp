#include <iostream>
using namespace std;
void solve(){
int n, d;
cin >> n >> d;
if(d % n == 1) cout << "No" << endl;
else if(n*2 >= d && d <= n*4) cout << "Yes" << endl;
else cout << "No" << endl;
return;
}
int main()
{
solve();
return 0;
}
