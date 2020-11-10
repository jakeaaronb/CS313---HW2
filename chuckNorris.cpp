#include <iostream>
#include <fstream>
#include <stack>
#include <string>
using namespace std;
//File reader function
void readFromFile(ifstream) {
	ifstream myFile("chucknorrisfile.txt"); //file input
	if (myFile != 0) { //if the file isn't equal to zero. or nothing in it
		cout << "File Loading and Searching" << endl; // Print out that we know the file isn't empty
		while (!myFile.eof()) { // reading the whole file through
			string line;
			getline(myFile, line);
			cout << line << endl;
		}
	}
}

void reverseString(string str) { // This is the function to establish the reversal
	stack<string> s;
	string temp = "";
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			s.push(temp);
			temp = "";
		}
		else {
			temp = temp + str[i];
		}
	}
	s.push(temp);
	while (!s.empty()) {
		temp = s.top();
		cout << temp << " ";
		s.pop();
	}
	cout << endl;
}
int main() {
	string str = "When Chuck Norris falls in water, Chuck Norris doesn't get wet. Watergets Chuck Norris."
		reverseString(str);
	myFile.close();
	return 0;
}