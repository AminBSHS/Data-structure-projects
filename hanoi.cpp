#include <iostream>
using namespace std;

void hanoi(int n, char origin , char ancillary , char destination) {
    if (n == 1) {
        cout << "Move disk 1 from " << origin  << " to " << destination << endl;
        return;
    }
    hanoi(n-1, origin , destination , ancillary);
    cout << "Move disk " << n << " from " << origin  << " to " << destination << endl;
    hanoi(n-1, ancillary, origin ,destination );
}
int main() {
    int number_disks;
    cout << "Enter the number of disks: ";
    cin >> number_disks;
    hanoi(number_disks, 'A', 'B', 'C');
    return 0;
}

