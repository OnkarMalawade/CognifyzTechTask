#include<iostream>
using namespace std;
// recursive
int fibo(int n){
	// base case
	if(n == 0){
		return 0;
	}
	if(n == 1){
		return 1;
	}
	
	// process
	return fibo(n-1)+fibo(n-2);
}
void fibbo(int n){
	if(n == 0){
		cout << "0 ";
	}
	if(n == 1){
		cout << "1";
	}
	if(n == 2){
		cout << "1 1";
	}
	
	cout << "1 1";
	
	int n1 = 1;
	int n2 = 1;
	
	while(n > 2){
		int sum = n1 + n2;
		cout << " " << sum;
		n1 = n2;
		n2 = sum;
		n--;
	}
	return ;
}
int main(){
	int n;
	cout << "Enter Number : ";
	cin >> n;
	cout << fibo(n) << endl;
	cout << "Enter Number : ";
	cin >> n;
	fibbo(n);
	return 0;
}
