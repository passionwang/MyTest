//#include<iostream>
//#include<vector>
//#include <set>
//using namespace std;
//#define nRIGHT  2*nRootID+2
//#define nLEFT  2*nRootID +1
//
//int Partition(int* pArr,int nLen,int start,int end)
//{
//	if(NULL == pArr || nLen<1 || start<0 || end>=nLen) return -1;
//
//	int nIndex = rand() % (end-start+1) + start;
//
//	int temp = pArr[nIndex];
//	pArr[nIndex] = pArr[end];
//	pArr[end] = temp;
//
//	int small = start-1;
//	for(nIndex = start;nIndex<end;++nIndex)
//	{
//		if(pArr[nIndex] < pArr[end])
//		{
//			++small;
//			if(small != nIndex)
//			{
//				temp = pArr[nIndex];
//				pArr[nIndex] = pArr[small];
//				pArr[small] = temp;
//			}
//		}
//	}
//
//	++small;
//	temp = pArr[end];
//	pArr[end] = pArr[small];
//	pArr[small] = temp;
//	return small;
//}
//
//void GetLeastNumbers_Solution1(int* pArr,int nLen,int*Arr,int k)
//{
//	if(NULL == pArr || nLen<1 || k>nLen || k<1) return ;
//
//	int start = 0;
//	int end = nLen - 1;
//
//	int nIndex = Partition(pArr,nLen,start,end);
//	while(nIndex != k-1)
//	{
//		if(nIndex < k-1)
//		{
//			start = nIndex + 1;
//			nIndex = Partition(pArr,nLen,start,end);
//		}
//		else
//		{
//			end = nIndex - 1;
//			nIndex = Partition(pArr,nLen,start,end);
//		}
//	}
//
//	for(int i=0;i<k;++i)
//		Arr[i] = pArr[i];
//}
//
//void Adjust(int arr[],int nRootID,int nLength)
//{
//	int nMAX;
//	//假设左结点是最大值
//	for(nMAX = nLEFT;nMAX < nLength;nMAX = nLEFT)
//	{
//		//有两个孩子  比较大小   Nmax里装最大孩子的下标
//		if(nRIGHT < nLength)
//		{
//			if(arr[nMAX] < arr[nRIGHT])
//			{
//				nMAX = nRIGHT;
//			}
//		}
//
//		//比根节点值大  进行交换
//		if(arr[nMAX] > arr[nRootID])
//		{
//			arr[nMAX] = arr[nMAX] ^ arr[nRootID];
//			arr[nRootID] = arr[nMAX] ^ arr[nRootID];
//			arr[nMAX] = arr[nMAX] ^ arr[nRootID];
//
//			nRootID = nMAX;
//			continue;
//		}
//
//		break;
//	}
//}
//void GetLeastNumbers_Solution2(int* pArr,int nLen,int*Arr,int k)
//{
//	if(NULL == pArr || nLen<1 || k>nLen || k<1) return ;
//
//	int* pData = new int[k];
//	memset(pData,0,sizeof(int)*k);
//	int nPos = 0;
//
//	for(int i=0;i<k;++i)
//		pData[nPos++] = pArr[i];
//	for(int i=k/2;i>=0;--i)
//	{	
//		Adjust(pData,i,k);
//	}
//	for(int i=k;i<nLen;++i)
//	{
//		if(pArr[i] < pData[0])
//		{
//			pData[0] = pArr[i];
//			Adjust(pData,0,k);
//		}
//	}
//
//	for(int i=0;i<k;++i)
//		Arr[i] = pData[i];
//
//	delete[] pData;
//	pData = NULL;
//
//}
//// ====================测试代码====================
//void Test(char* testName, int* data, int n, int* expectedResult, int k)
//{
//    if(testName != NULL)
//        printf("%s begins: \n", testName);
//
//    vector<int> vectorData;
//    for(int i = 0; i < n; ++ i)
//        vectorData.push_back(data[i]);
//
//    if(expectedResult == NULL)
//        printf("The input is invalid, we don't expect any result.\n");
//    else
//    {
//        printf("Expected result: \n");
//        for(int i = 0; i < k; ++ i)
//            printf("%d\t", expectedResult[i]);
//        printf("\n");
//    }
//
//    printf("Result for solution1:\n");
//    int* output = new int[k];
//    //GetLeastNumbers_Solution1(data, n, output, k);
//    if(expectedResult != NULL)
//    {
//        for(int i = 0; i < k; ++ i)
//            printf("%d\t", output[i]);
//        printf("\n");
//    }
//	memset(output,0,sizeof(int)*k);
//    printf("Result for solution2:\n");
//    GetLeastNumbers_Solution2(data, n, output, k);
//    printf("The actual output numbers are:\n");
//    if(expectedResult != NULL)
//    {
//        for(int i = 0; i < k; ++ i)
//            printf("%d\t", output[i]);
//        printf("\n");
//    }
//    printf("\n\n");
//	delete[] output;
//}
//
//// k小于数组的长度
//void Test1()
//{
//    int data[] = {4, 5, 1, 6, 2, 7, 3, 8};
//    int expected[] = {1, 2, 3, 4};
//    Test("Test1", data, sizeof(data) / sizeof(int), expected, sizeof(expected) / sizeof(int));
//}
//
//// k等于数组的长度
//void Test2()
//{
//    int data[] = {4, 5, 1, 6, 2, 7, 3, 8};
//    int expected[] = {1, 2, 3, 4, 5, 6, 7, 8};
//    Test("Test2", data, sizeof(data) / sizeof(int), expected, sizeof(expected) / sizeof(int));
//}
//
//// k大于数组的长度
//void Test3()
//{
//    int data[] = {4, 5, 1, 6, 2, 7, 3, 8};
//    int* expected = NULL;
//    Test("Test3", data, sizeof(data) / sizeof(int), expected, 10);
//}
//
//// k等于1
//void Test4()
//{
//    int data[] = {4, 5, 1, 6, 2, 7, 3, 8};
//    int expected[] = {1};
//    Test("Test4", data, sizeof(data) / sizeof(int), expected, sizeof(expected) / sizeof(int));
//}
//
//// k等于0
//void Test5()
//{
//    int data[] = {4, 5, 1, 6, 2, 7, 3, 8};
//    int* expected = NULL;
//    Test("Test5", data, sizeof(data) / sizeof(int), expected, 0);
//}
//
//// 数组中有相同的数字
//void Test6()
//{
//    int data[] = {4, 5, 1, 6, 2, 7, 2, 8};
//    int expected[] = {1, 2};
//    Test("Test6", data, sizeof(data) / sizeof(int), expected, sizeof(expected) / sizeof(int));
//}
//
//// 输入空指针
//void Test7()
//{
//    int* expected = NULL;
//    Test("Test7", NULL, NULL, expected, 0);
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
////
////	system("pause");
////	return 0;
////}