#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long ll;
int main() {
fastIO;
long long t;
cin >> t;
t = t + t * 0.08;
if(t < 206) {
cout << "Yay!\n";
} else if(t == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
return 0;
}
