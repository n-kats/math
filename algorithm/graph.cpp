#include <vector>

class GraphNode{
public:
	std::vector<GraphNode* > neighbors;
	Tree
};

class TreeNode{
public:
	TreeNode* parent;
	TreeNode* root(){
		TreeNode* pt = this;
		while((*pt).parent != nullptr){
			pt = (*pt).parent;
		}
		return pt;
	}
};
using std::vector<TreeNode> Tree;
int main(){

	return 0;
}
