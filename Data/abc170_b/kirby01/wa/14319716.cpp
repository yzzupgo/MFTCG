#include <bits/stdc++.h>
using namespace std;
#define froop1(a,n) for(int i = a;i < n;i++)
#define froop2(a,n) for(int i = a;i > n;i--)
int main(){
int a,b;
cin >> a >> b;
for(int i = 0;i <= a;i++){
for(int j = 0;j <= a - i;j++){
if(i * 2 + j * 4 == b){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
