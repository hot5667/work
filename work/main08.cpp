#include <iostream>

// ����ü(struct) -����� ���� �ڷ��� user Define DataType
// Ŭ����(class) 
// ����� �����ؼ� �� ū ������ �ڷ����� ������ �� ����
// ����� �����ϴ� ������ �޸𸮻� �����ϱ� ������, ũ�⸦ ����ȭ �ϱ����ؼ�, ū �ڷ��� ���� ���� �ڷ��� ������ ���� �ϴ°� ����.
// �ڷ��� ũ������� ���ĵ� ���·� �����ϴ°��� �޸� ȿ�� ���鿡�� ����.

struct MyDataType //12����Ʈ �� ���� ���� ū ����Ʈ ���� �� ��� �ϱ� ������ 12����Ʈ ���� Ȯ���� �ȴ�.
{
	char c;
	short s;
	int i;
	float f;
	long long ll;
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