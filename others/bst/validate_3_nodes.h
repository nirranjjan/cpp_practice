using namespace std;

// This is an input class. Do not edit.
class BST {
 public:
  int value;
  BST* left = nullptr;
  BST* right = nullptr;

  BST(int value) { this->value = value; }
};

bool isDesc(BST* node, BST* target) 
{
  BST* cur = node;
  while(cur && cur != target) {
    if(target->value < cur->value) {
      cur = cur->left;
    } else {
      cur = cur->right;
    }
  }
  return (cur == target);
}

bool validateThreeNodes(BST* nodeOne, BST* nodeTwo, BST* nodeThree) {
  if(isDesc(nodeTwo, nodeOne)) {
    return isDesc(nodeThree, nodeTwo);
  }

  if(isDesc(nodeTwo, nodeThree)) {
    return isDesc(nodeOne, nodeTwo);
  }
  return false;
}




