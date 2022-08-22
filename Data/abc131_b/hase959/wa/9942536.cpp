#include<bits/stdc++.h>
using namespace std;
int main(void){
int N, L;
cin >> N >> L;
if (L*(N+L-1)<=0){
cout << (L+(N+L-1))*(N-1)/2 << endl;
}else if(L<0){
cout << (L+(N+L-1))*N/2-(N+L-1) << endl;
}else{
cout << (L+(N+L-1))*N/2-L << endl;
}
return 0;
}
