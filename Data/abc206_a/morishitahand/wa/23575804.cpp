#include<bits/stdc++.h>
using namespace std;
int main() {
int x;
cin >> x;
int ans = x * 1.08;
if(ans > 206) {
cout << "Yay!" << endl;
} else if(ans == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
