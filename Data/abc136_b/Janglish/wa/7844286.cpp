#include <iostream>
using namespace std;
int main(){
int n,ans=0; cin >> n;
if (n<10) ans += n;
else if (n<100) ans += 9;
else if (n< 1000) ans += n - 90;
else if (n<10000) ans += n - 90;
else if (n<100000) ans += n - 9090;
else ans += n - 9091;
cout << ans << endl;
}
