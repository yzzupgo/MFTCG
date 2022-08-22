#include <iostream>
#include <algorithm>

#define debug 0

using namespace std;

int main() {
    int time[6], sum=0, count=0;
    for(int I=0; I<5; I++) {
        cin>>time[I];
        if(time[I]%10) {
            sum+=(time[I]/10)*10;
            time[I]=time[I]%10;
            count++;
        }
        else {
            sum+=time[I];
            time[I]=1000;
        }
    }

    if(debug) cout<<"SUM= "<<sum<<endl;

    int Min=*min_element(time, time+5);

    if(debug) cout<<"MIN= "<<Min<<endl;

    int ind=min_element(time, time+5)-&time[0];

    if(debug) cout<<"MIN IND="<<ind<<endl;

    swap(time[ind],time[0]);

    if(Min!=1000)
        cout<<time[0]+sum+(count-1)*10;
    else
        cout<<sum;
}