#include<iostream>
using namespace std;
int main(){
int n, l;
cin >> n >> l;
int ans = 0;
if (l >= 0){
for (int i = 1; i < n; i++){
ans += l+i;
}
}
else if (l < 0 && n+l > 0){
for (int j = 0; j < n; j++){
if (l+j != 0)
ans += l+j;
}
}
else{
for (int k = 0; k < n-1; k++){
ans += l+k;
}
}
cout << ans << endl;
return 0;
}
