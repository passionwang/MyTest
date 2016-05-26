//#include<iostream>
//using namespace std;
//
////bool Incream(char* pArr)
////{
////	if(NULL == pArr) return false;
////	int nLen = strlen(pArr);
////	int Over = 0;
////	bool LastOver = false;
////	for(int i=nLen-1;i>=0;--i)
////	{
////		int nSum = pArr[i] - '0' + Over;
////		if(i == nLen - 1) 
////			++nSum;
////		if(10 == nSum)
////		{
////			if(0 == i)
////			{
////				LastOver = true;
////			}
////			else
////			{
////				nSum = 0;
////				pArr[i] = '0';
////				Over = 1;
////			}
////		}
////		else
////		{
////			pArr[i] = '0' + nSum;
////			break;
////		}
////	}
////	return LastOver;
////}
////
////void Print(char* pArr)
////{
////	if(NULL == pArr) return;
////	bool NotZero = false;
////	for(int i=0;i<(int)strlen(pArr);++i)
////	{
////		if(!NotZero && '0' != pArr[i])
////			NotZero = true;
////		if(NotZero)
////			cout<<pArr[i];
////	}
////	cout<<endl;
////}
////
////void PrintNNumber1(int num)
////{
////	if(num<1) return ;
////	char* pArr = new char[num+1];
////	memset(pArr,'0',num+1);
////	pArr[num] = '\0';
////	while(!Incream(pArr))
////	{
////		Print(pArr);
////	}
////	delete[] pArr;
////}
////
////void QuanPaiLie(char* pArr,int nLen,int nIndex)
////{
////	if(NULL == pArr || nLen < 1 || nIndex >= nLen || nIndex <0) 
////		throw exception("Invalid Input.");
////	if(nIndex == nLen-1)
////	{
////		Print(pArr);
////		return ;
////	}
////	for(int i=0;i<10;++i)
////	{
////		pArr[nIndex+1] = i + '0';
////		QuanPaiLie(pArr,nLen,nIndex+1);
////	}
////}
//// 
////void PrintNNumber2(int num)
////{
////	if(num<1) throw exception("Invalid Input.");
////
////	char* pArr = new char[num+1];
////	pArr[num] = '\0';
////
////	for(int i=0;i<10;++i)
////	{
////		pArr[0] = i + '0';
////		QuanPaiLie(pArr,num,0);
////	}
////	delete[] pArr;
////}
//
//void Print(char* pArr)
//{
//	if(NULL == pArr) return;
//
//	bool nFlag = false;
//
//	for(unsigned int i=0;i<strlen(pArr);++i)
//	{
//		if(!nFlag && pArr[i] != '0')
//			nFlag = true;
//
//		if(nFlag)
//		{
//			cout<<pArr[i];
//		}
//	}
//	cout<<endl;
//}
//
//bool Incream(char* pArr)
//{
//	if(NULL == pArr) return false;
//
//	int nLen = strlen(pArr);
//
//	int nOver = 0;
//	bool LastOver = false;
//
//	for(int i=nLen-1;i>=0;--i)
//	{
//		int nSum = pArr[i] - '0' + nOver;
//
//		if(nLen - 1 == i)
//			++nSum;
//
//		if(10 == nSum)
//		{
//			if(0 == i)
//				LastOver = true;
//			else
//			{
//				nOver = 1;
//				pArr[i] = '0';
//				nSum = 0;
//			}
//		}
//		else
//		{
//			pArr[i] = '0' + nSum;
//			break;
//		}
//	}
//	return LastOver;
//}
//
//void PrintNNumber1(int n)
//{
//	if(n<1) return;
//
//	char* pArr = new char[n+1];
//	memset(pArr,'0',n+1);
//	pArr[n] = '\0';
//	
//	while(!Incream(pArr))
//	{
//		Print(pArr);
//	}
//
//	delete[] pArr;
//}
//
//void QuanPaiLie(char* pArr,int nLen,int nIndex)
//{
//	if(NULL == pArr || nLen<1 || nIndex<0 || nIndex>nLen) return;
//
//	if(nLen-1 == nIndex)
//	{
//		Print(pArr);
//		return;
//	}
//	for(int i=0;i<10;++i)
//	{
//		pArr[nIndex + 1] = '0' + i;
//		QuanPaiLie(pArr,nLen,nIndex+1);
//	}
//}
//void PrintNNumber2(int n)
//{
//	if(n<1) return;
//
//	char* pArr = new char[n+1];
//	memset(pArr,'0',n+1);
//	pArr[n] = '\0';
//	for(int i=0;i<10;++i)
//	{
//		pArr[0] = '0' + i;
//		QuanPaiLie(pArr,n,0);
//	}
//	delete[] pArr;
//}
//
//// ====================²âÊÔ´úÂë====================
//void Test(int n)
//{
//    printf("Test for %d begins:\n", n);
//
//    PrintNNumber1(n);
//    PrintNNumber2(n);
//
//    printf("Test for %d ends.\n", n);
//}
//
//int main(int argc, char* argv[])
//{
//	PrintNNumber2(5);
//    Test(1);
//    Test(2);
//    Test(3);
//    Test(0);
//    Test(-1);
//	system("pause");
//    return 0;
//}
////int main()
////{
////	PrintNNumber(5);
////
////
////	system("pause");
////	return 0;
////}