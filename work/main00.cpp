#include <iostream>

void arrsort(int(&arr)[10])
{

	for (int i = 0; i < 9; ++i)
	{
		if (arr[i] > arr[i + 1])
		{
			int temp = arr[0];
			arr[0] = arr[i + 1];
			arr[i + 1] = temp;

			// swap 과정 코드
		}
	}
}

int main()
{

}