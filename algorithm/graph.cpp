#include <vector>
class GraphNode{
  std::vector<GraphNode* > neighbors;
};

TreeNode{
  TreeNode* parent;
  TreeNode* root(){
    TreeNode* pt = this;
    while(*pt.parent != nullptr){
      pt = *pt.parent;
    }
    return pt;
  }
};

int main(){

}
