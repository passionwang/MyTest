//#include<iostream>
//using namespace std;
//
//void Permutation(char* pStr,char* pBegin)
//{
//	if(NULL == pStr || NULL == pBegin) return;
//
//	if('\0' == *pBegin)
//		cout<<pStr<<endl;
//	else
//	{
//		for(char* pCh = pBegin ; *pCh != '\0' ; ++pCh)
//		{
//			char ch = *pCh;
//			*pCh = *pBegin;
//			*pBegin = ch;
//
//			Permutation(pStr,pBegin+1);
//
//			ch = *pCh;
//			*pCh = *pBegin;
//			*pBegin = ch;
//		}
//	}
//}
//
//void Permutation(char* pStr)
//{
//	if(NULL == pStr) return ;
//
//	Permutation(pStr,pStr);
//}
//// ====================²âÊÔ´úÂë====================
//void Test(char* pStr)
//{
//    if(pStr == NULL)
//        printf("Test for NULL begins:\n");
//    else
//        printf("Test for %s begins:\n", pStr);
//
//    Permutation(pStr);
//
//    printf("\n");
//}
//
//int main(int argc, char* argv[])
//{
//    Test(NULL);
//
//    char string1[] = "";
//    Test(string1);
//
//    char string2[] = "a";
//    Test(string2);
//
//    char string3[] = "ab";
//    Test(string3);
//
//    char string4[] = "abc";
//    Test(string4);
//
//	char string5[] = "abcd";
//    Test(string5);
//
//	system("pause");
//    return 0;
//}
////int main()
////{
////
////
////
////	system("pause");
////	return 0;
////}