#include<iostream>
using namespace std;
void gugudan(int a);

int main() {
	cout << "�� ���� ����ұ��?" << endl;
	int a;
	cin >> a;
	if (a >= 2 && a <= 9) {
		gugudan(a);
	}
	else {
		cout << "�߸��� ���Դϴ�." << endl;
	}
	return 0;
}

void gugudan(int a) {
	cout << a << " ��!" << endl;
	for (int i = 1; i < 10; i++) {
		cout << a << " X " << i << " = " << a * i << endl;
	}
}
