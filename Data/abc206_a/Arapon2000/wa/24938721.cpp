#include<bits/stdc++.h>
using namespace std;
int main() {
int N;
float ans = 0;
cin >> N;
ans = 1.08 * N;
if(ans < 206) {
cout << "Yay!" << endl;
} else if(ans = 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
