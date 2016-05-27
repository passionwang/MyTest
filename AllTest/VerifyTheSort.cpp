//#include<iostream>
//using namespace std;
//
//
//
//bool VerifyTheSort(int* pArr,int nLen)
//{
//	if(NULL == pArr || nLen<1) return false;
//
//	if(1 == nLen) return true;
//
//	int nLast = nLen-1;
//	int nMid = 0;
//	bool IsLast = false;
//	for(int i=0;i<nLast;++i)
//	{
//		if(!IsLast && pArr[i]>pArr[nLast])
//		{
//			IsLast = true;
//			nMid = i;
//		}
//		if(IsLast && pArr[i]<pArr[nLast])
//			return false;
//	}
//	bool left = true;
//	if(nMid>0)
//		left = VerifyTheSort(pArr,nMid); 
//	bool right = true;
//	if(nMid<nLast)
//		right = VerifyTheSort(pArr+nMid,nLast-nMid);
//	return left && right;
//}
//// ====================测试代码====================
//void Test(char* testName, int sequence[], int length, bool expected)
//{
//    if(testName != NULL)
//        printf("%s begins: ", testName);
//
//    if(VerifyTheSort(sequence, length) == expected)
//        printf("passed.\n");
//    else
//        printf("failed.\n");
//}
//
////            10
////         /      \
////        6        14
////       /\        /\
////      4  8     12  16
//void Test1()
//{
//    int data[] = {4, 8, 6, 12, 16, 14, 10};
//    Test("Test1", data, sizeof(data)/sizeof(int), true);
//}
//
////           5
////          / \
////         4   7
////            /
////           6
//void Test2()
//{
//    int data[] = {4, 6, 7, 5};
//    Test("Test2", data, sizeof(data)/sizeof(int), true);
//}
//
////               5
////              /
////             4
////            /
////           3
////          /
////         2
////        /
////       1
//void Test3()
//{
//    int data[] = {1, 2, 3, 4, 5};
//    Test("Test3", data, sizeof(data)/sizeof(int), true);
//}
//
//// 1
////  \
////   2
////    \
////     3
////      \
////       4
////        \
////         5
//void Test4()
//{
//    int data[] = {5, 4, 3, 2, 1};
//    Test("Test4", data, sizeof(data)/sizeof(int), true);
//}
//
//// 树中只有1个结点
//void Test5()
//{
//    int data[] = {5};
//    Test("Test5", data, sizeof(data)/sizeof(int), true);
//}
//
//void Test6()
//{
//    int data[] = {7, 4, 6, 5};
//    Test("Test6", data, sizeof(data)/sizeof(int), false);
//}
//
//void Test7()
//{
//    int data[] = {4, 6, 12, 8, 16, 14, 10};
//    Test("Test7", data, sizeof(data)/sizeof(int), false);
//}
//
//void Test8()
//{
//    Test("Test8", NULL, 0, false);
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
//	system("pause");
//    return 0;
//}
////int main()
////{
////
////
////	system("pause");
////	return 0;
////}