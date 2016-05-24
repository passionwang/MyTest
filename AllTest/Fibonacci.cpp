//#include<iostream>
//using namespace std;
//
//int Fibonacci1(int n)
//{
//	if(n < 2)
//		return n;
//	return Fibonacci1(n-1) + Fibonacci1(n-2);
//}
//
//int Fibonacci2(int n)
//{
//	if(n < 2) return n;
//	int nLow = 0;
//	int nHigh = 1;
//	int nTemp = nLow;
//	for(int i=2;i<=n;++i)
//	{
//		nLow = nHigh;
//		nHigh = nLow + nTemp;
//		nTemp = nLow;
//	}
//	return nHigh;
//}
//void Test(int n, int expected)
//{
//    if(Fibonacci1(n) == expected)
//        printf("Test for %d in Fibonacci1 passed.\n", n);
//    else
//        printf("Test for %d in Fibonacci1 failed.\n", n);
//
//    if(Fibonacci2(n) == expected)
//        printf("Test for %d in Fibonacci2 passed.\n", n);
//    else
//        printf("Test for %d in Fibonacci2 failed.\n", n);
//}
//
//int main()
//{
//    Test(0, 0);
//    Test(1, 1);
//    Test(2, 1);
//    Test(3, 2);
//    Test(4, 3);
//    Test(5, 5);
//    Test(6, 8);
//    Test(7, 13);
//    Test(8, 21);
//    Test(9, 34);
//    Test(10, 55);
//
//    Test(40, 102334155);
//
//    return 0;
//}
////int main()
////{
////	for(int i=2;i<20;i++)
////	{
////		cout<<Fibonacci1(i)<<endl;
////	}
////	for(int i=2;i<20;i++)
////	{
////		cout<<Fibonacci2(i)<<endl;
////	}
////	system("pause");
////	return 0;
////}