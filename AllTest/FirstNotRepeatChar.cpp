//#include<iostream>
//
//using namespace std;
//
//#define MaxLen 256
//bool g_IsHave = true;
//
//char FindFirstNotRepeatChar(char* pStr)
//{
//	if(NULL == pStr) 
//	{
//		g_IsHave = false;
//		return NULL;
//	}
//
//	int* pNew = new int[MaxLen];
//	memset(pNew,0,MaxLen*sizeof(int));
//
//	for(int i=0;i<strlen(pStr);++i)
//		++pNew[pStr[i]];
//	for(int i=0;i<strlen(pStr);++i)
//	{
//		if(1 == pNew[pStr[i]])
//			return pStr[i];
//	}
//	g_IsHave = false;
//	return NULL;
//}
//// ====================���Դ���====================
//void Test(char* pString, char expected)
//{
//    if(FindFirstNotRepeatChar(pString) == expected)
//        printf("Test passed.\n");
//    else
//        printf("Test failed.\n");
//}
//
//int main(int argc, char* argv[])
//{
//    // ����������ԣ�����ֻ����һ�ε��ַ�
//    Test("google", 'l');
//
//    // ����������ԣ�������ֻ����һ�ε��ַ�
//    Test("aabccdbd", '\0');
//
//    // ����������ԣ������ַ���ֻ����һ��
//    Test("abcdefg", 'a');
//
//    // ³���Բ��ԣ�����NULL
//    Test(NULL, '\0');
//	system("pause");
//    return 0;
//}
//
//
////int main()
////{
////
////
////	system("pause");
////	return 0;
////}