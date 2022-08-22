#include<bits/stdc++.h>
using namespace std;
int main(void) {
int n;
cin >> n;
if(round(n * 1.08) < 206) {
cout << "Yay!" << endl;
} else if(round(n * 1.08) == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
