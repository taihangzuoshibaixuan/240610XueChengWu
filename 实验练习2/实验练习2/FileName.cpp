/*2.��Բ׶�������Ҫ���������Բ׶�׵İ뾶��׶�ߣ�ʹ�ñ�ʶ����������Բ���ʡ�
(1)����һ������̨��Ŀ 
(2)���ļ�������������ݣ����� 
(3)���롢���ӡ����У��۲���
*/
#include <iostream>
using namespace std;
const double PI = 3.14159;  // ����Բ����Ϊ����
int main() {
    double radius, height;  // �������ڴ洢Բ׶����뾶�͸ߵı���
    cout << "������Բ׶����İ뾶: ";
    cin >> radius;  // �Ӽ��̻�ȡԲ׶����뾶
    cout << "������Բ׶�ĸ�: ";
    cin >> height;  // �Ӽ��̻�ȡԲ׶�ĸ�
    double volume = PI * radius * radius * height / 3;  // ����Բ׶����Ĺ�ʽ��V = 1/3 * �� * r^2 * h
    cout << "Բ׶�������: " << volume << endl;  // ���Բ׶�����
    return 0;
}