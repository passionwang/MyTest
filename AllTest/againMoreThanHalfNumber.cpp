//#include<iostream>
//using namespace std;
//
//bool g_bInputInvalid = false;
//
//int Partition(int* pArr,int nLen,int start,int end)
//{
//	if(NULL == pArr || nLen<0 || start<0 || end>=nLen) return -1;
//
//	int nIndex = rand() % (end - start + 1) + start;
//
//	int temp = pArr[nIndex];
//	pArr[nIndex] = pArr[end];
//	pArr[end] = temp;
//
//	int small = start-1;
//	for(int i=start;i<end;++i)
//	{
//		if(pArr[i] < pArr[end])
//		{
//			++small;
//			if(i != small)
//			{
//				temp = pArr[i];
//				pArr[i] = pArr[small];
//				pArr[small] = temp;
//			}
//		}
//	}
//	++small;
//	temp = pArr[small];
//	pArr[small] = pArr[end];
//	pArr[end] = temp;
//	return small;
//}
//
//bool CheckValid(int* pArr,int nLen,int nResult)
//{
//	if(NULL == pArr || nLen<1) 
//	{
//		g_bInputInvalid = true;
//		return false;
//	}
//
//	int nCount = 0;
//	for(int i=0;i<nLen;++i)
//	{
//		if(pArr[i] == nResult)
//			++nCount;
//	}
//	if(nCount > nLen/2)
//		return true;
//	g_bInputInvalid = true;
//	return false;
//}
//
//int MoreThanHalfNum_Solution1(int* pArr,int nLen)
//{
//	if(NULL == pArr || nLen<1) 
//	{
//		g_bInputInvalid = true;
//		return 0;
//	}
//	g_bInputInvalid = false;
//
//	int nMid = nLen / 2;
//	int start = 0;
//	int end = nLen - 1;
//	int nIndex = Partition(pArr,nLen,start,end);
//	while(nIndex != nMid)
//	{
//		if(nIndex < nMid)
//		{
//			start = nIndex+1;
//			nIndex = Partition(pArr,nLen,start,end);
//		}
//		else
//		{
//			end = nIndex-1;
//			nIndex = Partition(pArr,nLen,start,end);
//		}
//	}
//	int nResult = pArr[nIndex];
//	if(CheckValid(pArr,nLen,nResult))
//		return nResult;
//	return 0;
//
//}
//
//int MoreThanHalfNum_Solution2(int* pArr,int nLen)
//{
//	if(NULL == pArr || nLen<1) 
//	{
//		g_bInputInvalid = true;
//		return 0;
//	}
//
//	int value = pArr[0];
//	int nCount = 1;
//	for(int i=1;i<nLen;++i)
//	{
//		if(value == pArr[i])
//			++nCount;
//		else if(0 == nCount)
//		{
//			value = pArr[i];
//			nCount = 1;
//		}
//		else
//			--nCount;
//	}
//	if(CheckValid(pArr,nLen,value))
//		return value;
//	return 0;
//}
//// ====================测试代码====================
//void Test(char* testName, int* numbers, int length, int expectedValue, bool expectedFlag)
//{
//    if(testName != NULL)
//        printf("%s begins: \n", testName);
//
//    int* copy = new int[length];
//    for(int i = 0; i < length; ++i)
//        copy[i] = numbers[i];
//
//    printf("Test for solution1: ");
//    int result = MoreThanHalfNum_Solution1(numbers, length);
//    if(result == expectedValue && g_bInputInvalid == expectedFlag)
//        printf("Passed.\n");
//    else
//        printf("Failed.\n");
//
//    printf("Test for solution2: ");
//    result = MoreThanHalfNum_Solution2(copy, length);
//    if(result == expectedValue && g_bInputInvalid == expectedFlag)
//        printf("Passed.\n");
//    else
//        printf("Failed.\n");
//
//    delete[] copy;
//}
//
//// 存在出现次数超过数组长度一半的数字
//void Test1()
//{
//    int numbers[] = {1, 2, 3, 2, 2, 2, 5, 4, 2};
//    Test("Test1", numbers, sizeof(numbers) / sizeof(int), 2, false);
//}
//
//// 不存在出现次数超过数组长度一半的数字
//void Test2()
//{
//    int numbers[] = {1, 2, 3, 2, 4, 2, 5, 2, 3};
//    Test("Test2", numbers, sizeof(numbers) / sizeof(int), 0, true);
//}
//
//// 出现次数超过数组长度一半的数字都出现在数组的前半部分
//void Test3()
//{
//    int numbers[] = {2, 2, 2, 2, 2, 1, 3, 4, 5};
//    Test("Test3", numbers, sizeof(numbers) / sizeof(int), 2, false);
//}
//
//// 出现次数超过数组长度一半的数字都出现在数组的后半部分
//void Test4()
//{
//    int numbers[] = {1, 3, 4, 5, 2, 2, 2, 2, 2};
//    Test("Test4", numbers, sizeof(numbers) / sizeof(int), 2, false);
//}
//
//// 输入空指针
//void Test5()
//{
//   int numbers[] = {1};
//   Test("Test5", numbers, 1, 1, false);
//}
//
//// 输入空指针
//void Test6()
//{
//    Test("Test6", NULL, 0, 0, true);
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
////	system("pause");
////	return 0;
////}