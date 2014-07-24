#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
vector<int> mergeSort(vector<int>);
vector<int> merge(vector<int>, vector<int>);

void main() {
	int x[]= {5,1,7,9,4,2,6,3,8,12,34,22,11,444};
	vector<int> a(x, x + sizeof(x) / sizeof(int));
	a= mergeSort(a);
}

vector<int> mergeSort(vector<int> a){
	vector<int> b, c;
	if (a.size() > 1){
		for (unsigned int i = 0; i < max((int)ceil(((double)a.size()/2)), 1); i++){
			b.push_back(a[i]);
		}
		for (unsigned int i = (ceil((double)a.size()/2)); i < a.size(); i++){
			c.push_back(a[i]);
		}
		b = mergeSort(b);
		c = mergeSort(c);
		return merge(b,c);
	}
	return a;
}

vector<int> merge(vector<int> a, vector<int> b){
	unsigned int i(0), j(0);
	vector<int> c;
	while (i < a.size() || j < b.size()){
		if(i==a.size() && j < b.size()){
			c.push_back(b[j]);
			j++;
		} else if (j==b.size() && i < a.size()){
			c.push_back(a[i]);
			i++;
		} else if (a[i] <= b[j]){
			c.push_back(a[i]);
			i++;
		} else {
			c.push_back(b[j]);
			j++;
		}
	}
	return c;
}
