#include "tree.h"

adrNode newNode_1301213017(infotype x){
    adrNode a = new node;
    info (a) = x;
    left (a) = NULL;
    right (a) = NULL;
    return a;
}

adrNode findNode_1301213017(adrNode root, infotype x){
    if(root == NULL){
        return NULL;
    }else{
        if(x < info(root)){
            return findNode_1301213017(left(root), x);
        }else if(x > info(root)){
            return findNode_1301213017(right(root), x);
        }else{
            return root;
        }
    }
}

void insertNode_1301213017(adrNode &root, adrNode p){
    if(root == NULL){
        root = p;
    }else{
        if(info(p) < info(root)){
            insertNode_1301213017(left(root), p);
        }else if(info(p) > info(root)){
            insertNode_1301213017(right(root), p);
        }else{
            cout << "Angka sudah tersedia" << endl;
        }
    }
}

void printPreOrder_1301213017(adrNode root){
    if(root != NULL){
        if(root != NULL){
            cout << info(root) << " ";
        }
        printPreOrder_1301213017(left(root));
        printPreOrder_1301213017(right(root));
    }
}

void printDescendant_1301213017(adrNode root, infotype x){
    adrNode Q = findNode_1301213017(root, x);
    if(Q != NULL){
        adrNode R = left(Q);
        printPreOrder_1301213017(R);
        adrNode T = right(Q);
        printPreOrder_1301213017(T);
    }else{
        cout << "Node yang dicari tidak tersedia" << endl;
    }
}

int sumNode_1301213017(adrNode root){
    if(root == NULL){
        return 0;
    }else{
        return info(root) + sumNode_1301213017(left(root)) + sumNode_1301213017(right(root));
    }
}

int countLeaves_1301213017(adrNode root){
    if(root == NULL){
        return 0;
    }

    if(left(root) == NULL && right(root)== NULL){
        return 1;
    }else{
        return countLeaves_1301213017(left(root)) + countLeaves_1301213017(right(root));
    }
}

int heightTree_1301213017(adrNode root){
    if(root == NULL){
        return 0;
    }else{
        int left_neath = heightTree_1301213017(left(root));
        int right_neath = heightTree_1301213017(right(root));
        if(left_neath > right_neath){
            return left_neath + 1;
        }else{
            return right_neath + 1;
        }
    }
}
