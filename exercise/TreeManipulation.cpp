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


void FrontOrderTraverseTreeWithoutCallstack(BinaryTreeNode* treeNode)
{
    std::list<BinaryTreeNode*> nodeList;
    nodeList.push_back(treeNode);
    
    while (!nodeList.empty())
    {
        // output treeNode's value
        BinaryTreeNode* node = nodeList.back();
        nodeList.pop_back();
        
        if (node->pRight)
        {
            nodeList.push_back(node->pRight);
        }
        
        if (node->pLeft)
        {
            nodeList.push_back(node->pLeft);
        }
    }
}


static void pushBackAllLeftNode(std::list<BinaryTreeNode*>& inNodeList, BinaryTreeNode* treeNode)
{
    while (treeNode)
    {
        inNodeList.push_back(treeNode);
        treeNode = treeNode->pLeft;
    }
}

void InOrderTraverseTreeWithoutCallstack(BinaryTreeNode* treeNode)
{
    std::list<BinaryTreeNode*> nodeList;
    
    pushBackAllLeftNode(nodeList, treeNode);
    
    while (!nodeList.empty())
    {
        BinaryTreeNode* node = nodeList.back();
        nodeList.pop_back();
        
        std::cout<<node->data;
        
        if (node->pRight)
        {
            pushBackAllLeftNode(nodeList, node->pRight);
        }
    }
    
}



/*
** Note
** Three printing conditions
** 1. Node does not contains bot left and right childs
** 2. The right child of the node had been printed.
** 3. The left child of the node had been printed and node does not contains right child
**
** Two push_back conditions
** 1. all the left nodes should be pushed back
** 2. if node's left child had been printed, and it contains right child, we should push right child into list
*/
void BackOrderTraverseTreeWithoutCallstack(BinaryTreeNode* treeNode)
{
    if (treeNode == NULL)
        return;
    
    std::list<BinaryTreeNode*> nodeList;
    nodeList.push_back(treeNode);
    BinaryTreeNode* lastNode = NULL;
    
    while (!nodeList.empty())
    {
        BinaryTreeNode* node = nodeList.back();
        
        if (node->pLeft == NULL && node->pRight == NULL)
        {
            std::cout<<node->data;
            nodeList.pop_back();
            lastNode = node;
        }
        else if ( node->pLeft == lastNode)
        {
            if (node->pRight)
            {
                nodeList.push_back(node->pRight);
                lastNode = NULL;
            }
            else
            {
                std::cout<<node->data;
                nodeList.pop_back();
                lastNode = node;
            }

        }
        else if (node->pRight == lastNode)
        {
            std::cout<<node->data;
            nodeList.pop_back();
            lastNode = node;
        }
        else
        {
            while(node->pLeft)
            {
                nodeList.push_back(node->pLeft);
                node = node->pLeft;
            }
        }
    }
}
























