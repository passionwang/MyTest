//#include<iostream>
//using namespace std;
//
//int Add(int num1,int num2)
//{
//	int sum;
//	int n;
//	do
//	{
//		sum = num1 ^ num2;
//		n = (num1 & num2) << 1;
//
//		num1 = sum;
//		num2 = n;
//
//	}while(num2 != 0);
//
//	return num1;
//}
//
//// ====================²âÊÔ´úÂë====================
//void Test(int num1, int num2, int expected)
//{
//    int result = Add(num1, num2);
//    if(result == expected)
//        printf("%d + %d is %d. Passed\n", num1, num2, result);
//    else
//        printf("%d + %d is %d. Failed\n", num1, num2, result);
//}
//
//int main(int argc, char* argv[])
//{
//    Test(1, 2, 3);
//    Test(111, 899, 1010);
//
//    Test(-1, 2, 1);
//    Test(1, -2, -1);
//
//    Test(3, 0, 3);
//    Test(0, -4, -4);
//
//    Test(-2, -8, -10);
//	system("pause");
//	return 0;
//
//}
////
////int main()
////{
////
////
////	system("pause");
////	return 0;
////}