#include <iostream>

int main() {
    double a, b, c;
    std::cout << "�������һ���ߵĳ���: ";
    std::cin >> a;
    std::cout << "������ڶ����ߵĳ���: ";
    std::cin >> b;
    std::cout << "������������ߵĳ���: ";
    std::cin >> c;
    // �����ж����������ܷ񹹳�������
    // ��������������֮�ʹ��ڵ�����
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        // �����ܳ�
        double perimeter = a + b + c;
        std::cout << "�����ε��ܳ�Ϊ: " << perimeter << std::endl;
        // �ж��Ƿ�Ϊ����������
        if ((a == b) || (a == c) || (b == c)) {
            std::cout << "���������ǵ���������" << std::endl;
        }
        else {
            std::cout << "�������β��ǵ���������" << std::endl;
        }
    }
    else {
        std::cout << "�������߲��ܹ���������" << std::endl;
    }
    return 0;
}