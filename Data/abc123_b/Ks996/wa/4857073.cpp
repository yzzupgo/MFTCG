#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> time;
    vector<int> reminder;
    int in;
    for(int i=0;i<5;i++){
        cin>>in;
        time.push_back(in);
    }
    int min=10; int min_index=0;
    for(int i=0;i<5;i++){
        reminder.push_back(time[i]%10);
        if(reminder[i]<min){
            min=reminder[i];
            min_index=i;
        }
    }
    int res=0;
    for(int i=0;i<5;i++){
        if(i==min_index)
            res+=time[i];
        else if(reminder[i]==0)
            res+=time[i];
        else res+=time[i]+10-reminder[i];
    }
    
    cout<<res<<endl;
    
    return 0;
}