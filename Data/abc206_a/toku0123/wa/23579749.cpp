# include<bits/stdc++.h>
using namespace std ;
#define rep(i,n) for(int i = 0;i<n;i++)
#define ll long long
int main() {
int n;
cin >> n;
int k = 1.08 * n;
if(k > 206) {
cout << ":(" << endl;
}
if(k == 206) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
return 0;
}
