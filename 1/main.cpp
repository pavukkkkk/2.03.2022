#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
void rec(int n,int m){
    char s='1';
    if (n>1){
    if (m%2==0){
        s='0';
    }
    for (int i=m; i>=0; i--){
        cout<<s;
    
    }
    
cout<<endl;
    
        

            rec(n-1,m+1);
        }

    for (int i=m; i>=0; i--){
        cout<<s;
    
    }

cout<<endl;
    
}
void rec(int n)
{
    rec(n,0);
}
int main() {
rec(4);
}
