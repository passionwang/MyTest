//#include<iostream>
//using namespace std;
//
//bool IsValue = true;
//bool g_nStatus = true;
//
//int StrToIntCore(const char* str,bool IsZheng)
//{
//	if(NULL == str) return 0;
//	IsValue = true;
//	long long  num = 0;
//	int flag = 1;
//	flag = (IsZheng == true ? 1 : -1);
//	while(*str != '\0')
//	{
//		if(*str >= '0' && *str <= '9')
//		{
//			num = num*10 + flag * (*str - '0');
//			if(IsZheng == true && num>0x7fffffff || IsZheng == false && num<(signed int)0x80000000)
//			{
//				num = 0;
//				IsValue = false;
//				break;
//			}
//		}
//		else
//		{
//			num = 0;
//			IsValue = false;
//			break;
//		}
//		++str;
//	}
//	return (int)num;
//}
//
//int StrToInt(const char* str)
//{
//	if(NULL == str) 
//	{
//		IsValue = false;
//		return 0;
//	}
//
//	int num = 0;
//	while('\0' != *str)
//	{
//		bool IsZheng = true;
//		if('+' == *str)
//			++str;
//		else if('-' == *str)
//		{
//			IsZheng = false;
//			++str;
//		}
//		if(*str>='0' && *str<='9')
//		{
//			num = StrToIntCore(str,IsZheng);
//			break;
//		}
//		else
//		{
//			IsValue = false;
//			break;
//		}
//	}
//	return num;
//}
//
//// ====================测试代码====================
//void Test(char* string)
//{
//    int result = StrToInt(string);
//    if(result == 0 && g_nStatus == !IsValue)
//        printf("the input %s is invalid.\n", string);
//    else
//        printf("number for %s is: %d.\n", string, result);
//}
//
//int main(int argc, char* argv[])
//{
//    Test(NULL);
//
//    Test("");
//
//    Test("123");
//
//    Test("+123");
//    
//    Test("-123");
//
//    Test("1a33");
//
//    Test("+0");
//
//    Test("-0");
//
//    //有效的最大正整数, 0x7FFFFFFF
//    Test("+2147483647");    
//
//    Test("-2147483647");
//
//    Test("+2147483648");
//
//    //有效的最小负整数, 0x80000000
//    Test("-2147483648");    
//
//    Test("+2147483649");
//
//    Test("-2147483649");
//
//    Test("+");
//
//    Test("-");
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