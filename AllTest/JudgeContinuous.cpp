#include<iostream>
using namespace std;


void Sort(int* pArr,int nLen)
{
	if(NULL == pArr || nLen<1) return;
	for(int i=0;i<nLen-1;++i)
	{
		for(int j=0;j<nLen-1-i;++j)
		{
			if(pArr[j]>pArr[j+1])
			{
				pArr[j] = pArr[j]^pArr[j+1];
				pArr[j+1] = pArr[j]^pArr[j+1];
				pArr[j] = pArr[j]^pArr[j+1];
			}
		}
	}
}

bool IsContinuous(int* pArr,int nLen)
{
	if(NULL == pArr || nLen<1) return false;

	Sort(pArr,nLen);

	int nCount0 = 0;
	for(int i=0;i<nLen;++i)
	{
		if(0 == pArr[i])
			++nCount0;
		else
			break;
	}

	int nSum = 0;

	int nLast = nLen-1;

	for(int i=nLast;i>=1+nCount0;--i)
	{
		if(pArr[i] == pArr[i-1])
			return false;
		nSum += pArr[i] - pArr[i-1] - 1;
	}
	if(nSum>nCount0)
		return false;
	return true;
}
// ====================测试代码====================
void Test(char* testName, int* numbers, int length, bool expected)
{
    if(testName != NULL)
        printf("%s begins: ", testName);

    if(IsContinuous(numbers, length) == expected)
        printf("Passed.\n");
    else
        printf("Failed.\n");
}

void Test1()
{
    int numbers[] = {1, 3, 2, 5, 4};
    Test("Test1", numbers, sizeof(numbers) / sizeof(int), true);
}

void Test2()
{
    int numbers[] = {1, 3, 2, 6, 4};
    Test("Test2", numbers, sizeof(numbers) / sizeof(int), false);
}

void Test3()
{
    int numbers[] = {0, 3, 2, 6, 4};
    Test("Test3", numbers, sizeof(numbers) / sizeof(int), true);
}

void Test4()
{
    int numbers[] = {0, 3, 1, 6, 4};
    Test("Test4", numbers, sizeof(numbers) / sizeof(int), false);
}

void Test5()
{
    int numbers[] = {1, 3, 0, 5, 0};
    Test("Test5", numbers, sizeof(numbers) / sizeof(int), true);
}

void Test6()
{
    int numbers[] = {1, 3, 0, 7, 0};
    Test("Test6", numbers, sizeof(numbers) / sizeof(int), false);
}

void Test7()
{
    int numbers[] = {1, 0, 0, 5, 0};
    Test("Test7", numbers, sizeof(numbers) / sizeof(int), true);
}

void Test8()
{
    int numbers[] = {1, 0, 0, 7, 0};
    Test("Test8", numbers, sizeof(numbers) / sizeof(int), false);
}

void Test9()
{
    int numbers[] = {3, 0, 0, 0, 0};
    Test("Test9", numbers, sizeof(numbers) / sizeof(int), true);
}

void Test10()
{
    int numbers[] = {0, 0, 0, 0, 0};
    Test("Test10", numbers, sizeof(numbers) / sizeof(int), true);
}

// 有对子
void Test11()
{
    int numbers[] = {1, 0, 0, 1, 0};
    Test("Test11", numbers, sizeof(numbers) / sizeof(int), false);
}

// 鲁棒性测试
void Test12()
{
    Test("Test12", NULL, 0, false);
}

int main(int argc, char* argv[])
{
    Test1();
    Test2();
    Test3();
    Test4();
    Test5();
    Test6();
    Test7();
    Test8();
    Test9();
    Test10();
    Test11();
    Test12();
	system("pause");
    return 0;
}
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}