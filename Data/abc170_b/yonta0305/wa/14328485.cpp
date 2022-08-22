#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
bool ans = false;
cin >> a >> b;
if(a*2 <= b && b <= a*4){
ans = true;
}
if(ans){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
return 0;
}
