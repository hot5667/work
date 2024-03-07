#include <iostream>

void arrsort(int(&arr)[10])
{
	for (int j = 0; j < 9; ++j)
	{
		bool bSwap = false;

		for (int i = 0; i < (9 - j); ++i)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[0];
				arr[0] = arr[i + 1];
				arr[i + 1] = temp;

				// swap 과정 코드

				bSwap = true;
			}
		}

		if (false == bSwap)
		{
			break;
		}
	}
}

int main()
{
	int arrtest[10] = { 56,78,1,45,99,67,2,27,10,9 };

	arrsort(arrtest);
}