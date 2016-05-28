//#include<iostream>
//#include<string.h>
//using namespace std;
//
//int PowerBase(int exponent)
//{
//	if(exponent < 0) return 0;
//
//	int num = 1;
//	for(int i=0;i<exponent;++i)
//		num *= 10;
//	return num;
//}
//
//int NumberOf1(char* pStr)
//{
//	if(NULL == pStr) return 0;
//
//	int first = *pStr - '0';
//	int lenght = static_cast<int>(strlen(pStr));
//	if(lenght == 1 && first == 0)
//		return 0;
//	if(lenght == 1 && first>=1)
//		return 1;
//
//	int NumberOfFirst = 0;
//	if(first > 1)
//		NumberOfFirst = PowerBase(lenght-1);
//	else if(first == 1)
//		NumberOfFirst = atoi(pStr+1) + 1;
//
//	int NumberOfOther = first * (lenght-1) * PowerBase(lenght-2);
//
//	int NumberOfZero = NumberOf1(pStr+1);
//
//	return NumberOfFirst + NumberOfOther + NumberOfZero;
//}
//
//int NumberOf1(int num)
//{
//	if(num<1) return 0;
//
//	char pStr[20];
//
//	sprintf(pStr,"%d",num);
//
//	return NumberOf1(pStr);
//
//}
//// ====================²âÊÔ´úÂë====================
//void Test(char* testName, int n, int expected)
//{
//    if(testName != NULL)
//        printf("%s begins: \n", testName);
//    
//    if(NumberOf1(n) == expected)
//        printf("Solution1 passed.\n");
//    else
//        printf("Solution1 failed.\n"); 
//
//    printf("\n");
//}
//
//void Test()
//{
//    Test("Test1", 1, 1);
//    Test("Test2", 5, 1);
//    Test("Test3", 10, 2);
//    Test("Test4", 55, 16);
//    Test("Test5", 99, 20);
//    Test("Test6", 10000, 4001);
//    Test("Test7", 21345, 18821);
//    Test("Test8", 0, 0);
//}
//
//int main(int argc, char* argv[])
//{
//    Test();
//	system("pause");
//    return 0;
//}
//
////int main()
////{
////
////
////	system("pause");
////	return 0;
////}