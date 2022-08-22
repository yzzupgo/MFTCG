#include<bits/stdc++.h>
using namespace std;
int main() {
long int N, r;
cin >> N;
r = 1.08 * N;
if(r < 206) {
cout << "Yay!" << endl;
} else if(r > 206) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
return 0;
}
