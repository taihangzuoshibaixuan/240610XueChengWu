/*1������һ���ַ������ΪСд��ת��Ϊ��д�����������������ַ���ASCII��ֵ��*/
#include <iostream>
using namespace std;
int main() {
    char ch;  // �������ڴ洢�����ַ��ı���
    cout << "������һ���ַ�: ";
    cin >> ch;  // �Ӽ��̻�ȡ�ַ�
    if (ch >= 'a' && ch <= 'z') {  // 1. �ж��Ƿ�ΪСд
        ch -= 32;  // ��Сдת��Ϊ��д
        cout << ch << endl;
    }
    else {  // 2. ����Сд
        int asciiCode = (int)ch + 1;  // �������ַ��� ASCII ��
        cout << asciiCode << endl;
    }
    return 0;
}