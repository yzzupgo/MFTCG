#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
for(int i=0; i<X-1; i++){
Y -= 2;
}
if(((Y-2)!=0)&&((Y-4)!=0)){
cout << "No";
}else if((Y-2)==0 || (Y-4)==0){
cout << "Yes";
}
}
