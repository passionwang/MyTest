//#include<iostream>
//using namespace std;
//
//void Reverse(char* pBegin,char* pEnd)
//{
//	if(NULL == pBegin || NULL == pEnd || pBegin == pEnd)
//		return ;
//
//	char ch;
//	while(pBegin<pEnd)
//	{
//		ch = *pBegin;
//		*pBegin = *pEnd;
//		*pEnd = ch;
//
//		++pBegin;
//		--pEnd;
//	}
//}
//
//char* LeftReverse(char* pStr,int n)
//{
//	if(NULL == pStr) return NULL;
//	if(n<1 || n >= static_cast<int>(strlen(pStr))) return pStr;
//
//	char* pBegin1 = pStr;
//	char* pEnd1 = pStr + n - 1;
//	char* pBegin2 = pStr + n;
//	char* pEnd2 = pStr + strlen(pStr) - 1;
//
//	Reverse(pBegin1,pEnd1);
//	Reverse(pBegin2,pEnd2);
//	Reverse(pBegin1,pEnd2);
//
//	return pStr;
//}
//// ====================²âÊÔ´úÂë====================
//void Test(char* testName, char* input, int num, char* expectedResult)
//{
//    if(testName != NULL)
//        printf("%s begins: ", testName);
//
//    char* result = LeftReverse(input, num);
//
//    if((input == NULL && expectedResult == NULL)
//        || (input != NULL && strcmp(result, expectedResult) == 0))
//        printf("Passed.\n\n");
//    else
//        printf("Failed.\n\n");
//}
//
//// ¹¦ÄÜ²âÊÔ
//void Test1()
//{
//    char input[] = "abcdefg";
//    char expected[] = "cdefgab";
//
//    Test("Test1", input, 2, expected);
//}
//
//// ±ß½çÖµ²âÊÔ
//void Test2()
//{
//    char input[] = "abcdefg";
//    char expected[] = "bcdefga";
//
//    Test("Test2", input, 1, expected);
//}
//
//// ±ß½çÖµ²âÊÔ
//void Test3()
//{
//    char input[] = "abcdefg";
//    char expected[] = "gabcdef";
//
//    Test("Test3", input, 6, expected);
//}
//
//// Â³°ôĞÔ²âÊÔ
//void Test4()
//{
//    Test("Test4", NULL, 6, NULL);
//}
//
//// Â³°ôĞÔ²âÊÔ
//void Test5()
//{
//    char input[] = "abcdefg";
//    char expected[] = "abcdefg";
//
//    Test("Test5", input, 0, expected);
//}
//
//// Â³°ôĞÔ²âÊÔ
//void Test6()
//{
//    char input[] = "abcdefg";
//    char expected[] = "abcdefg";
//
//    Test("Test6", input, 7, expected);
//}
//
//int main(int argc, char* argv[])
//{
//    Test1();
//    Test2();
//    Test3();
//    Test4();
//    Test5();
//    Test6();
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