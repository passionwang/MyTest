#pragma once
#ifndef __INCLUDE_TREE_H__
#define __INCLUDE_TREE_H__
#include <vector>

struct TreeNode 
{
    int                    m_nValue;    
    std::vector<TreeNode*>    m_vChildren;    
};

TreeNode* CreateTreeNode(int value);
void ConnectTreeNodes(TreeNode* pParent, TreeNode* pChild);
void PrintTreeNode(TreeNode* pNode);
void PrintTree(TreeNode* pRoot);
void DestroyTree(TreeNode* pRoot);
#endif //__INCLUDE_TREE_H__
