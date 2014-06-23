//
//  TreeManipulation.cpp
//  exercise
//
//  Created by labuser on 6/23/14.
//  Copyright (c) 2014 labuser. All rights reserved.
//

#include "TreeManipulation.h"
#include <list>


// self, left, right
void FrontOrderTraverseTree(BinaryTreeNode* treeNode)
{
    if (treeNode == NULL)
    {
        return;
    }
    
    // output data
    std::cout << treeNode->data;
    
    FrontOrderTraverseTree(treeNode->pLeft);
    FrontOrderTraverseTree(treeNode->pRight);
}

//left, self, right
void InOrderTraverseTree(BinaryTreeNode* treeNode)
{
    if (treeNode == NULL)
    {
        return;
    }
    
    FrontOrderTraverseTree(treeNode->pLeft);
    // output data
    std::cout << treeNode->data;
    
    FrontOrderTraverseTree(treeNode->pRight);
}


//left, right self
void BackOrderTraverseTree(BinaryTreeNode* treeNode)
{
    if (treeNode == NULL)
    {
        return;
    }
    
    FrontOrderTraverseTree(treeNode->pLeft);
    FrontOrderTraverseTree(treeNode->pRight);
    
    // output data
    std::cout << treeNode->data;
}

// In Width
void TraverseTreeInWidth(BinaryTreeNode* treeNode)
{
    if (treeNode == NULL)
        return;
    
    std::list<BinaryTreeNode*> treeNodeList;
    
    treeNodeList.push_back(treeNode);
    
    while (!treeNodeList.empty())
    {
        BinaryTreeNode* treeNode = treeNodeList.front();
        treeNodeList.pop_front();
        // output treeNode's value
        
        if (treeNode->pLeft)
        {
            treeNodeList.push_back(treeNode->pLeft);
        }
        
        if (treeNode->pRight)
        {
            treeNodeList.push_back(treeNode->pRight);
        }
    }
}
























