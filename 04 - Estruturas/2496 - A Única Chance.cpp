#include <iostream>

using namespace std;

void teste(char text[], int n){
    int oc = 0;
    for(int i = 0; i < n; ++i){
        if(text[i]-'A' != i) oc++;
    }
    if(oc == 2 || oc == 0){
        cout << "There are the chance.\n";
    }else {
        cout << "There aren't the chance.\n";
    }
}

int main(){
    int n, l;
    char t[27];
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> l >> t;
        teste(t, l);
    }
    return 0;
}