//#include<iostream>
//using namespace std;
//
//int InverseParis(int* pArr,int* pNew,int nLow,int nHigh)
//{
//	if(NULL == pArr || NULL == pNew || nLow<0 || nHigh<nLow) return -1;
//
//	if(nLow == nHigh)
//	{
//		pNew[nLow] = pArr[nLow];
//		return 0;
//	}
//
//	int lenght = (nHigh-nLow)/2;
//	int left = InverseParis(pArr,pNew,nLow,nLow+lenght);
//	int right = InverseParis(pArr,pNew,nLow+lenght+1,nHigh);
//
//	int i = nLow+lenght;
//	int j = nHigh;
//	int indexCopy = nHigh;
//	int count = 0;
//
//	while(i>=nLow && j>=nLow+lenght+1)
//	{
//		if(pArr[i]>pArr[j])
//		{
//			pNew[indexCopy--] = pArr[i--];
//			count += j-nLow-lenght;
//		}
//		else
//		{
//			pNew[indexCopy--] = pArr[j--];
//		}
//	}
//
//	for(;i>=nLow;--i)
//		pNew[indexCopy--] = pArr[i];
//	for(;j>=nLow+lenght+1;--j)
//		pNew[indexCopy--] = pArr[j];
//
//	return left + right + count;
//}
//
//int InverseParis(int* pArr,int nLen)
//{
//	if(NULL == pArr || nLen<0) return 0;
//
//	int* pNew = new int[nLen];
//
//	for(int i=0;i<nLen;++i)
//		pNew[i] = pArr[i];
//
//	int nCount = InverseParis(pArr,pNew,0,nLen-1);
//
//	delete[] pNew;
//	pNew = NULL;
// 
//	return nCount;
//
//}
//// ====================测试代码====================
//void Test(char* testName, int* data, int length, int expected)
//{
//    if(testName != NULL)
//        printf("%s begins: ", testName);
//
//    if(InverseParis(data, length) == expected)
//        printf("Passed.\n");
//    else
//        printf("Failed.\n");
//}
//
//void Test1()
//{
//    int data[] = {1, 2, 3, 4, 7, 6, 5};
//    int expected = 3;
//
//    Test("Test1", data, sizeof(data) / sizeof(int), expected);
//}
//
//// 递减排序数组
//void Test2()
//{
//    int data[] = {6, 5, 4, 3, 2, 1};
//    int expected = 15;
//
//    Test("Test2", data, sizeof(data) / sizeof(int), expected);
//}
//
//// 递增排序数组
//void Test3()
//{
//    int data[] = {1, 2, 3, 4, 5, 6};
//    int expected = 0;
//
//    Test("Test3", data, sizeof(data) / sizeof(int), expected);
//}
//
//// 数组中只有一个数字
//void Test4()
//{
//    int data[] = {1};
//    int expected = 0;
//
//    Test("Test4", data, sizeof(data) / sizeof(int), expected);
//}
//
//
//// 数组中只有两个数字，递增排序
//void Test5()
//{
//    int data[] = {1, 2};
//    int expected = 0;
//
//    Test("Test5", data, sizeof(data) / sizeof(int), expected);
//}
//
//// 数组中只有两个数字，递减排序
//void Test6()
//{
//    int data[] = {2, 1};
//    int expected = 1;
//
//    Test("Test6", data, sizeof(data) / sizeof(int), expected);
//}
//
//// 数组中有相等的数字
//void Test7()
//{
//    int data[] = {1, 2, 1, 2, 1};
//    int expected = 3;
//
//    Test("Test7", data, sizeof(data) / sizeof(int), expected);
//}
//
//void Test8()
//{
//    int expected = 0;
//
//    Test("Test8", NULL, 0, expected);
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
//     Test7();
//    Test8();
//	system("pause");
//    return 0;
//}
//
////int main()
////{
////
////	
////
////	system("pause");
////	return 0;
////}