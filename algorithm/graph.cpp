#include <iostream>
#include <vector>
class GraphNode;
class TreeNode;

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
using namespace std;
int main(){
	TreeNode* parent;
	TreeNode* root(){
		TreeNode* pt = this;
		while((*pt).parent != nullptr){
			pt = (*pt).parent;
		}
		return pt;
	}

	cout << "hoge" << endl;
	return 0;
}
