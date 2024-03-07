#include <iostream>

// 구조체(struct) - user Define DataType
// 클래스(class) 

struct MyDataType //12바이트 인 이유 제일 큰 바이트 단위 로 계산 하기 떄문에 12바이트 으로 확인이 된다.
{
	float f;
	int i;
	short s;
};


int main()
{
	MyDataType t;
	t.f;
	t.i;

	MyDataType kkk;
	kkk.f;
	kkk.i;
	
	

	return 0;
}