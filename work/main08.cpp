#include <iostream>

// �޸� ���� ��Ģ�� �ּҴ����� 1����Ʈ�� ����
#pragma pack(1)

// ����ü(struct) - ����� ���� �ڷ��� user Define DataType
// Ŭ����(class) 
// ����� �����ؼ� �� ū ������ �ڷ����� ������ �� ����
// ����� �����ϴ� ������ �޸𸮻� �����ϱ� ������, ũ�⸦ ����ȭ �ϱ����ؼ�, ū �ڷ��� ���� ���� �ڷ��� ������ ���� �ϴ°� ����.
// �ڷ��� ũ������� ���ĵ� ���·� �����ϴ°��� �޸� ȿ�� ���鿡�� ����.

struct MyDataType // 12����Ʈ �� ���� ���� ū ����Ʈ ���� �� ��� �ϱ� ������ 12����Ʈ ���� Ȯ���� �ȴ�.
{
	char c;
	short s;
	int i;
	float f;
	long long ll;
};

// �ڷ������� �ٽ� ��ū �ڷ����� ���� ���� �ִ�.
struct MyBiigerDataType 
{
	MyBiigerDataType type;
	int a;
	float f;
};


int main()
{
	MyDataType t = {}; // �ʱ�ȭ
	MyDataType t1 = { 0,2,100, }; //�ʱ�ȭ 

	t1.i = 20; // ����

	return 0;
}