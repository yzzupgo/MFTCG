#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
int n;
cin >> n;
int x = (1.08) * n;
if(x < 206) {
cout << "Yay!" << endl;
} else if(x == 206) {
cout << "Yay!" << endl;
} else {
cout << ":(";
}
return 0;
}
