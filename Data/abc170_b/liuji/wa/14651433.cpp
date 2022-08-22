#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
int a;
int l;
cin >> a >> l;
if(a == 1 && (l==2||l==4)){
cout << "Yes" << endl;
return 0;
}
for(int i = 0;i <= a;i++){
int t = a - i;
if(t > 0&&(4*i + 2*t)==l){
cout << "Yes" << endl;
return 0;
}
}
cout <<"No"<<endl;
}
