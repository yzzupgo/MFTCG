#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=1;i<=n;i++)
typedef int t;
int d[100010];
int main() {
double n;
cin >> n;
if(n * 1.08 > 206) {
cout << ":(";
} else if(n * 1.08 == 206) {
cout << "so-so";
} else {
cout << "Yay!";
}
return 0;
}
