#include <bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin >> n;
cin >> m;
if(n * 4 < m){
cout << "No" << endl;
return 0;
}
if(m % 2 == 1){
cout << "No" << endl;
return 0;
}
if(m == 0){
cout << "No" << endl;
return 0;
}
cout << "Yes" << endl;
return 0;
}
