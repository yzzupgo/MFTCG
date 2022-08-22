#include <iostream>
using namespace std;
int main() {
int n;
double ans;
cin >> n;
ans = n * 1.08;
if(ans >= 206.0 && ans <= 206.9) {
cout << "so-so" << endl;
} else if(ans > 206) {
cout << ":(" << endl;
} else {
cout << "Yay!" << endl;
}
return 0;
}
