//#include<iostream>
//using namespace std;
//bool g_InvalidInput = false;
//bool equal(double num1, double num2)
//{
//    if((num1 - num2 > -0.0000001)
//        && (num1 - num2 < 0.0000001))
//        return true;
//    else
//        return false;
//}
//double Power(double base,int exponent)
//{
//	g_InvalidInput = false;
//	if(equal(base, 0.0) && exponent < 0)
//	{
//		g_InvalidInput = true;
//		return 0.0;
//	}
//
//	int nFlag = 0;
//
//	if(exponent == 0)
//	{
//		return 1;
//	}
//
//	if(exponent < 0)
//	{
//		nFlag = -1;
//		exponent *= -1;
//	}
//
//	int nn = base;
//	for(int i=1;i<exponent;++i)
//		base *= nn;
//
//	if(-1 == nFlag)
//		return 1.0/base;
//
//	else
//		return base;
//}
//// ====================���Դ���====================
//void Test(double base, int exponent, double expectedResult, bool expectedFlag)
//{
//    double result = Power(base, exponent);
//    if(abs(result - expectedResult) < 0.00000001 
//        && g_InvalidInput == expectedFlag)
//        printf("Test passed.\n");
//    else
//        printf("Test failed.\n");
//}
//
//int main(int argc, char* argv[])
//{
//    // ������ָ����Ϊ����
//    printf("Test1 begins.\n");
//    Test(2, 3, 8, false);
//
//    // ����Ϊ������ָ��Ϊ����
//    printf("Test2 begins.\n");
//    Test(-2, 3, -8, false);
//
//    // ָ��Ϊ����
//    printf("Test3 begins.\n");
//    Test(2, -3, 0.125, false);
//
//    // ָ��Ϊ0
//    printf("Test4 begins.\n");
//    Test(2, 0, 1, false);
//
//    // ������ָ����Ϊ0
//    printf("Test5 begins.\n");
//    Test(0, 0, 1, false);
//
//    // ����Ϊ0��ָ��Ϊ����
//    printf("Test6 begins.\n");
//    Test(0, 4, 0, false);
//
//    // ����Ϊ0��ָ��Ϊ����
//    printf("Test7 begins.\n");
//    Test(0, -4, 0, true);
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