#include<iostream>
using namespace std;

bool isAlphaNum(char ch){
	if((ch >='0'&& ch <='9')|| (tolower(ch)>= 'a' && tolower(ch)<='z')){
		return true;
	}
	return false;
}

bool isPlindrome(string s){
	int st = 0;
	int end = s.length()-1;
	
	while(st<end){
		if(!isAlphaNum(s[st])){
			st++;
			continue;
		}
		if(!isAlphaNum(s[end])){
			end--;
			continue;
		}
		if(tolower(s[st])!=tolower(s[end])){
			return false;
		}
		st++;
		end--;
	}
}

int main(){
	string s="Ac3?3c&a";
	bool pal=isPlindrome(s);
	if(pal){
		cout<<"palindrome";
	}
	else{
		cout<<"not palindrome";
	}
}