#include<iostream>

using namespace std;

int count(int a[], int s){
	set<int> new_a;

	for(int i = 0; i<s; i++){
		new_a.insert(a[i]);
	}

	return new_a.size();
}

int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}
