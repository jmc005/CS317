#include <vector>

using namespace std;

void quickSort(vector<int>&, int, int);
int partitioner(vector<int>&, int, int);

void main() {
	int x[]= {5,1,7,9,4,2,6,3,8,12,34,22,11,444};
	vector<int> a(x, x + sizeof(x) / sizeof(int));
	quickSort(a, 0, a.size()-1);
}

void quickSort(vector<int>& list, int left, int right){
	if(left < right){
		int sort = partitioner(list, left, right); 
		quickSort(list, left, sort -1);
		quickSort(list, sort +1, right);
	}
}

int partitioner(vector<int>& list, int left, int right){
	int pivot = list[left];
	int l = left + 1;
	int r = right;

	while(l <= r){
		while(l <= right && list[l] <= pivot){
			l++;
		}

		while(r >= left && list[r] >= pivot){
			r--;
		}

		if(l < r){
			swap(list[l], list[r]);
		}
	}
	if(r > left) {
		swap(list[left], list[r]);
		return r;
	}
	else return left;
}
