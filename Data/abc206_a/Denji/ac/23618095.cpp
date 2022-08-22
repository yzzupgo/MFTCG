#include<bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int V = 1.08 * N;
if(V < 206) {
cout << "Yay!" << endl;
} else if(V == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
