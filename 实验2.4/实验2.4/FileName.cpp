#include <iostream>
double calculate(double num1, double num2, char op) {
    switch (op) {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        if (num2 != 0) {
            return num1 / num2;
        }
        else {
            std::cout << "��������Ϊ 0" << std::endl;
            return -1;
        }
    default:
        std::cout << "�Ƿ������" << std::endl;
        return -1;
    }
}
int main() {
    double num1, num2;
    char op;
    std::cout << "�������һ����: ";
    std::cin >> num1;
    std::cout << "����������� (+ - * /): ";
    std::cin >> op;
    std::cout << "������ڶ�����: ";
    std::cin >> num2;
    double result = calculate(num1, num2, op);
    if (result != -1) {
        std::cout << "���Ϊ: " << result << std::endl;
    }
    return 0;
}