#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main(void) {
int n;
cin >> n;
int ans = 0;
ans = 1.08 * n;
if(ans < 206) {
cout << "Yay!" << endl;
} else if(ans == 206) {
cout << "so-so!" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
