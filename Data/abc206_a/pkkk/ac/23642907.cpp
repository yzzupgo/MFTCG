#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int b = n * 1.08;
if(b < 206) {
cout << "Yay!" << endl;
} else if(b == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
