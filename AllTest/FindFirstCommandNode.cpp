//#include<iostream>
//#include"ListNode.h"
//using namespace std;
//
//ListNode* FindFirstCommandNode(ListNode* pHead1,ListNode* pHead2)
//{
//	if(NULL == pHead1 || NULL == pHead2) return NULL;
//
//	ListNode* pNode1 = pHead1;
//	ListNode* pNode2 = pHead2;
//
//	int nLen1 = 0;
//	while(NULL != pNode1->m_pNext)
//	{
//		++nLen1;
//		pNode1 = pNode1->m_pNext;
//	}
//	int nLen2 = 0;
//	while(NULL != pNode2->m_pNext)
//	{
//		++nLen2;
//		pNode2 = pNode2->m_pNext;
//	}
//
//	pNode1 = pHead1;
//	pNode2 = pHead2;
//	if(nLen1>nLen2)
//	{
//		for(int i=0;i<nLen1-nLen2;++i)
//			pNode1 = pNode1->m_pNext;
//	}
//	else
//	{
//		for(int i=0;i<nLen2-nLen1;++i)
//			pNode2 = pNode2->m_pNext;
//	}
//
//	while(NULL != pNode1 && NULL != pNode2)
//	{
//		if(pNode1 == pNode2)
//			return pNode1;
//		pNode1 = pNode1->m_pNext;
//		pNode2 = pNode2->m_pNext;
//	}
//	return NULL;
//}
//
//
//// ====================测试代码====================
//void DestroyNode(ListNode* pNode);
//
//void Test(char* testName, ListNode* pHead1, ListNode* pHead2, ListNode* pExpected)
//{
//    if(testName != NULL)
//        printf("%s begins: ", testName);
//
//    ListNode* pResult = FindFirstCommandNode(pHead1, pHead2);
//    if(pResult == pExpected)
//        printf("Passed.\n");
//    else
//        printf("Failed.\n");
//}
//
//// 第一个公共结点在链表中间
//// 1 - 2 - 3 \
////            6 - 7
////     4 - 5 /
//void Test1()
//{
//    ListNode* pNode1 = CreateListNode(1);
//    ListNode* pNode2 = CreateListNode(2);
//    ListNode* pNode3 = CreateListNode(3);
//    ListNode* pNode4 = CreateListNode(4);
//    ListNode* pNode5 = CreateListNode(5);
//    ListNode* pNode6 = CreateListNode(6);
//    ListNode* pNode7 = CreateListNode(7);
//
//    ConnectListNodes(pNode1, pNode2);
//    ConnectListNodes(pNode2, pNode3);
//    ConnectListNodes(pNode3, pNode6);
//    ConnectListNodes(pNode4, pNode5);
//    ConnectListNodes(pNode5, pNode6);
//    ConnectListNodes(pNode6, pNode7);
//
//    Test("Test1", pNode1, pNode4, pNode6);
//
//    DestroyNode(pNode1);
//    DestroyNode(pNode2);
//    DestroyNode(pNode3);
//    DestroyNode(pNode4);
//    DestroyNode(pNode5);
//    DestroyNode(pNode6);
//    DestroyNode(pNode7);
//}
//
//// 没有公共结点
//// 1 - 2 - 3 - 4
////            
//// 5 - 6 - 7
//void Test2()
//{
//    ListNode* pNode1 = CreateListNode(1);
//    ListNode* pNode2 = CreateListNode(2);
//    ListNode* pNode3 = CreateListNode(3);
//    ListNode* pNode4 = CreateListNode(4);
//    ListNode* pNode5 = CreateListNode(5);
//    ListNode* pNode6 = CreateListNode(6);
//    ListNode* pNode7 = CreateListNode(7);
//
//    ConnectListNodes(pNode1, pNode2);
//    ConnectListNodes(pNode2, pNode3);
//    ConnectListNodes(pNode3, pNode4);
//    ConnectListNodes(pNode5, pNode6);
//    ConnectListNodes(pNode6, pNode7);
//
//    Test("Test2", pNode1, pNode5, NULL);
//
//    DestroyList(pNode1);
//    DestroyList(pNode5);
//}
//
//// 公共结点是最后一个结点
//// 1 - 2 - 3 - 4 \
////                7
////         5 - 6 /
//void Test3()
//{
//    ListNode* pNode1 = CreateListNode(1);
//    ListNode* pNode2 = CreateListNode(2);
//    ListNode* pNode3 = CreateListNode(3);
//    ListNode* pNode4 = CreateListNode(4);
//    ListNode* pNode5 = CreateListNode(5);
//    ListNode* pNode6 = CreateListNode(6);
//    ListNode* pNode7 = CreateListNode(7);
//
//    ConnectListNodes(pNode1, pNode2);
//    ConnectListNodes(pNode2, pNode3);
//    ConnectListNodes(pNode3, pNode4);
//    ConnectListNodes(pNode4, pNode7);
//    ConnectListNodes(pNode5, pNode6);
//    ConnectListNodes(pNode6, pNode7);
//
//    Test("Test3", pNode1, pNode5, pNode7);
//
//    DestroyNode(pNode1);
//    DestroyNode(pNode2);
//    DestroyNode(pNode3);
//    DestroyNode(pNode4);
//    DestroyNode(pNode5);
//    DestroyNode(pNode6);
//    DestroyNode(pNode7);
//}
//
//// 公共结点是第一个结点
//// 1 - 2 - 3 - 4 - 5
//// 两个链表完全重合   
//void Test4()
//{
//    ListNode* pNode1 = CreateListNode(1);
//    ListNode* pNode2 = CreateListNode(2);
//    ListNode* pNode3 = CreateListNode(3);
//    ListNode* pNode4 = CreateListNode(4);
//    ListNode* pNode5 = CreateListNode(5);
//
//    ConnectListNodes(pNode1, pNode2);
//    ConnectListNodes(pNode2, pNode3);
//    ConnectListNodes(pNode3, pNode4);
//    ConnectListNodes(pNode4, pNode5);
//
//    Test("Test4", pNode1, pNode1, pNode1);
//
//    DestroyList(pNode1);
//}
//
//// 输入的两个链表有一个空链表
//void Test5()
//{
//    ListNode* pNode1 = CreateListNode(1);
//    ListNode* pNode2 = CreateListNode(2);
//    ListNode* pNode3 = CreateListNode(3);
//    ListNode* pNode4 = CreateListNode(4);
//    ListNode* pNode5 = CreateListNode(5);
//
//    ConnectListNodes(pNode1, pNode2);
//    ConnectListNodes(pNode2, pNode3);
//    ConnectListNodes(pNode3, pNode4);
//    ConnectListNodes(pNode4, pNode5);
//
//    Test("Test5", NULL, pNode1, NULL);
//
//    DestroyList(pNode1);
//}
//
//// 输入的两个链表有一个空链表
//void Test6()
//{
//    Test("Test6", NULL, NULL, NULL);
//}
//
//void DestroyNode(ListNode* pNode)
//{
//    delete pNode;
//    pNode = NULL;
//}
//
//int main(int argc, char* argv[])
//{
//    Test1();
//    Test2();
//    Test3();
//    Test4();
//    Test5();
//    Test6();
//	system("pause");
//    return 0;
//}
////
////int main()
////{
////
////
////
////
////	system("pause");
////	return ;
////}