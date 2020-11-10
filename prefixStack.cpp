#include <iostream>
using namespace std;

//math operator to differentiate between math symbols and numbers.
bool mathOperator(char ch) {
	return isdigit(ch); // isdigit checks whether or not a ch is a letter.
}
double prefixStack(string s) {
	stack<double> pSta;
	for (int i = s.size() - 1; i >= 0; i--) { // loop through to determine size of s
		if (mathOperator(s[i]))
			pSta.push(s[i] - '0'); // We send the math operaters through to the stack with push
		// and s[i] to subtract 0 from [i]
		else { // Here we pop our two numbers from the stack
			double mathOne = pSta.top();
			pSta.pop();
			double mathTwo = pSta.top();
			pSta.pop();
			// switch case to indicate math operations
			switch (s[i]) {
			case '*':
				pSta.push(mathOne * mathTwo);
			case '/':
				pSta.push(mathOne / mathTwo);
			case '+':
				pSta.push(mathOne + mathTwo);
			case '-':
				pSta.push(mathOne + mathTwo);

				break;
			}
		}
	}

	return pSta.top();

}
// Main method to test if prefixStack functions correctly
int main() {
	string s = " +-6/396*48+12 ";
		cout << prefixStack(s) << endl;
	return 0;
}