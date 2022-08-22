#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
if(int(206 - n * 1.08) > 0) {
cout << "Yay!";
} else if(int(206 - n * 1.08) < 0) {
cout << ":(";
} else {
cout << "so-so";
}
return 0;
}
