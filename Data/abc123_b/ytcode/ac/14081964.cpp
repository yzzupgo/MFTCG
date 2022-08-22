#include <iostream>
#include <vector>
using namespace std;

int main(void){
   vector<int> a(5);
   int sum = 0;
   for(int i = 0;i < 5;i++){
       cin >> a[i];
       sum += (a[i] + 9) / 10 * 10; 
   }
   int ans = sum;
   for(int i = 0;i < 5;i++){
       ans = (a[i] % 10 > 0) ? min(ans,sum - 10 + a[i] % 10) : ans;
   }
   cout << ans << endl;
   
    return 0;
}
