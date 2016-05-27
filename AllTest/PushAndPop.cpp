//#include<iostream>
//#include<stack>
//using namespace std;
//
//
//bool IsPushPop(const int* pPush,const int* pPop,int nLen)
//{
//	if(NULL == pPush || NULL == pPop || nLen<1) return false;
//
//	stack<int> stackData;
//
//	int nIndex1 = 0;
//	int nIndex2 = 0;
//
//	while((nIndex1<nLen || !stackData.empty()) && nIndex2<nLen)
//	{
//		if(pPush[nIndex1] == pPop[nIndex2])
//		{
//			++nIndex1;
//			++nIndex2;
//		}
//		else if(!stackData.empty() && stackData.top() == pPop[nIndex2])
//		{
//			stackData.pop();
//			++nIndex2;
//		}
//		else
//		{
//			if(nIndex1 >= nLen) return false;
//			stackData.push(pPush[nIndex1]);
//			++nIndex1;
//		}
//	}
//	return true;
//}
//// ====================测试代码====================
//void Test(char* testName, const int* pPush, const int* pPop, int nLength, bool expected)
//{
//    if(testName != NULL)
//        printf("%s begins: ", testName);
//
//    if(IsPushPop(pPush, pPop, nLength) == expected)
//        printf("Passed.\n");
//    else
//        printf("failed.\n");
//}
//
//void Test1()
//{
//    const int nLength = 5;
//    int push[nLength] = {1, 2, 3, 4, 5};
//    int pop[nLength] = {4, 5, 3, 2, 1};
//    
//    Test("Test1", push, pop, nLength, true);
//}
//
//void Test2()
//{
//    const int nLength = 5;
//    int push[nLength] = {1, 2, 3, 4, 5};
//    int pop[nLength] = {3, 5, 4, 2, 1};
//    
//    Test("Test2", push, pop, nLength, true);
//}
//
//void Test3()
//{
//    const int nLength = 5;
//    int push[nLength] = {1, 2, 3, 4, 5};
//    int pop[nLength] = {4, 3, 5, 1, 2};
//    
//    Test("Test3", push, pop, nLength, false);
//}
//
//void Test4()
//{
//    const int nLength = 5;
//    int push[nLength] = {1, 2, 3, 4, 5};
//    int pop[nLength] = {3, 5, 4, 1, 2};
//    
//    Test("Test4", push, pop, nLength, false);
//}
//
//// push和pop序列只有一个数字
//void Test5()
//{
//    const int nLength = 1;
//    int push[nLength] = {1};
//    int pop[nLength] = {2};
//
//    Test("Test5", push, pop, nLength, false);
//}
//
//void Test6()
//{
//    const int nLength = 1;
//    int push[nLength] = {1};
//    int pop[nLength] = {1};
//
//    Test("Test6", push, pop, nLength, true);
//}
//
//void Test7()
//{
//    Test("Test7", NULL, NULL, 0, false);
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
////int main()
////{
////
////
////
////
////	system("pause");
////	return 0;
////}