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
//// ====================���Դ���====================
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
//// ���ں�Ϊs���������֣�����������λ��������м�
//void Test1()
//{
//    int data[] = {1, 2, 4, 7, 11, 15};
//    Test("Test1", data, sizeof(data) / sizeof(int), 15, true);
//}
//
//// ���ں�Ϊs���������֣�����������λ�����������
//void Test2()
//{
//    int data[] = {1, 2, 4, 7, 11, 16};
//    Test("Test2", data, sizeof(data) / sizeof(int), 17, true);
//}
//
//// �����ں�Ϊs����������
//void Test3()
//{
//    int data[] = {1, 2, 4, 7, 11, 16};
//    Test("Test3", data, sizeof(data) / sizeof(int), 10, false);
//}
//
//// ³���Բ���
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