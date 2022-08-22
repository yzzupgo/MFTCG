#include <bits/stdc++.h>
using namespace std;
int n, c;
int main(){
cin >> n;
for (int i=1; i<=n; i++){
if (to_string(i).length()%2==1){
c++;
}
}
cout << n;
}
