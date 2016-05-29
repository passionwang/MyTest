//#include<iostream>
//using namespace std;
//
//int GetFirstK(int* pArr,int nLen,int k)
//{
//	if(NULL == pArr || nLen<1) return -1;
//
//	int nLow = 0;
//	int nHigh = nLen-1;
//	int nMid = 0;
//	while(nLow<=nHigh)
//	{
//		nMid = (nLow+nHigh)/2;
//		if(pArr[nMid] == k)
//		{
//			if(nMid>0 && k == pArr[nMid-1])
//				nHigh = nMid-1;
//			else
//				return nMid;
//		}
//		else if(pArr[nMid]>k)
//			nHigh = nMid-1;
//		else
//			nLow = nMid+1;
//	}
//	return -1;
//}
//
//int GetLastK(int* pArr,int nLen,int k)
//{
//	if(NULL == pArr || nLen<1) return -1;
//
//	int nLow = 0;
//	int nHigh = nLen-1;
//	int nMid = 0;
//	while(nLow<=nHigh)
//	{
//		nMid = (nLow+nHigh)/2;
//		if(pArr[nMid] == k)
//		{
//			if(nMid<nLen-1 && k == pArr[nMid+1])
//				nLow = nMid+1;
//			else
//				return nMid;
//		}
//		else if(pArr[nMid]>k)
//			nHigh = nMid-1;
//		else
//			nLow = nMid+1;
//	}
//	return -1;
//}
//
//int GetCountOfK(int* pArr,int nLen,int k)
//{
//	if(NULL==pArr || nLen<1) return 0;
//	
//	int nFirstK = GetFirstK(pArr,nLen,k);
//	int nLastK = GetLastK(pArr,nLen,k);
//
//	if(-1 == nFirstK && -1 == nLastK)
//		return 0;
//
//	return (nLastK-nFirstK+1);
//}
//
//// ====================测试代码====================
//void Test(char* testName, int data[], int length, int k, int expected)
//{
//    if(testName != NULL)
//        printf("%s begins: ", testName);
//
//    int result = GetCountOfK(data, length, k);
//    if(result == expected)
//        printf("Passed.\n");
//    else
//        printf("Failed.\n");
//}
//
//// 查找的数字出现在数组的中间
//void Test1()
//{
//    int data[] = {1, 2, 3, 3, 3, 3, 4, 5};
//    Test("Test1", data, sizeof(data) / sizeof(int), 3, 4);
//}
//
//// 查找的数组出现在数组的开头
//void Test2()
//{
//    int data[] = {3, 3, 3, 3, 4, 5};
//    Test("Test2", data, sizeof(data) / sizeof(int), 3, 4);
//}
//
//// 查找的数组出现在数组的结尾
//void Test3()
//{
//    int data[] = {1, 2, 3, 3, 3, 3};
//    Test("Test3", data, sizeof(data) / sizeof(int), 3, 4);
//}
//
//// 查找的数字不存在
//void Test4()
//{
//    int data[] = {1, 3, 3, 3, 3, 4, 5};
//    Test("Test4", data, sizeof(data) / sizeof(int), 2, 0);
//}
//
//// 查找的数字比第一个数字还小，不存在
//void Test5()
//{
//    int data[] = {1, 3, 3, 3, 3, 4, 5};
//    Test("Test5", data, sizeof(data) / sizeof(int), 0, 0);
//}
//
//// 查找的数字比最后一个数字还大，不存在
//void Test6()
//{
//    int data[] = {1, 3, 3, 3, 3, 4, 5};
//    Test("Test6", data, sizeof(data) / sizeof(int), 6, 0);
//}
//
//// 数组中的数字从头到尾都是查找的数字
//void Test7()
//{
//    int data[] = {3, 3, 3, 3};
//    Test("Test7", data, sizeof(data) / sizeof(int), 3, 4);
//}
//
//// 数组中的数字从头到尾只有一个重复的数字，不是查找的数字
//void Test8()
//{
//    int data[] = {3, 3, 3, 3};
//    Test("Test8", data, sizeof(data) / sizeof(int), 4, 0);
//}
//
//// 数组中只有一个数字，是查找的数字
//void Test9()
//{
//    int data[] = {3};
//    Test("Test9", data, sizeof(data) / sizeof(int), 3, 1);
//}
//
//// 数组中只有一个数字，不是查找的数字
//void Test10()
//{
//    int data[] = {3};
//    Test("Test10", data, sizeof(data) / sizeof(int), 4, 0);
//}
//
//// 鲁棒性测试，数组空指针
//void Test11()
//{
//    Test("Test11", NULL, 0, 0, 0);
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
//    Test7();
//    Test8();
//    Test9();
//    Test10();
//    Test11();
//	system("pause");
//    return 0;
//}
//
//
//
