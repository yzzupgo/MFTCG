#include <iostream>
using namespace std;
void solve(){
int n, d;
cin >> n >> d;
if(d % n != 0) cout << "Yes" << endl;
else cout << "No" << endl;
return;
}
int main()
{
solve();
return 0;
}
