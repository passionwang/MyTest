//#include<iostream>
//
//using namespace std;
//#include "ListNode.h"
//
//
//
//ListNode* ReverseList(ListNode* pHead)
//{
//	if(NULL == pHead) return NULL;
//
//	if(NULL == pHead->m_pNext) return pHead;
//
//	ListNode* p1 = pHead;
//	ListNode* p2 = pHead->m_pNext;
//	ListNode* p3 = pHead->m_pNext->m_pNext;
//	p1->m_pNext = NULL;
//	while(NULL != p3)
//	{
//		p2->m_pNext = p1;
//		p1 = p2;
//		p2 = p3;
//		p3 = p3->m_pNext;
//	}
//	p2 ->m_pNext = p1;
//	return p2;
//}
//
//// ====================测试代码====================
//ListNode* Test(ListNode* pHead)
//{
//    printf("The original list is: \n");
//    PrintList(pHead);
//
//    ListNode* pReversedHead = ReverseList(pHead);
//
//    printf("The reversed list is: \n");
//    PrintList(pReversedHead);
//
//    return pReversedHead;
//}
//
//// 输入的链表有多个结点
//void Test1()
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
//    ListNode* pReversedHead = Test(pNode1);
//
//    DestroyList(pReversedHead);
//}
//
//// 输入的链表只有一个结点
//void Test2()
//{
//    ListNode* pNode1 = CreateListNode(1);
//
//    ListNode* pReversedHead = Test(pNode1);
//
//    DestroyList(pReversedHead);
//}
//
//// 输入空链表
//void Test3()
//{
//    Test(NULL);
//}
//
//int main(int argc, char* argv[])
//{
//    Test1();
//    Test2();
//    Test3();
//	system("pause");
//    return 0;
//}
//
////int main()
////{
////
////
////	system("pause");
////	return 0;
////}