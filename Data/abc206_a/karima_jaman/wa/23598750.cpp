#include<bits/stdc++.h>
using namespace std;
int main() {
long N;
cin >> N;
if(1.08 * N < 206) {
cout << "Yay!" << endl;
} else if(1.08 * N > 206) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
return 0;
}
