#include <iostream>

using namespace std;

int f(int* mass, int i, int n) {

    if (i < n)
        return mass[i] * f(mass, i + 1, n);
    else
        return 1;


}

int main() {

    int n;
    cin >> n;
    int* mass = new int[n];

    for (int i = 0; i < n; i++)
        cin >> mass[i];

    cout << f(mass, 0, n);

}
