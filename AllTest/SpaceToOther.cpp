#include<iostream>
using namespace std;

void ReplaceStr(char* str,int nLen)
{
	if(NULL == str) return;
	int nCountSpace = 0;
	char* pEnd = str;
	while(* pEnd != '\0')
	{
		if(' ' == *pEnd)
			++nCountSpace;
		++pEnd;
	}
	if(0 == nCountSpace || strlen(str) + 2 * nCountSpace > nLen) return;
	//char* pTemp = new char[nLen + 1 + 2 * nCountSpace];
	char* pEndNow = str + strlen(str) + 2 * nCountSpace;
	while(str <= pEnd)
	{
		if(' ' == *pEnd)
		{
			*pEndNow-- = '0';
			*pEndNow-- = '2';
			*pEndNow-- = '%';
		}
		else
			*pEndNow-- = *pEnd;
		--pEnd;
	}
}
void Test(char* testName, char string[], int length, char expected[])
{
    if(testName != NULL)
        printf("%s begins: ", testName);

    ReplaceStr(string, length);

    if(expected == NULL && string == NULL)
        printf("passed.\n");
    else if(expected == NULL && string != NULL)
        printf("failed.\n");
    else if(strcmp(string, expected) == 0)
        printf("passed.\n");
    else
        printf("failed.\n");
}

// 空格在句子中间
void Test1()
{
    const int length = 100;

    char string[length] = "hello world";
    Test("Test1", string, length, "hello%20world");
}

// 空格在句子开头
void Test2()
{
    const int length = 100;

    char string[length] = " helloworld";
    Test("Test2", string, length, "%20helloworld");
}

// 空格在句子末尾
void Test3()
{
    const int length = 100;

    char string[length] = "helloworld ";
    Test("Test3", string, length, "helloworld%20");
}

// 连续有两个空格
void Test4()
{
    const int length = 100;

    char string[length] = "hello  world";
    Test("Test4", string, length, "hello%20%20world");
}

// 传入NULL
void Test5()
{
    Test("Test5", NULL, 0, NULL);
}

// 传入内容为空的字符串
void Test6()
{
    const int length = 100;

    char string[length] = "";
    Test("Test6", string, length, "");
}

//传入内容为一个空格的字符串
void Test7()
{
    const int length = 100;

    char string[length] = " ";
    Test("Test7", string, length, "%20");
}

// 传入的字符串没有空格
void Test8()
{
    const int length = 100;

    char string[length] = "helloworld";
    Test("Test8", string, length, "helloworld");
}

// 传入的字符串全是空格
void Test9()
{
    const int length = 100;

    char string[length] = "   ";
    Test("Test9", string, length, "%20%20%20");
}

int main()
{
	/*char* str = new char[100];
	strcpy(str,"we are very happy!");
	ReplaceStr(&str,strlen(str));
	cout<<str<<endl;*/
	Test1();
    Test2();
    Test3();
    Test4();
    Test5();
    Test6();
    Test7();
    Test8();
    Test9();
	system("pause");
	return 0;
}