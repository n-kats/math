#include <vector>
#include <iostream>
class GraphNode;
class TreeNode;

class GraphNode{
  std::vector<GraphNode* > neighbors;
};

class TreeNode{
  TreeNode* parent;
  TreeNode* root(){
    TreeNode* pt = this;
    while((*pt).parent != nullptr){
      pt = (*pt).parent;
    }
    return pt;
  }
};

using namespace std;
int main(){
	cout << "hoge" << endl;
	return 0;
}
