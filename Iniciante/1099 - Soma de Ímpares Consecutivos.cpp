#include <iostream>

using namespace std;

int main(){

    int n, x, y;

    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x >> y;
        int s = 0;
        int l = (x < y ? y : x);
        for(int k = (x < y ? x : y) + ((x < y ? x : y)%2 == 0 ? 1 : 2); k < l; k+=2){
            s += k;
        }
        cout << s << endl;
    }


    return 0;
}