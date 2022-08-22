#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
ll X,Y;
cin >> X >> Y;
bool a = true;
rep(i,X+1){
if(2 * i + 4 * (X - i) == Y){
cout << "Yes" << endl;
a = false;
break;
}
}
if(a == false){
cout << "No" << endl;
}
}
