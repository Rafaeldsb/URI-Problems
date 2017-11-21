#include <iostream>

using namespace std;

char conv(char l, int r){
    if(l- r < 'A'){
        return ('Z' - ('A' - (l-r)) +1);
    } else {
        return l - r;
    }
}

int main(){
    int n, r;
    char L[51];

    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> L >> r;
        for(int j = 0; L[j] != '\0'; ++j){
            cout << conv(L[j], r); 
        }
        cout << "\n";
    }
    return 0;
}
