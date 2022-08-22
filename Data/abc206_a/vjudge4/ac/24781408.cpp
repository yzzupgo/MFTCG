#include<bits/stdc++.h>
using namespace std;
int main() {
int n, store;
cin >> n;
store = n * 1.08;
if(store < 206) {
cout << "Yay!" << endl;
} else if(store == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
