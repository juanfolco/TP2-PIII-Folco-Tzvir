#ifndef U06_ARBOL_ARBOL_TREENODE_H_
#define U06_ARBOL_ARBOL_TREENODE_H_

template <class T> class TreeNode {
private:
    TreeNode<T> *left, *right;
    int min_edad;
    int max_edad;
    int cantidad;
public:
    int getMinEdad() const {
        return min_edad;
    }

    void setMinEdad(int minEdad) {
        min_edad = minEdad;
    }

    int getMaxEdad() const {
        return max_edad;
    }

    void setMaxEdad(int maxEdad) {
        max_edad = maxEdad;
    }

    int getCantidad() const {
        return cantidad;
    }

    void setCantidad(int cantidad) {
        TreeNode::cantidad = cantidad;
    }

public:
    TreeNode() {
        left = nullptr;
        right = nullptr;
    }

    TreeNode<T> *getLeft() const { return left; }
    void setLeft(TreeNode<T> *left) { TreeNode::left = left; }
    TreeNode<T> *getRight() const { return right; }
    void setRight(TreeNode<T> *right) { TreeNode::right = right; }
};

#endif // U06_ARBOL_ARBOL_TREENODE_H_