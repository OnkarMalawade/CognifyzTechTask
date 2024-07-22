#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter Size of Array : ";
	cin >> n;
	
	int arr[n];
	cout << "\nEnter Elements in the Array : ";
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}	
	
	for(int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++){
		int temp = arr[i];
		int j = i - 1;
		for( ; j >= 0; j--){
			if(arr[j] > temp){
				arr[j+1] = arr[j];
			}else{
				break;
			}
		}
		arr[j+1] = temp;
	}
	
	for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}
