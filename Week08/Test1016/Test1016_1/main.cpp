#include "rectangle.h"

int main(void)
{
	Rectangle r(7,5); // �����ڿ� (7,5)���� // ȣ�����: �θ������ -> �ڽĻ����� -> �ڽļҸ��� -> �θ�Ҹ���
	cout << r.getArea() << endl;
	r.setWidth(9); // width�� 9�� ���� // �θ�Ŭ������ �Լ��� ȣ��
	r.setHeight(11); // height�� 11�� ���� // �θ�Ŭ������ �Լ��� ȣ��
	cout << r.getArea() << endl;
	return 0;
}