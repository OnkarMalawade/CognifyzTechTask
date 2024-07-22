#include <bits/stdc++.h>
using namespace std;

void reverseWords(string s)
{
    vector<string> tmp;
    string str = "";
    for(int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            tmp.push_back(str);
            str = "";
        }
        else{
		    str += s[i];
		}
    }

    tmp.push_back(str);

    for(int i = tmp.size() - 1; i > 0; i--){
        cout << tmp[i] << " ";
	}
    
    cout << tmp[0] << endl;
}

void reverseString(string str){
	int n = str.length();
	int s = 0, e = n-1;
	while(s <= e){
		char ch = str[s];
		str[s] = str[e];
		str[e] = ch;
		s++;
		e--;
	}
	cout << str;
}
   
int main()
{
    string s = "i am programmer";
    reverseWords(s);
    
    string str = "Onkar";
    reverseString(str);
    
    return 0;
}
