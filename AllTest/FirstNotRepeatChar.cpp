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
//// ====================测试代码====================
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
//    // 常规输入测试，存在只出现一次的字符
//    Test("google", 'l');
//
//    // 常规输入测试，不存在只出现一次的字符
//    Test("aabccdbd", '\0');
//
//    // 常规输入测试，所有字符都只出现一次
//    Test("abcdefg", 'a');
//
//    // 鲁棒性测试，输入NULL
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