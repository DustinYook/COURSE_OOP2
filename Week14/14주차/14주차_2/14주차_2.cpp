// 프로그램 설명:
// 메모 >> 안되는 경우 해보기 (이론강의자료 참고)
#include <iostream>
#include <cstdlib> // abort(), exit()을 위한 헤더
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
	unique_ptr<Integer>ptrToInteger(new Integer(7)); // unique_ptr의 선언

	cout << "Using the unique ptr to manipulate the Integer" << endl;
	// unique_ptr<Integer>ptrToInteger(99); // 이 방식으로 직접 값 변경할 수 없음
	ptrToInteger->setInteger(99); // 멤버함수를 통해서만 값을 수정할 수 있음에 유의
	// (*ptrToInteger).setInteger(99); // 위와 같은 방식 호출

	cout << "Integer after setInteger: " << (*ptrToInteger).getInteger() << endl;
	// cout << "Integer after setInteger: " << ptrToInteger->getInteger() << endl; // 위와 같은 방식 호출
	cout << "Terminate the program" << endl;
	return 0;
}
// auto_ptr은 주소를 공유가능, unique_ptr은 주소를 공유할 수 없음(유일한 주소)