//#include<iostream>
//using namespace std;
//
//
//
//bool FindNumbersWithSum(int* pArr,int nLen,int sum,int* num1,int* num2)
//{
//	if(NULL == pArr || nLen<1 || NULL == num1 || NULL == num2) return false;
//
//	int nLow = 0;
//	int nHigh = nLen - 1;
//
//	while(nLow<nHigh)
//	{
//		if(pArr[nLow] + pArr[nHigh] == sum)
//		{
//			*num1 = pArr[nLow];
//			*num2 = pArr[nHigh];
//			return true;
//		}
//		else if(pArr[nLow] + pArr[nHigh] > sum)
//			nHigh = nHigh-1;
//		else
//			nLow = nLow+1;
//	}
//
//	return false;
//
//}
//// ====================测试代码====================
//void Test(char* testName, int data[], int length, int sum, bool expectedReturn)
//{
//    if(testName != NULL)
//        printf("%s begins: ", testName);
//    
//    int num1, num2;
//    bool result = FindNumbersWithSum(data, length, sum, &num1, &num2);
//    if(result == expectedReturn)
//    {
//        if(result)
//        {
//            if(num1 + num2 == sum)
//                printf("Passed. \n");
//            else
//                printf("Failed. \n");
//        }
//        else
//            printf("Passed. \n");
//    }
//    else
//        printf("Failed. \n");
//}
//
//// 存在和为s的两个数字，这两个数字位于数组的中间
//void Test1()
//{
//    int data[] = {1, 2, 4, 7, 11, 15};
//    Test("Test1", data, sizeof(data) / sizeof(int), 15, true);
//}
//
//// 存在和为s的两个数字，这两个数字位于数组的两段
//void Test2()
//{
//    int data[] = {1, 2, 4, 7, 11, 16};
//    Test("Test2", data, sizeof(data) / sizeof(int), 17, true);
//}
//
//// 不存在和为s的两个数字
//void Test3()
//{
//    int data[] = {1, 2, 4, 7, 11, 16};
//    Test("Test3", data, sizeof(data) / sizeof(int), 10, false);
//}
//
//// 鲁棒性测试
//void Test4()
//{
//    Test("Test4", NULL, 0, 0, false);
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
////
////	system("pause");
////	return 0;
////}