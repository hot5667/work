#include <iostream>

// 메모리 정렬 규칙을 최소단위인 1바이트로 고정
#pragma pack(1)

// 구조체(struct) - 사용자 정의 자료형 user Define DataType
// 클래스(class) 
// 멤버를 구성해서 더 큰 단위의 자료형을 설계할 수 있음
// 멤버를 나열하는 순서로 메모리상에 존재하기 때문에, 크기를 최적화 하기위해서, 큰 자료형 에서 작은 자료형 순서로 정리 하는게 좋다.
// 자료형 크기순으로 정렬된 형태로 나열하는것이 메모리 효울 측면에서 좋다.

struct MyDataType // 12바이트 인 이유 제일 큰 바이트 단위 로 계산 하기 떄문에 12바이트 으로 확인이 된다.
{
	char c;
	short s;
	int i;
	float f;
	long long ll;
};

// 자료형으로 다시 더큰 자료형을 만들 수도 있다.
struct MyBiigerDataType 
{
	MyBiigerDataType type;
	int a;
	float f;
};


int main()
{
	MyDataType t = {}; // 초기화
	MyDataType t1 = { 0,2,100, }; //초기화 

	t1.i = 20; // 대입

	return 0;
}