/*2���ֱ����� 0.2, 1, 5 , 0,�۲���������
*/
#include <iostream>
using namespace std;
double calculate(double x) {
    if (0 < x && x < 1) {
        return 3 - 2 * x;
    }
    else if (1<= x < 5) {
        return 2 / (4 * x) + 1;
    }
    else if (5 <= x && x < 10) {
        return x * x;
    }
    else {
        cout << "����� x ֵ������Ч��Χ��" << endl;
        return 0;
    }
}
int main() {
    double x;
    cout << "������ x ��ֵ: ";
    cin >> x;
    double y = calculate(x);
    cout << "������ y Ϊ: " << y << endl;
    return 0;
}