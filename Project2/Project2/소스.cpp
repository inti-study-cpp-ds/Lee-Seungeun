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
		cout << "1. 물           700원" << endl;
		cout << "2. 핫초코      1000원" << endl;
		cout << "3. 콜라         800원" << endl;
		cout << "4. 커피        1000원" << endl;
		cout << endl;
	}

	void choose() {
		cout << "음료를 골라주세요" << endl;
		cout << "1.물  2.핫초코  3.콜라  4.커피" << endl;
		cin >> menu;
	}

	void input_money() {
		cout << "돈을 넣어주세요" << endl;
		cin >> money;
	}

	void check_money() {
		if (price[menu - 1] > money) {
			cout << "돈이 부족합니다" << endl;
			cout << money << "원을 반환합니다" << endl;
		}
		else if (price[menu - 1] <= money) {
			cout << "구매해주셔서 감사합니다" << endl;

			if (price[menu - 1] < money) {
				cout << "잔돈은 " << money - price[menu - 1] << "원 입니다" << endl;
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