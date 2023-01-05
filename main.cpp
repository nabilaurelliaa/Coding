#include "Tree.h"

int main(){
    cout << "=========================================================================" << endl;
    int x[9] = {5,3,9,10,4,7,1,8,6};
    for(int k = 0; k < 9; k++){
        cout << x[k] << " ";
    }
    cout << endl << endl;

    Tree tree = NULL; adrNode z;

    for(int n = 0; n < 9; n++){
        z = newNode_1301213017(x[n]);
        insertNode_1301213017(tree, z);
    }

    cout << "Pre-Order            : ";
    printPreOrder_1301213017(tree);
    cout << endl;
    cout << endl;

    cout << "Descendent of Node 9 : ";
    printDescendant_1301213017(tree, 9);
    cout << endl;
    cout << endl;

    cout << "Sum of BST info      : " << sumNode_1301213017(tree) << endl;
    cout << "Number of Leaves     : " << countLeaves_1301213017(tree) << endl;
    cout << "Height of Tree       : " << heightTree_1301213017(tree) -1 << endl;
    cout << "=========================================================================" << endl;
}
