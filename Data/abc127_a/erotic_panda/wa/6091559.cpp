#include <iostream>
#include <string>
#include<math.h>
#include<map>
#include<vector>
#include <tuple>
using namespace std;
#define lli long long int
#define vi vector<int>
#define vlli vector<lli>
#define pii pair<int, int>
#define plli pair <lli, lli>
#define F(i,n) for(lli (i)=0;(i)<(n);(i)++)
#define FR(i,n) for(ll (i)=(n)-1;(i)>=0;(i)--)
#define FSG(i,a,b) for(ll (i)=(a);(i)<(b);(i)++)
#define FSGR(i,a,b) for(ll (i)=(b)-1;(i)>=(a);(i)--)
#define VALD(n) cout << #n << ": " << n << endl;
int main(){
int a, b;
cin >> a >> b;
int price = b;
if(a <= 5){
price = 0;
}
else if(a >= 6 && a <= 12){
price = b / 2;
}
cout << b << endl;
return 0;
}
