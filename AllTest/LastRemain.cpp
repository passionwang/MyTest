//#include<iostream>
//#include<list>
//using namespace std;
//
//int LastRemain(int nLen,int k)
//{
//	if(nLen<1) return -1;
//
//	list<int> m_list;
//
//	for(int i=0;i<nLen;++i)
//		m_list.push_back(i);
//
//	int nCount = 0;
//	list<int>::iterator ite = m_list.begin();
//	while(1 != m_list.size())
//	{
//		if(k == nCount+1)
//		{
//			nCount = 0;
//			m_list.erase(ite++);
//		}
//		else
//		{
//			++ite;
//			++nCount;
//		}
//		if(ite == m_list.end())
//			ite = m_list.begin();
//	}
//	int num = m_list.front();
//	m_list.pop_back();
//	return num;
//}
//int LastRemaining_Solution2(unsigned int n, unsigned int m)
//{
//    if(n < 1 || m < 1)
//        return -1;
//
//    int last = 0;
//    for (int i = 2; i <= n; i ++) 
//        last = (last + m) % i;
//
//    return last;
//}
//// ====================���Դ���====================
//void Test(char* testName, unsigned int n, unsigned int m, int expected)
//{
//    if(testName != NULL)
//        printf("%s begins: \n", testName);
//
//    if(LastRemain(n, m) == expected)
//        printf("Solution1 passed.\n");
//    else
//        printf("Solution1 failed.\n");
//
//    if(LastRemaining_Solution2(n, m) == expected)
//        printf("Solution2 passed.\n");
//    else
//        printf("Solution2 failed.\n");
//
//    printf("\n");
//}
//
//void Test1()
//{
//    Test("Test1", 5, 3, 3);
//}
//
//void Test2()
//{
//    Test("Test2", 5, 2, 2);
//}
//
//void Test3()
//{
//    Test("Test3", 6, 7, 4);
//}
//
//void Test4()
//{
//    Test("Test4", 6, 6, 3);
//}
//
//void Test5()
//{
//    Test("Test5", 0, 0, -1);
//}
//
//void Test6()
//{
//    Test("Test6", 4000, 997, 1027);
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
////	
////
////
////	system("pause");
////	return 0;
////}