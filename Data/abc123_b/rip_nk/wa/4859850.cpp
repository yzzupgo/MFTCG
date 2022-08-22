#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int times[5] = {0,0,0,0,0};
    for(int i = 0; i < 5; i++){
        cin >> times[i];
    }

    int mintime = 124;
    int pastTime = 0;
    for(int i = 0; i < 5; i++){
        if(mintime > times[i]){
            mintime = times[i];
        }
        pastTime += (times[i] / 10)*10;
        if(times[i] % 10 != 0){
            pastTime += 10;
        }
    }

    cout << pastTime + mintime << endl;

    return 0;
}
