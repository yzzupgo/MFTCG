#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for( int i=0; i<(n); i++)
int main() {
int n;
cin >> n;
if(206 > floor(n * 1.08)) {
cout << "Yay!" << endl;
} else if(206 == floor(n * 1.08)) {
cout << "Soso" << endl;
} else {
cout << ":(" << endl;
}
}
