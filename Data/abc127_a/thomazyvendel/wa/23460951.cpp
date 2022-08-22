#include <iostream>
using namespace std;
int main() {
int n,a,b,vonat;
cin >> n >> a >> b;
vonat = n*a;
if(vonat>b){
cout << b;
}else if(vonat<=b){
cout << vonat;
}
return 0;
}
