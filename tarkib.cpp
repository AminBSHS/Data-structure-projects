#include <iostream>
using namespace std;
int combination(int n ,int  m)
{
    if(n = m , m = 0)
    return 1 ;
    return combination(n-1 , m-1) + combination (n-1, m);

}
int main()
{
    int n , m , result;
    cout << "Enter n :" << endl;
    cin >> n ;
    cout << "enter m :" << endl;
    cin >> m ;
    cout << "your combination is : " << combination(n , m);

}
