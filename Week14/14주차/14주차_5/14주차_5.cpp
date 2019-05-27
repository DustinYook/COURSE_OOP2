// 프로그램 설명: 템플릿함수와 템플릿클래스의 정의와 사용
// 메모: Template Class != Class Template
#include <iostream>
using namespace std;

// 1-1) 템플릿함수 정의
template <typename T>
T max(T arg1, T arg2)
{
	return (arg1 > arg2) ? arg1 : arg2;
}
template <typename S>
S min(S arg1, S arg2)
{
	return (arg1 < arg2) ? arg1 : arg2;
}

// 2-1) 템플릿클래스 정의
template <class C>
class Compare
{
public: 
	Compare(C a, C b) :x(a), y(b) { }
	C max() { return (x > y) ? x : y; }
	C min() { return (x < y) ? x : y; }
private:
	C x, y;
};

int main(void)
{
	// 1-2) 템플릿 함수 사용
	cout << "1) 템플릿함수의 사용" << endl;
	cout << max(3, 7) << " > " << min(3, 7) << endl; // 컴파일러에서 자동적으로 T max<int, int>의 형식으로 호출함
	cout << max(45.78, 93.6) << " > " << min(45.78, 93.6) << endl;
	cout << max('a', 'b') << " > " << min('a', 'b') << endl << endl;
	
	// 2-2) 템플릿 클래스 사용
	cout << "2) 템플릿클래스의 사용" << endl;
	Compare<int>cmp1(3, 7);
	cout << cmp1.max() << " > " << cmp1.min() << endl;
	Compare<double>cmp2(45.78, 93.6);
	cout << cmp2.max() << " > " << cmp2.min() << endl;
	Compare<char>cmp3('a', 'b');
	cout << cmp3.max() << "  > " << cmp3.min() << endl;
	return 0;
}