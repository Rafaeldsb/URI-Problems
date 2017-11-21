#include <iostream>

using namespace std;

int main(){

    int x, y;
    int n;

    while(1){
        cin >> n;
        if(n == 0) break;
        for(int i = 0; i < n; ++i){
            y = -1;
            for(int j = 0; j < 5; ++j){
                cin >> x;
                if(x <= 127){
                    if(y == -1) y = j;
                    else y = -2;
                }
            }
            cout << (char)(y >= 0 ? 'A'+y : '*') << endl;
        }       
    }
    return 0;
}