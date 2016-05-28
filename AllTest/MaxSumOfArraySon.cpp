//#include<iostream>
//
//using namespace std;
//
//bool g_InValidInput = false;
//
//int FindMaxSum(int* pArr,int nLen)
//{
//	if(NULL == pArr || nLen<1) 
//	{
//		g_InValidInput = true;
//		return 0;
//	}
//
//	int CurrentSum = 0;
//	int GreaterSum = 0x80000000;
//
//	for(int i=0;i<nLen;++i)
//	{
//		if(CurrentSum<0)
//			CurrentSum = pArr[i];
//		else
//			CurrentSum += pArr[i];
//		if(CurrentSum>GreaterSum)
//			GreaterSum = CurrentSum;
//	}
//	return GreaterSum;
//}
//// ====================测试代码====================
//void Test(char* testName, int* pData, int nLength, int expected, bool expectedFlag)
//{
//    if(testName != NULL)
//        printf("%s begins: \n", testName);
//
//    int result = FindMaxSum(pData, nLength);
//    if(result == expected && expectedFlag == g_InValidInput)
//        printf("Passed.\n");
//    else
//        printf("Failed.\n");
//}
//
//// 1, -2, 3, 10, -4, 7, 2, -5
//void Test1()
//{
//    int data[] = {1, -2, 3, 10, -4, 7, 2, -5};
//    Test("Test1", data, sizeof(data) / sizeof(int), 18, false);
//}
//
//// 所有数字都是负数
//// -2, -8, -1, -5, -9
//void Test2()
//{
//    int data[] = {-2, -8, -1, -5, -9};
//    Test("Test2", data, sizeof(data) / sizeof(int), -1, false);
//}
//
//// 所有数字都是正数
//// 2, 8, 1, 5, 9
//void Test3()
//{
//    int data[] = {2, 8, 1, 5, 9};
//    Test("Test3", data, sizeof(data) / sizeof(int), 25, false);
//}
//
//// 无效输入
//void Test4()
//{
//    Test("Test4", NULL, 0, 0, true);
//}
//
//int main(int argc, char* argv[])
//{
//    Test1();
//    Test2();
//    Test3();
//    Test4();
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