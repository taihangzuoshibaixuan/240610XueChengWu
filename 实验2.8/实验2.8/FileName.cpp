#include<iostream>
using namespace std;
float gen(float x, float y)
{
	float b;
	b = (y + x / y) / 2;
	if (abs(b - y) < 0.00001)
		return b;
	else
		return gen(x, b);
}
int main()
{
	float a, x1;
	cin >> a;
	if (a >= 0)
	{
		x1 = gen(a, a);
		cout << "��ƽ����Ϊ��" << x1 << endl;
	}
	else
	{
		x1 = gen(abs(a), abs(a));
		cout << "��ƽ����Ϊ��" << x1 << "i" << endl;
	}
	return 0;
}