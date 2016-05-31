#include<iostream>
using namespace std;

void Reverse(char* pBegin,char* pEnd)
{
	if(NULL == pBegin || NULL == pEnd || pBegin == pEnd) return;

	char ch;
	while(pBegin<pEnd)
	{
		ch = *pBegin;
		*pBegin = *pEnd;
		*pEnd = ch;

		++pBegin;
		--pEnd;
	}
}

char* ReverseSentence(char* pSentence)
{
	if(NULL == pSentence) return NULL;

	char* pBegin = pSentence;
	char* pEnd = pSentence + strlen(pSentence) - 1;

	Reverse(pBegin,pEnd);

	pEnd = pBegin + 1;
	while(*pBegin != '\0')
	{
		if(*pBegin == ' ')
		{
			++pBegin;
			++pEnd;
		}
		else if(*pEnd == ' ' || *pEnd == '\0')
		{
			Reverse(pBegin,pEnd-1);
			if(*pEnd == '\0')
				return pSentence;
			else
			{
				pBegin = pEnd+1;
				pEnd = pBegin+1;
			}
		}
		else
			++pEnd;
	}
	return pSentence;
}

// ====================���Դ���====================
void Test(char* testName, char* input, char* expectedResult)
{
    if(testName != NULL)
        printf("%s begins: ", testName);

    ReverseSentence(input);

    if((input == NULL && expectedResult == NULL)
        || (input != NULL && strcmp(input, expectedResult) == 0))
        printf("Passed.\n\n");
    else
        printf("Failed.\n\n");
}

// ���ܲ��ԣ��������ж������
void Test1()
{
    char input[] = "I am a student.";
    char expected[] = "student. a am I";

    Test("Test1", input, expected);
}

// ���ܲ��ԣ�������ֻ��һ������
void Test2()
{
    char input[] = "Wonderful";
    char expected[] = "Wonderful";

    Test("Test2", input, expected);
}

// ³���Բ���
void Test3()
{
    Test("Test3", NULL, NULL);
}

// �߽�ֵ���ԣ����Կ��ַ���
void Test4()
{
    Test("Test4", "", "");
}

// �߽�ֵ���ԣ��ַ�����ֻ�пո�
void Test5()
{
    char input[] = "   ";
    char expected[] = "   ";
    Test("Test5", input, expected);
}

int main(int argc, char* argv[])
{
    Test1();
    Test2();
    Test3();
    Test4();
    Test5();
	system("pause");
    return 0;
}

//
//int main()
//{
//	
//
//
//	system("pause");
//	return 0;
//}