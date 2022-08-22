#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
int ans = n * 1.08;
if(ans < 206) {
cout << "Yay!" << endl;
} else if(ans == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
