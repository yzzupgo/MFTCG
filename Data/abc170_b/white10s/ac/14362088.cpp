#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void){
int a,b;
cin >> a >> b;
if (a*2<=b&&a*4>=b){
if (b%2 ==0){
cout << "Yes" << endl;
}
else{
cout << "No" <<endl;
}
}
else{cout << "No"<<endl;}
}
