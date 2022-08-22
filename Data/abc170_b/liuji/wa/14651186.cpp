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
for(int i = 1;i*4 < l;i++){
int bird = l - i * 4;
if(bird % 2 == 0 && (bird/2+i)==a){
cout << "Yes" << endl;
return 0;
}
}
cout << "No"<<endl;
}
