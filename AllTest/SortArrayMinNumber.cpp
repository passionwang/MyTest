//#include<iostream>
//using namespace std;
//
//int g_MaxLen = 20;
//
//void SortArrayMinNumber(int* pArr,int nLen)
//{
//	if(NULL == pArr || nLen<1) return;
//
//	char** pStr = (char**)(new int[nLen]);
//
//	for(int i=0;i<nLen;++i)
//	{
//		pStr[i] = new char[g_MaxLen+1];
//		sprintf(pStr[i],"%d",pArr[i]);
//	}
//
//	char* pCombine1 = new char[2*g_MaxLen+1];
//	char* pCombine2 = new char[2*g_MaxLen+1];
//	for(int i=0;i<nLen-1;++i)
//	{
//		for(int j=i+1;j<nLen;++j)
//		{
//			strcpy(pCombine1,pStr[i]);
//			strcat(pCombine1,pStr[j]);
//
//			strcpy(pCombine2,pStr[j]);
//			strcat(pCombine2,pStr[i]);
//
//			if(strcmp(pCombine1,pCombine2)>0)
//			{
//				char* ptemp = pStr[i];
//				pStr[i] = pStr[j];
//				pStr[j] = ptemp;
//			}
//		}
//	}
//	for(int i=0;i<nLen;++i)
//		cout<<pStr[i];
//	cout<<endl;
//	for(int i=0;i<nLen;++i)
//		delete[] pStr[i];
//	delete[] pStr;
//	delete[] pCombine1;
//	delete[] pCombine2;
//}
//// ====================测试代码====================
//void Test(char* testName, int* numbers, int length, char* expectedResult)
//{
//    if(testName != NULL)
//        printf("%s begins:\n", testName);
//
//    if(expectedResult != NULL)
//        printf("Expected result is: \t%s\n", expectedResult);
//
//    printf("Actual result is: \t");
//    SortArrayMinNumber(numbers, length);
//
//    printf("\n");
//}
//
//void Test1()
//{
//    int numbers[] = {3, 5, 1, 4, 2};
//    Test("Test1", numbers, sizeof(numbers)/sizeof(int), "12345");
//}
//
//void Test2()
//{
//    int numbers[] = {3, 32, 321};
//    Test("Test2", numbers, sizeof(numbers)/sizeof(int), "321323");
//}
//
//void Test3()
//{
//    int numbers[] = {3, 323, 32123};
//    Test("Test3", numbers, sizeof(numbers)/sizeof(int), "321233233");
//}
//
//void Test4()
//{
//    int numbers[] = {1, 11, 111};
//    Test("Test4", numbers, sizeof(numbers)/sizeof(int), "111111");
//}
//
//// 数组中只有一个数字
//void Test5()
//{
//    int numbers[] = {321};
//    Test("Test5", numbers, sizeof(numbers)/sizeof(int), "321");
//}
//
//void Test6()
//{
//    Test("Test6", NULL, 0, "Don't print anything.");
//}
//
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
////
////	system("pause");
////	return 0;
////}