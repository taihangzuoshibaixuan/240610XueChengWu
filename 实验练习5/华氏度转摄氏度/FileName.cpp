#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double f; 
    cout << "�����뻪�϶�: ";
    cin >> f; 
    double c = (f - 32) * 5.0 / 9.0; 
    cout << "ת��������϶�Ϊ: " << fixed << setprecision(2) << c << endl;

    return 0;
}