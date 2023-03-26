#include <vector>
#include <iostream>

template <typename T>
struct Node
{
    Node<T> *left;
    Node<T> *right;
    T obj;

    Node(T obj, Node<T> *left = nullptr, Node<T> *right = nullptr)
        : obj(obj), left(left), right(right)
    {
    }
};

template <typename T>
int count_filled_nodes(const Node<T> *node)
{
    // Insert code
    if(node == nullptr)
        return 0;
    else if(node->left == nullptr || node->right == nullptr)
        return 0;
    else{
        return 1 + count_filled_nodes(node->left) + count_filled_nodes(node->right);
    }

}

int main(){}