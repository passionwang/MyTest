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
//// ====================���Դ���====================
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
//// ���ҵ����ֳ�����������м�
//void Test1()
//{
//    int data[] = {1, 2, 3, 3, 3, 3, 4, 5};
//    Test("Test1", data, sizeof(data) / sizeof(int), 3, 4);
//}
//
//// ���ҵ��������������Ŀ�ͷ
//void Test2()
//{
//    int data[] = {3, 3, 3, 3, 4, 5};
//    Test("Test2", data, sizeof(data) / sizeof(int), 3, 4);
//}
//
//// ���ҵ��������������Ľ�β
//void Test3()
//{
//    int data[] = {1, 2, 3, 3, 3, 3};
//    Test("Test3", data, sizeof(data) / sizeof(int), 3, 4);
//}
//
//// ���ҵ����ֲ�����
//void Test4()
//{
//    int data[] = {1, 3, 3, 3, 3, 4, 5};
//    Test("Test4", data, sizeof(data) / sizeof(int), 2, 0);
//}
//
//// ���ҵ����ֱȵ�һ�����ֻ�С��������
//void Test5()
//{
//    int data[] = {1, 3, 3, 3, 3, 4, 5};
//    Test("Test5", data, sizeof(data) / sizeof(int), 0, 0);
//}
//
//// ���ҵ����ֱ����һ�����ֻ��󣬲�����
//void Test6()
//{
//    int data[] = {1, 3, 3, 3, 3, 4, 5};
//    Test("Test6", data, sizeof(data) / sizeof(int), 6, 0);
//}
//
//// �����е����ִ�ͷ��β���ǲ��ҵ�����
//void Test7()
//{
//    int data[] = {3, 3, 3, 3};
//    Test("Test7", data, sizeof(data) / sizeof(int), 3, 4);
//}
//
//// �����е����ִ�ͷ��βֻ��һ���ظ������֣����ǲ��ҵ�����
//void Test8()
//{
//    int data[] = {3, 3, 3, 3};
//    Test("Test8", data, sizeof(data) / sizeof(int), 4, 0);
//}
//
//// ������ֻ��һ�����֣��ǲ��ҵ�����
//void Test9()
//{
//    int data[] = {3};
//    Test("Test9", data, sizeof(data) / sizeof(int), 3, 1);
//}
//
//// ������ֻ��һ�����֣����ǲ��ҵ�����
//void Test10()
//{
//    int data[] = {3};
//    Test("Test10", data, sizeof(data) / sizeof(int), 4, 0);
//}
//
//// ³���Բ��ԣ������ָ��
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
