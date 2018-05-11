#include<iostream>

using namespace std;

//Time Complexity of fibonacci: O()
int fibonacci(int n) {
	if (n <= 0) {
		return 0;
	}
	else if (n <=2) {
		return 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	for (int i = 1; i <= 10; i++) {
		cout << fibonacci(i)<< " ";
	}
}