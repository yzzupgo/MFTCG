#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
int a,b;
cin >> a >> b;
if(5 <= a && a <= 12){
cout << b/2 << endl;
}else if(a >= 13){
cout << b << endl;
}else{
cout << 0 << endl;
}
return 0;
}
