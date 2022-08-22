#include<bits/stdc++.h>
using namespace std;
int main() {
float n;
cin >> n;
int res = (1.08 * n);
if(res == 206) {
cout << "so-so" << endl;
} else if(res < 206) {
cout << "Yay!" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
