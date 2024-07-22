#include<iostream>
using namespace std;
void checkWinner(int arr[], int n){
	int cnt = 0;
	int maxWin = 0;
	int ans = arr[0];
	
	for(int i = 0; i < n; i++){
		ans = arr[i];
		cnt = 0;
		for(int j = i + 1; j < n; j++){
			if(arr[i] == arr[j]){
				cnt++;
			}
		}
		if(cnt > maxWin){
			maxWin = cnt;
			ans = arr[i];
		}
	}
	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
	cout << ans ;
}
int main(){
	int arr[] = {1,1,2,3,1,2,2,2,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	checkWinner(arr,n);
	return 0;
}
