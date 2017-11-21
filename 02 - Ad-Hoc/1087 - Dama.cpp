#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int x, x1, y, y1;
    while(1){
        cin >> x >> y >> x1 >> y1;
        if((x+x1+y+y1) == 0) break;

        if(x == x1 && y == y1) {
            cout << 0 << endl;
        } else if( abs( (x - x1) * 1.0 / (y - y1) ) == 1  || (x-x1)==0 || (y-y1)==0) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
    return 0;
}