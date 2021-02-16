#include<iostream>
using namespace std;
void gugudan(int a);

int main() {
	cout << "몇 단을 출력할까요?" << endl;
	int a;
	cin >> a;
	if (a >= 2 && a <= 9) {
		gugudan(a);
	}
	else {
		cout << "잘못된 단입니다." << endl;
	}
	return 0;
}

void gugudan(int a) {
	cout << a << " 단!" << endl;
	for (int i = 1; i < 10; i++) {
		cout << a << " X " << i << " = " << a * i << endl;
	}
}
