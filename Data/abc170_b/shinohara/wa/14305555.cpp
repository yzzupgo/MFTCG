#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main(){
int x, y;
cin >> x >> y;
for (int i=0; i<=x; i++){
int leg = i*2;
int remain = y - leg;
if (remain/4 == x-i){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
