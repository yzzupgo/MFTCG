#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
int ani=0;
int patas=0;
cin>>ani;
cin>>patas;
if(patas % 2 == 0 && patas >= 2 * ani && patas <= 4 * ani)
cout<<"Yes\n";
else
cout<<"No\n";
return 0;
}
