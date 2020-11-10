#include <iostream>
#include <stack>
using namespace std;

void listAllElements(stack <int> elements) {
	while (!elements.empty()) {
		cout << " "<< elements.top();
		elements.pop();
	}
	cout << " , " ;
}

int main() {
	stack <int> elements;
	elements.push(1);
	elements.push(2);
	elements.push(3);
	elements.push(4);
	elements.push(5);
	elements.push(6);
	elements.push(7);
	elements.push(8);
	elements.push(9);
	elements.push(10);
	cout << "Elements: ";
	listAllElements(elements);

	return 0;
}