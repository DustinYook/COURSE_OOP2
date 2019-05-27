// ���α׷� ����:
// �޸� >> �ȵǴ� ��� �غ��� (�̷а����ڷ� ����)
#include <iostream>
#include <cstdlib> // abort(), exit()�� ���� ���
#include <stdexcept> 
#include <memory>
using namespace std;

class Integer
{
public: 
	Integer(int i = 0); 
	~Integer();
	void setInteger(int i);
	int getInteger() const;
private:
	int value;
};

Integer::Integer(int i): value(i)
{
	cout << "Constructor for Integer " << value << endl;
}

Integer::~Integer()
{
	cout << "Destructor for Integer " << value << endl;
}

void Integer::setInteger(int i)
{
	value = i;
}

int Integer::getInteger() const
{
	return value;
}

int main(void)
{
	cout << "Creating a unique_ptr object that points to an Integer" << endl;
	unique_ptr<Integer>ptrToInteger(new Integer(7)); // unique_ptr�� ����

	cout << "Using the unique ptr to manipulate the Integer" << endl;
	// unique_ptr<Integer>ptrToInteger(99); // �� ������� ���� �� ������ �� ����
	ptrToInteger->setInteger(99); // ����Լ��� ���ؼ��� ���� ������ �� ������ ����
	// (*ptrToInteger).setInteger(99); // ���� ���� ��� ȣ��

	cout << "Integer after setInteger: " << (*ptrToInteger).getInteger() << endl;
	// cout << "Integer after setInteger: " << ptrToInteger->getInteger() << endl; // ���� ���� ��� ȣ��
	cout << "Terminate the program" << endl;
	return 0;
}
// auto_ptr�� �ּҸ� ��������, unique_ptr�� �ּҸ� ������ �� ����(������ �ּ�)