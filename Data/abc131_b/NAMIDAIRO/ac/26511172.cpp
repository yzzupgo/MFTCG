#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int n, l;
cin >> n >> l;
int ans = (2 * l + n - 1) * n / 2;
int mini = 1e9;
for(int i = 0; i < n; i++) if(abs(mini) > abs(l + i)) mini = l + i;
cout << ans - mini << endl;
return 0;
}
