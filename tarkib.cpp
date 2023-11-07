#include <iostream>
using namespace std;
int combination(int n, int m) {
    if (m == 0 || m == n)
        return 1;
        return combination(n - 1, m - 1) + combination(n - 1, m);
}
int main() {
    int n, m;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> m;
    cout << "The combination of " << n << " and " << m << " is : " << combination(n, m) << endl;
    return 1;
}

