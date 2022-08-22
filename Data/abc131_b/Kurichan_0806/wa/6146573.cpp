#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n, l;
int ans = 0;
int min = abs(l);
for(int i = 0; i < n; i++){
if (min > abs(l + i))
min = abs(l + i);
ans += l + i;
}
cout << ans - min << endl;
return 0;
}
