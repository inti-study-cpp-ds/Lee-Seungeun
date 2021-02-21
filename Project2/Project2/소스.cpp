#include <iostream>
using namespace std;

class Vendingmachine {
private:
	int menu;
	int price[4] = { 700,1000,800,1000 };
	int money;

public:
	void show_menu() {
		cout << "-Menu----------price-" << endl;
		cout << "1. ��           700��" << endl;
		cout << "2. ������      1000��" << endl;
		cout << "3. �ݶ�         800��" << endl;
		cout << "4. Ŀ��        1000��" << endl;
		cout << endl;
	}

	void choose() {
		cout << "���Ḧ ����ּ���" << endl;
		cout << "1.��  2.������  3.�ݶ�  4.Ŀ��" << endl;
		cin >> menu;
	}

	void input_money() {
		cout << "���� �־��ּ���" << endl;
		cin >> money;
	}

	void check_money() {
		if (price[menu - 1] > money) {
			cout << "���� �����մϴ�" << endl;
			cout << money << "���� ��ȯ�մϴ�" << endl;
		}
		else if (price[menu - 1] <= money) {
			cout << "�������ּż� �����մϴ�" << endl;

			if (price[menu - 1] < money) {
				cout << "�ܵ��� " << money - price[menu - 1] << "�� �Դϴ�" << endl;
			}
		}
	}
};

int main() {
	Vendingmachine m;
	m.show_menu();
	m.choose();
	m.input_money();
	m.check_money();

	return 0;
}