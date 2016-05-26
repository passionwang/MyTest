//#include<iostream>
//using namespace std;
//
//typedef bool (*pFun)(int);
//
//bool IsEven(int num)
//{
//	return (bool)(num%2);
//}
//
//void Print(int* pArr,int nLen)
//{
//	if(NULL == pArr || nLen<1) return;
//	for(int i=0;i<nLen;++i)
//	{
//		cout<<pArr[i]<<'\t';
//	}
//	cout<<endl;
//}
//void ReOrderOddEven2(int* pArr,int nLen,pFun fun)
//{
//	if(NULL == pArr || nLen<1) return;
//
//	int nLow = 0;
//	int nHigh = nLen - 1;
//	while(nLow < nHigh)
//	{
//		while(nLow < nHigh && (*fun)(pArr[nLow]))
//			++nLow;
//		while(nLow < nHigh && !(*fun)(pArr[nHigh]))
//			--nHigh;
//		if(nLow<nHigh)
//		{
//			pArr[nLow] = pArr[nLow] ^ pArr[nHigh];
//			pArr[nHigh] = pArr[nLow] ^ pArr[nHigh];
//			pArr[nLow] = pArr[nLow] ^ pArr[nHigh];
//		}
//	}
//}
//void ReOrder(int* pArr,int nLen)
//{
//	if(NULL == pArr || nLen<1) return;
//	ReOrderOddEven2(pArr,nLen,IsEven);
//}
//
//void ReOrderOddEven(int* pArr,int nLen)
//{
//	if(NULL == pArr || nLen<1) return;
//
//	int nLow = 0;
//	int nHigh = nLen - 1;
//	while(nLow < nHigh)
//	{
//		while(nLow < nHigh && 1 == pArr[nLow]%2)
//			++nLow;
//		while(nLow < nHigh && 0 == pArr[nHigh]%2)
//			--nHigh;
//		if(nLow<nHigh)
//		{
//			pArr[nLow] = pArr[nLow] ^ pArr[nHigh];
//			pArr[nHigh] = pArr[nLow] ^ pArr[nHigh];
//			pArr[nLow] = pArr[nLow] ^ pArr[nHigh];
//		}
//	}
//}
//void Test(char* testName, int numbers[], int length)
//{
//    if(testName != NULL)
//        printf("%s begins:\n", testName);
//
//    int* copy = new int[length];
//    for(int i = 0; i < length; ++i)
//    {
//        copy[i] = numbers[i];
//    }
//
//    printf("Test for solution 1:\n");
//    Print(numbers, length);
//    ReOrderOddEven(numbers, length);
//    Print(numbers, length);
//
//    printf("Test for solution 2:\n");
//    Print(copy, length);
//    ReOrder(copy, length);
//    Print(copy, length);
//
//    delete[] copy;
//}
//
//void Test1()
//{
//    int numbers[] = {1, 2, 3, 4, 5, 6, 7};
//    Test("Test1", numbers, sizeof(numbers)/sizeof(int));
//}
//
//void Test2()
//{
//    int numbers[] = {2, 4, 6, 1, 3, 5, 7};
//    Test("Test2", numbers, sizeof(numbers)/sizeof(int));
//}
//
//void Test3()
//{
//    int numbers[] = {1, 3, 5, 7, 2, 4, 6};
//    Test("Test3", numbers, sizeof(numbers)/sizeof(int));
//}
//
//void Test4()
//{
//    int numbers[] = {1};
//    Test("Test4", numbers, sizeof(numbers)/sizeof(int));
//}
//
//void Test5()
//{
//    int numbers[] = {2};
//    Test("Test5", numbers, sizeof(numbers)/sizeof(int));
//}
//
//void Test6()
//{
//    Test("Test6", NULL, 0);
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
////
////int main()
////{
////	int Arr[] = {1,2,3,4,5,6,7,8,9,10};
////	Print(Arr,sizeof(Arr)/sizeof(int));
////	ReOrderOddEven(Arr,sizeof(Arr)/sizeof(int));
////	Print(Arr,sizeof(Arr)/sizeof(int));
////	system("pause");
////	return 0;
////}