#include <iostream>

using namespace std;

int main(){
    int n, m, s;
    while(1){
        cin >> n >> m;
        
        if(n <= 0 || m <= 0)
            break;

        s = 0;
        int l = n < m ? m : n;
        for(int i = (n < m ? n : m); i <= l; ++i){
            cout << i << " ";
            s += i;
        }
        cout << "Sum=" << s << endl; 
    }
    return 0;
}