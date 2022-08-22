#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>

using namespace std;

int main(){
    vector<int>dishes(5);
    for(int i=0; i < 5; i++){
        cin >> dishes[i];
    }
    
    int ans = 10000000000000;

    do{
        int time = 0;
        for(int i=0; i < 5; i++){
            if(0 < time%10) time = time - dishes[i]%10 + 10;

            time += dishes[i];
        }
        ans = min(ans,time);
    }while(next_permutation(dishes.begin(),dishes.end()));

    cout << ans << endl;
    return 0;
}