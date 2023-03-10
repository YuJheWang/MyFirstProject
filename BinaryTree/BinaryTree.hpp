#pragma once

template <typename T>
class BinaryTreeNode 
{
public:

    T value;

    BinaryTreeNode* left{nullptr}, *right{nullptr}, *parent{nullptr};

    BinaryTreeNode(T v) : value(v) {}

    ~BinaryTreeNode() { delete left; delete right; }

    void Add(BinaryTreeNode* node);

    void Delete();

    BinaryTreeNode* Copy();

    BinaryTreeNode* GetLeftest();

    BinaryTreeNode* GetRightest();

};

template <typename T, typename Iter>
BinaryTreeNode<T>* Read(Iter begin, Iter end)
{
    BinaryTreeNode<T>* result = new BinaryTreeNode(*begin);
    for (auto i = begin + 1; i != end; i++)
        result->Add(new BinaryTreeNode<T>(*i));
    return result;
}

#include "BinaryTree.inl"
