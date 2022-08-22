#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
int N, L;
cin >> N >> L;
int min = 1000;
int taste_all = 0;
for(int i = 0; i < N; i++){
taste_all += L + i;
if(abs(L + i) < abs(min)){
min = L + i;
}
}
cout << taste_all - min << endl;
return 0;
}
