#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
using namespace std;

int main(){
    int totSecs, hour, min, secs;

    cout << "inserir valor do tempo (em segundos)" << endl;
    cin >> totSecs;
    
    hour = totSecs / 3600;
    min = (totSecs % 3600) / 60;
    secs = totSecs % 60;

    cout << "hora total = " << hour << ":" << min << ":" << secs << endl;

    return 0;
}