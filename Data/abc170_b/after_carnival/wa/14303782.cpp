#include <bits/stdc++.h>
using namespace std;
int main(){
int X,Y;
cin >> X >> Y;
bool check=false;
for(int i=1;i<X+1;i++){
if(2*i+4*(X-i)==Y){
check = true;
}
}
if(check){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
