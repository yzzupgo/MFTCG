#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin >> a >> b;
int p = a+b;
int m = a-b;
int k = a*b;
if(p>m){
if(p>k){
cout << p << endl;
}else{
cout << k << endl;
}
}else{
cout << m << endl;
}
}
