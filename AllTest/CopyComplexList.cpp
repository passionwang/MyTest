//#include<iostream>
//#include"ComplexList.h"
//using namespace std;
//
//
//
//ComplexListNode* Clone(ComplexListNode* pHead)
//{
//	if(NULL == pHead) return NULL;
//
//	ComplexListNode* pNode = pHead;
//	while(pNode != NULL)
//	{
//		//初始化
//		ComplexListNode* pTemp = new ComplexListNode;
//		pTemp->m_nValue = pNode->m_nValue;
//		pTemp->m_pNext = NULL;
//		pTemp->m_pSibling = NULL;
//		//链接
//		pTemp->m_pNext = pNode->m_pNext;
//		pNode->m_pNext = pTemp;
//		//下移
//		pNode = pTemp->m_pNext;
//	}
//	pNode = pHead;
//	while(pNode != NULL)
//	{
//		if(pNode->m_pSibling != NULL)
//		{
//			pNode->m_pNext->m_pSibling = pNode->m_pSibling->m_pNext;
//		}
//		pNode = pNode->m_pNext->m_pNext;
//	}
//	pNode = pHead;
//	ComplexListNode* pHead2 = pNode->m_pNext;
//	ComplexListNode* pNode2 = pHead2;
//	while(pNode != NULL)
//	{
//		pNode->m_pNext = pNode->m_pNext->m_pNext;
//		if(NULL != pNode->m_pNext)
//			pNode2->m_pNext = pNode->m_pNext->m_pNext;
//		pNode = pNode->m_pNext;
//		pNode2 = pNode2->m_pNext;
//	}
//	return pHead2;
//}
//// ====================测试代码====================
//void Test(char* testName, ComplexListNode* pHead)
//{
//    if(testName != NULL)
//        printf("%s begins:\n", testName);
//
//    printf("The original list is:\n");
//    PrintList(pHead);
//
//    ComplexListNode* pClonedHead = Clone(pHead);
//
//    printf("The cloned list is:\n");
//    PrintList(pClonedHead);
//}
//
////          -----------------
////         \|/              |
////  1-------2-------3-------4-------5
////  |       |      /|\             /|\
////  --------+--------               |
////          -------------------------
//void Test1()
//{
//    ComplexListNode* pNode1 = CreateNode(1);
//    ComplexListNode* pNode2 = CreateNode(2);
//    ComplexListNode* pNode3 = CreateNode(3);
//    ComplexListNode* pNode4 = CreateNode(4);
//    ComplexListNode* pNode5 = CreateNode(5);
//
//    BuildNodes(pNode1, pNode2, pNode3);
//    BuildNodes(pNode2, pNode3, pNode5);
//    BuildNodes(pNode3, pNode4, NULL);
//    BuildNodes(pNode4, pNode5, pNode2);
//
//    Test("Test1", pNode1);
//}
//
//// m_pSibling指向结点自身
////          -----------------
////         \|/              |
////  1-------2-------3-------4-------5
////         |       | /|\           /|\
////         |       | --             |
////         |------------------------|
//void Test2()
//{
//    ComplexListNode* pNode1 = CreateNode(1);
//    ComplexListNode* pNode2 = CreateNode(2);
//    ComplexListNode* pNode3 = CreateNode(3);
//    ComplexListNode* pNode4 = CreateNode(4);
//    ComplexListNode* pNode5 = CreateNode(5);
//
//    BuildNodes(pNode1, pNode2, NULL);
//    BuildNodes(pNode2, pNode3, pNode5);
//    BuildNodes(pNode3, pNode4, pNode3);
//    BuildNodes(pNode4, pNode5, pNode2);
//
//    Test("Test2", pNode1);
//}
//
//// m_pSibling形成环
////          -----------------
////         \|/              |
////  1-------2-------3-------4-------5
////          |              /|\
////          |               |
////          |---------------|
//void Test3()
//{
//    ComplexListNode* pNode1 = CreateNode(1);
//    ComplexListNode* pNode2 = CreateNode(2);
//    ComplexListNode* pNode3 = CreateNode(3);
//    ComplexListNode* pNode4 = CreateNode(4);
//    ComplexListNode* pNode5 = CreateNode(5);
//
//    BuildNodes(pNode1, pNode2, NULL);
//    BuildNodes(pNode2, pNode3, pNode4);
//    BuildNodes(pNode3, pNode4, NULL);
//    BuildNodes(pNode4, pNode5, pNode2);
//
//    Test("Test3", pNode1);
//}
//
//// 只有一个结点
//void Test4()
//{
//    ComplexListNode* pNode1 = CreateNode(1);
//    BuildNodes(pNode1, NULL, pNode1);
//
//    Test("Test4", pNode1);
//}
//
//// 鲁棒性测试
//void Test5()
//{
//    Test("Test5", NULL);
//}
//
//int main(int argc, char* argv[])
//{
//    Test1();
//    Test2();
//    Test3();
//    Test4();
//    Test5();
//	system("pause");
//    return 0;
//}
//
////int main()
////{
////
////
////
////
////	system("pause");
////	return 0;
////}