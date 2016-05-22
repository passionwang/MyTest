//#include<iostream>
//using namespace std;
//
//
//class CMyString
//{
//public:
//	CMyString(const char* pData = NULL)
//	{
//		if(NULL == pData)
//		{
//			m_pData = new char[1];
//			m_pData[0] = '\0';
//		}
//		else
//		{
//			int nLen = strlen(pData);
//			m_pData = new char[nLen + 1];
//			strcpy(m_pData,pData);
//		}
//	}
//	CMyString(const CMyString& str)
//	{
//		int nLen = strlen(str.m_pData);
//		m_pData = new char[nLen + 1];
//		strcpy(m_pData,str.m_pData);
//	}
//	CMyString& operator = (const CMyString& str)
//	{
//		if(this == &str) return *this;
//
//		delete m_pData;
//		m_pData = NULL;
//
//		int nLen = strlen(str.m_pData);
//		m_pData = new char[nLen + 1];
//		strcpy(m_pData,str.m_pData);
//
//		return *this;
//	}
//	~CMyString()
//	{
//		delete[] m_pData;
//	}
//
//	void Print()
//	{
//		cout<<m_pData<<endl;
//	}
//private:
//	char* m_pData;
//};
//void Test1()
//{
//    printf("Test1 begins:\n");
//
//    char* text = "Hello world";
//
//    CMyString str1(text);
//    CMyString str2;
//    str2 = str1;
//
//    printf("The expected result is: %s.\n", text);
//
//    printf("The actual result is: ");
//    str2.Print();
//    printf(".\n");
//}
//
//// 赋值给自己
//void Test2()
//{
//    printf("Test2 begins:\n");
//
//    char* text = "Hello world";
//
//    CMyString str1(text);
//    str1 = str1;
//
//    printf("The expected result is: %s.\n", text);
//
//    printf("The actual result is: ");
//    str1.Print();
//    printf(".\n");
//}
//
//// 连续赋值
//void Test3()
//{
//    printf("Test3 begins:\n");
//
//    char* text = "Hello world";
//
//    CMyString str1(text);
//    CMyString str2, str3;
//    str3 = str2 = str1;
//
//    printf("The expected result is: %s.\n", text);
//
//    printf("The actual result is: ");
//    str2.Print();
//    printf(".\n");
//
//    printf("The expected result is: %s.\n", text);
//
//    printf("The actual result is: ");
//    str3.Print();
//    printf(".\n");
//}
//void Test()
//{
//	cout<<"Test1:NULL"<<endl;
//	CMyString str1;
//	str1.Print();
//
//	cout<<"Test2:char*"<<endl;
//	char* pstr = "HELLO WORLD!";
//	CMyString str2(pstr);
//	str2.Print();
//
//	cout<<"Test3:CString"<<endl;
//	CMyString str3(str2);
//	str3.Print();
//
//	cout<<"Test4:=="<<endl;
//	CMyString str4;
//	str4 = str3;
//	str4.Print();
//}
//int main()
//{
//	Test();
//	Test1();
//    Test2();
//    Test3();
//
//	system("pause");
//	return 0;
//}