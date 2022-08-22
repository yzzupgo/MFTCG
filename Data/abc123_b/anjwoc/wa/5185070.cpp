#include <iostream>
#include <vector>
using namespace std;

int main(void){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int cmp=0;
    vector<int> dt(5);
    int ret=0;
    int first=0, before=0,idx=0;
    for(int i=0;i<5;i++){
        cin>>dt[i];
    }
    int tmp = dt[0]%10;
    
    for(int i=0;i<5;i++){
        tmp=0;
        for(int j=0;j<dt.size();j++){
            if(tmp<dt[j]%10){
                tmp = dt[j]%10;
                before=dt[j];
                idx=j;
            }
        }

        ret+=before;
        if(i==4) break;
        ret+=(10-tmp);
        dt.erase(dt.begin()+idx);
    }
    
    cout<<ret;

    return 0;
}