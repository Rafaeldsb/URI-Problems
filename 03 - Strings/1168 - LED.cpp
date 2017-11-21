#include <iostream>

using namespace std;

int main(){
    char L[10]{6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    int n;
    char l[101];
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> l;
        //scanf(" %s", l);
        //setbuf(stdin, 0);
        char j;
        int s = 0;
        for(j = 0; l[j] != '\0'; ++j){
            s += L[l[j]-'0'];
        }
        cout << s << " leds\n";
    }


    return 0;
}