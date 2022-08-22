#include <iostream>
using namespace std;
int main() {
int N;
cin >> N;
int ans = 0;
for(int i =1; i < N + 1 ;i++){
if (1 <= i and i <= 9) ans++;
else if (100 <= i and i <= 999) ans++;
else if (10000 <= i and i <= 99999) ans++;
}
cout << ans << endl;
}
