#include <iostream>
using namespace std;
int main() {
    int letterCount = 0;  // ����ͳ��Ӣ����ĸ�ĸ���
    int spaceCount = 0;   // ����ͳ�ƿո�ĸ���
    int digitCount = 0;   // ����ͳ�������ַ��ĸ���
    int otherCount = 0;   // ����ͳ�������ַ��ĸ���
    char c;
    while ((c = getchar()) != '\n') {  // ѭ�������ַ���ֱ�������س����з�
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {  // �����Ӣ����ĸ
            letterCount++;
        }
        else if (c == ' ') {  // ����ǿո�
            spaceCount++;
        }
        else if (c >= '0' && c <= '9') {  // ���������
            digitCount++;
        }
        else {  // �������
            otherCount++;
        }
    }
    // ���ͳ�ƽ��
    cout << "Ӣ����ĸ�ĸ���: " << letterCount << endl;
    cout << "�ո�ĸ���: " << spaceCount << endl;
    cout << "�����ַ��ĸ���: " << digitCount << endl;
    cout << "�����ַ��ĸ���: " << otherCount << endl;
    return 0;
}