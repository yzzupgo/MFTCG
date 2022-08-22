#include <iostream>
#define ABS(X) ((X)<0?-(X):(X))
#define MINABS(X,Y) (ABS(X)<ABS(Y)?(X):(Y))
using namespace std;
int main(void){
int n,l;
int mn, sm=0;
cin >> n >> l;
mn = ABS(l);
for (int i=1; i<=n; i++){
sm += (l+i-1);
mn = MINABS(mn, l+i-1);
}
cout << (sm-mn) << endl;
return 0;
}
