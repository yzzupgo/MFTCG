#include <iostream>
#include <vector>
using namespace std;
int EditNums(int n){
    if(n % 10 == 0){
        return n;
    }else{
        return (n / 10 + 1) * 10;
    }
}

int main(void){
    int nums[5];
    int Enums[5];
    int sum = 0;
    int ans = 10000;
    
    for(int i = 0;i < 5;i++){
        cin >> nums[i];
        Enums[i] = EditNums(nums[i]);
        sum += Enums[i];
    }
    
    for(int i = 0;i < 5;i++){
        ans = min(ans,sum - Enums[i] + nums[i]);
    }
    cout << ans << endl;
}


