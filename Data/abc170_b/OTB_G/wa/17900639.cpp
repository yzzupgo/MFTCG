#include <bits/stdc++.h>
using namespace std;
int main(){
int a, b;
cin >> a >> b;
for(int i = 0;i < a;i++){
int ans = 2 * i + 4 * (a - i);
if(ans == b){
cout << "Yes" << endl;
return 0;
}else if(4 * a == b){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
