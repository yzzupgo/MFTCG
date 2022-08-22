#include<bits/stdc++.h>
using namespace std;
bool CompareMin(int a, int b) {
return a > b;
}
typedef long long ll;
int main(){
int a,b,c;
cin >>a >> b;
if(a <=5){
cout << 0 << endl;
}else if(a<=12){
cout << b/2 << endl;
}
else if(a>13){
cout <<b << endl;
}
return 0;
}
