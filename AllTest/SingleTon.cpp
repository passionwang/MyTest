//#include<iostream>
//#include"Lock.h"
//using namespace std;
//
//class CSingleTon
//{
//public:
//	static CSingleTon* GetInstance()
//	{
//		if(m_SingleTon == NULL)
//		{
//			CAutoLock autolock(*m_Lock);
//			if(m_SingleTon == NULL)
//			{
//				m_SingleTon = new CSingleTon;
//			}
//		}
//		return m_SingleTon;
//	}
//	void DestoryInstance()
//	{
//		delete m_SingleTon;
//		m_SingleTon = NULL;
//		delete m_Lock;
//		m_Lock = NULL;
//	}
//private:
//	CSingleTon(){}
//	
//	~CSingleTon(){
//		//delete m_SingleTon;//ÎÞÏÞÑ­»·
//		//m_SingleTon = NULL;
//	}
//private:
//	static CSingleTon* m_SingleTon;
//	static CLock* m_Lock;
//};
//CSingleTon* CSingleTon::m_SingleTon = NULL;
//CLock* CSingleTon::m_Lock = new CLock;
//
//
//int main()
//{
//	CSingleTon* singleTon = CSingleTon::GetInstance();
//	singleTon->DestoryInstance();
//
//
//	system("pause");
//	return 0;
//}