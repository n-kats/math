#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <functional>

using namespace std;


class Tensor{
	vector<int> sizes;
	vector<int> values;
};

class Matrix{
public:
	int height;
	int width;
private:
	vector<int> values;
public:
	Matrix(){
		height = 0;
		width = 0;
	}

	Matrix(int h, int w, vector<int> vals){
		if(h > 0 && w > 0 && vals.size() == h * w){
			height = h;
			width = w;
			values = vals;
		}else{
			height = 0;
			width = 0;
			values.clear();
			// cerr << illegal input << endl;
		}
	}
};

class Formula{
};

class LinearAlgebra{
public:
	LinearAlgebra(){}


	Matrix load(string s){
		return Matrix();
	}
	int rank(Matrix m){
		return 0;
	}

};

int main(){
	LinearAlgebra la;
	return 0;
}
