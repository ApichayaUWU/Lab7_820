#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
    cout << "Input text: ";
	string word;
	cin >> word;
    cout << "Reversed text: " << func1(word) << endl;
    cout << "Palindrome: ";
	if (func2(word) == func2(func1(word)) or func3(word) == func3(func1(word)))
	{
		cout << "Yes";
	}else
	{
		cout << "No";

	}
    return 0;
}
