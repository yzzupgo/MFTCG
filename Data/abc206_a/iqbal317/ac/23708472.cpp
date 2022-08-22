#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int tax = n * 1.08;
if(tax < 206) {
cout << "Yay!" << endl;
} else if(tax == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
