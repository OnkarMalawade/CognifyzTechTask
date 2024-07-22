#include<iostream>
using namespace std;

bool checkPal(string str){
	int s = 0; 
	int e = str.length()-1;
	while(s <= e){
		if(str[s] != str[e]){
			return false;
		}
		s++;
		e--;
	}
	return true;
}
int main(){
	string str;
	
	cout << "Enter Word : ";
	
	cin >> str;
	
	if(checkPal(str)){
		cout << "Palindrome";
	}else{
		cout << "Not Palindrome";
	}
	
	return 0;
}
