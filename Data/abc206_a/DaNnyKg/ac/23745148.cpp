#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fr(i,n) for(int i=0;i<n;i++)
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin >> t;
int j = t * 1.08;
if(j > 206) {
cout << ":(" << endl;
} else if(j == 206) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
return 0;
}
