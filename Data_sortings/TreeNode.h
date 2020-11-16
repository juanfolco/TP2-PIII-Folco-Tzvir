#ifndef U06_ARBOL_ARBOL_TREENODE_H_
#define U06_ARBOL_ARBOL_TREENODE_H_

template <class T> class TreeNode {
private:
    TreeNode<T> *left, *right;
    T data;

public:
    explicit TreeNode(T data) : data(data) {
        left = nullptr;
        right = nullptr;
    }
    TreeNode() {
        left = nullptr;
        right = nullptr;
    }

    TreeNode<T> *getLeft() const { return left; }
    void setLeft(TreeNode<T> *left) { TreeNode::left = left; }
    TreeNode<T> *getRight() const { return right; }
    void setRight(TreeNode<T> *right) { TreeNode::right = right; }
    T getData() const { return data; }
    void setData(T data) { TreeNode::data = data; }
};

#endif // U06_ARBOL_ARBOL_TREENODE_H_