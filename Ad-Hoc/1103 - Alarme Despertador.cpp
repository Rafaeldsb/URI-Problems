#include <iostream>

using namespace std;

int calculateMinute(int h1, int m1, int h2, int m2);

int main(){
    int h1, m1, h2, m2;
    while(1){
        cin >> h1 >> m1 >> h2 >> m2;
        if((h1+h2+m1+m2) == 0) break;

        cout << calculateMinute(h1, m1, h2, m2) << endl;
    }
    return 0;
}

int calculateMinute(int h1, int m1, int h2, int m2){
    int min1 = 0, min2 = 0;

    min1 = h1*60 + m1;
    if(h1 > h2 || (h1 == h2 && m1 > m2)){
        min2 = (h2+24)*60 + m2;
    } else {
        min2 = h2*60 + m2;
    }

    return min2 - min1;
}