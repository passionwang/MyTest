//#include<iostream>
//using namespace std;
//
//
//void FindNumsAppearOnce(int* pArr,int nLen,int* num1,int* num2)
//{
//	if(NULL == pArr || nLen<1) return ;
//
//	int nData = 0;
//	for(int i=0;i<nLen;++i)
//		nData ^= pArr[i];
//
//	int n = 1;
//	for(int i=0;i<sizeof(int)*8;++i)
//	{
//		if((nData & 0x01) == 1)
//		{
//			break;
//		}
//		n <<= 1;
//		nData >>= 1;
//	}
//
//	*num1 = 0;
//	*num2 = 0;
//	for(int i=0;i<nLen;++i)
//	{
//		if((pArr[i] & n) == n)
//			*num1 ^= pArr[i];
//		else
//			*num2 ^= pArr[i];
//	}
//}
//// ====================²âÊÔ´úÂë====================
//void Test(char* testName, int data[], int length, int expected1, int expected2)
//{
//    if(testName != NULL)
//        printf("%s begins: ", testName);
//
//    int result1, result2;
//    FindNumsAppearOnce(data, length, &result1, &result2);
//
//    if((expected1 == result1 && expected2 == result2) ||
//        (expected2 == result1 && expected1 == result2))
//        printf("Passed.\n\n");
//    else
//        printf("Failed.\n\n");
//}
//
//void Test1()
//{
//    int data[] = {2, 4, 3, 6, 3, 2, 5, 5};
//    Test("Test1", data, sizeof(data) / sizeof(int), 4, 6);
//}
//
//void Test2()
//{
//    int data[] = {4, 6};
//    Test("Test2", data, sizeof(data) / sizeof(int), 4, 6);
//}
//
//void Test3()
//{
//    int data[] = {4, 6, 1, 1, 1, 1};
//    Test("Test3", data, sizeof(data) / sizeof(int), 4, 6);
//}
//
//int main(int argc, char* argv[])
//{
//    Test1();
//    Test2();
//    Test3();
//	system("pause");
//    return 0;
//}
//
//
////int main()
////{
////	
////	system("pause");
////	return 0;
////}