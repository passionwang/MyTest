//#include<iostream>
//using namespace std;
//
/////////////////////////////////////////////////////////////////////
//class Sealed
//{
//private:
//	Sealed()
//	{
//
//	}
//	~Sealed()
//	{
//
//	}
//public:
//	static Sealed* GetInstance()
//	{
//		return new Sealed();
//	}
//	static void DeleteInstance(Sealed* pSealed)
//	{
//		if(pSealed)
//			delete pSealed;
//	}
//};
//
/////////////////////////////////////////////////////////////////////
//template <class T>
//class Sealed1
//{
//	friend T;
//private:
//	Sealed1()
//	{
//
//	}
//	~Sealed1()
//	{
//
//	}
//};
//class Sealed2 : virtual public Sealed1<Sealed2>
//{
//public:
//	Sealed2()
//	{
//
//	}
//	~Sealed2()
//	{
//
//	}
//};
//
//class A : public Sealed2
//{
//
//};
//
//
//int main()
//{
//	Sealed2 a;
//
//	system("pause");
//	return 0;
//}