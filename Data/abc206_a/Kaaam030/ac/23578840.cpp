#include<bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
N *= 1.08;
if(N < 206) {
cout << "Yay!" << endl;
return 0;
} else if(N == 206) {
cout << "so-so" << endl;
return 0;
} else {
cout << ":(" << endl;
return 0;
}
}
