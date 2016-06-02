//#include<iostream>
//using namespace std;
//
/////////////////////////////////////////////////////////////////////////
//class GetNSum
//{
//public:
//	GetNSum()
//	{
//		++n;
//		Sum += n;
//	}
//	~GetNSum()
//	{
//
//	}
//public:
//	static void Reset()
//	{
//		n = 0;
//		Sum = 0;
//	}
//	static int GetSum()
//	{
//		return Sum;
//	}
//private:
//	static int Sum;
//	static int n;
//};
//int GetNSum::Sum = 0;
//int GetNSum::n = 0;
//
//int Sum_Solution1(int n)
//{
//	if(n<1) return 0;
//
//	GetNSum* oo = new GetNSum[n];
//	int sum = GetNSum::GetSum();
//	delete[] oo;
//	oo = NULL;
//	GetNSum::Reset();
//	return sum;
//}
////////////////////////////////////////////////////////////////////////////
//class A;
//A* pOO[2];
//class A
//{
//public:
//	A()
//	{
//
//	}
//	~A()
//	{
//
//	}
//public:
//	virtual int Sum(int n)
//	{
//		return 0;
//	}
//private:
//};
//class B : public A
//{
//public:
//	B()
//	{
//
//	}
//	~B()
//	{
//
//	}
//public:
//	virtual int Sum(int n)
//	{
//		return pOO[!!n]->Sum(n-1) + n;
//	}
//};
//
//int Sum_Solution2(int n)
//{
//	if(n<1) return 0;
//	pOO[0] = new A();
//	pOO[1] = new B();
//
//	int sum = pOO[1]->Sum(n);
//	delete pOO[0];
//	delete pOO[1];
//	pOO[0] = NULL;
//	pOO[1] = NULL;
//
//	return sum;
//}
//
//// ====================≤‚ ‘¥˙¬Î====================
//void Test(int n, int expected)
//{
//    printf("Test for %d begins:\n", n);
//
//    if(Sum_Solution1(n) == expected)
//        printf("Solution1 passed.\n");
//    else
//        printf("Solution1 failed.\n");
//
//    if(Sum_Solution2(n) == expected)
//        printf("Solution2 passed.\n");
//    else
//        printf("Solution2 failed.\n");
//
//    /*if(Sum_Solution3(n) == expected)
//        printf("Solution3 passed.\n");
//    else
//        printf("Solution3 failed.\n");*/
//}
//
//void Test1()
//{
//    const unsigned int number = 1;
//    int expected = 1;
//    Test(number, expected);
//   /* if(Sum_Solution4<number>::N == expected)
//        printf("Solution4 passed.\n");
//    else
//        printf("Solution4 failed.\n");*/
//}
//
//void Test2()
//{
//    const unsigned int number = 5;
//    int expected = 15;
//    Test(number, expected);
//    /*if(Sum_Solution4<number>::N == expected)
//        printf("Solution4 passed.\n");
//    else
//        printf("Solution4 failed.\n");*/
//}
//
//void Test3()
//{
//    const unsigned int number = 10;
//    int expected = 55;
//    Test(number, expected);
//    //if(Sum_Solution4<number>::N == expected)
//    //    printf("Solution4 passed.\n");
//    //else
//    //    printf("Solution4 failed.\n");
//}
//
//void Test4()
//{
//    const unsigned int number = 0;
//    int expected = 0;
//    Test(number, expected);
//   /* if(Sum_Solution4<number>::N == expected)
//        printf("Solution4 passed.\n");
//    else
//        printf("Solution4 failed.\n");*/
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
