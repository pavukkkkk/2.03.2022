#include <iostream>
#include <cmath>
using namespace std;



template <typename x> x* f(int n){
    x* m = new x [n];
        for (int i = 0; i < n; i++) {
            cin >> m[i];
        }
    
    return m;
}
int main(){
    int n;
    cin>>n;
    int *m= f<int>(n);
}

