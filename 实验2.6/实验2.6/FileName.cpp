#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "������������������";
    cin >> a >> b;
    int tempA = a;
    int tempB = b;
    // �����Լ��
    while (tempB != 0) {
        int temp = tempB;
        tempB = tempA % tempB;
        tempA = temp;
    }
    int gcdValue = tempA;
    // ����С������
    int lcmValue = a * b / gcdValue;
    cout << "���Լ���ǣ�" << gcdValue << endl;
    cout << "��С�������ǣ�" << lcmValue << endl;
    return 0;
}