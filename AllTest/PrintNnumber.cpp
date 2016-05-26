//#include<iostream>
//using namespace std;
//
//void PrintNum(int* num,int nLen)
//{
//	if(NULL == num) throw exception("Invalid Input.");
//	for(int i=nLen;i>=0;--i)
//	{
//		if(0 != num[i])
//			cout<<num[i];
//	}
//	cout<<endl;
//}
//bool IsOver(int* OverNum,int* NowNum,int nLen)
//{
//	if(NULL == OverNum || NULL == NowNum) throw exception("Invalid Input.");
//	for(int i=nLen;i>=0;--i)
//	{
//		if(OverNum[i] != NowNum[i])
//			return false;
//	}
//	return true;
//}
//
//void PrintNNumber(int n)
//{
//	if(n<1) throw exception("Invalid Input.");
//	//1.判断9的倍数
//	int nLen = n / 9;
//	if(0 == n % 9) nLen = nLen - 1;
//	//2.申请空间
//	int* pArr = new int[nLen + 1];
//	int* pArrNow = new int[nLen + 1];
//	memset(pArr,0,sizeof(int) * (nLen+1));
//	memset(pArrNow,0,sizeof(int) * (nLen+1));
//	for(int i=0;i<nLen+1;++i)
//	{
//		pArr[i] = 0;
//		if(0 == i && 0 != n % 9)
//		{
//			for(int j=0;j<n%9;++j)
//			{
//				pArr[i] = pArr[i]*10+9;
//			}
//		}
//		else
//		{
//			for(int j=0;j<9;++j)
//			{
//				pArr[i] = pArr[i]*10+9;
//			}
//		}
//	}
//	//3.自定义+
//	while(1)
//	{
//		if(0 == nLen)
//		{
//			++pArrNow[nLen];
//			PrintNum(pArrNow,nLen);
//			if(true == IsOver(pArr,pArrNow,nLen))
//				break;
//		}
//		else
//		{
//			++pArrNow[nLen];
//			PrintNum(pArrNow,nLen);
//			for(int i= nLen;i>0;--i)
//			{
//				if(pArrNow[i] == pArr[i])
//				{
//					pArrNow[i] = 0;
//					++pArrNow[i-1];
//					//PrintNum(pArrNow,nLen);
//					if(true == IsOver(pArr,pArrNow,nLen))
//						break;
//				}
//			}
//			if(true == IsOver(pArr,pArrNow,nLen))
//						break;
//		}
//	}
//	//释放资源
//
//}
//
//int main()
//{
//	PrintNNumber(10);
//
//
//	system("pause");
//	return 0;
//}