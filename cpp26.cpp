#include<iostream>
using namespace std;
//並列的継承の問題点
//同じクラスを二度継承するという事態が起こる
//基本クラス-派生クラス1
//		  -派生クラス2 派生クラス3(このクラスは基本クラスを2回継承している)

// class Base {
// public:
// 	char *name;
// };

// class Derived1: public Base {
// public:
// 	int age;
// };

// class Derived2 : public Base {
// public:
// 	char *sex;
// };

// class Derived3 : public Derived1 , public Derived2 {
// public:
// 	void print() {
// 		cout << "名前 : " << name;
// 		cout << "\t年齢 : " << age;
// 		cout << "\t性別 : " << sex << '\n';
// 	}
// } obj ;

// int main() {
// 	obj.name = "前原しのぶ";//基本クラスのメンバ変数が曖昧になってしまう。
// 	obj.age = 13;
// 	obj.sex = "女";
// 	obj.print();
// 	return 0;
// }

//仮想基本クラスを用いると解決できる
//Baseクラスを仮想基本クラスと宣言すると、派生クラスで二度継承する事態を避けられる。virtualというキーワードを使う


class Base {
public:
	char *name;
};

class Derived1: virtual public Base {//ここで継承元クラスをvirtualで宣言すると
public:
	int age;
};

class Derived2 : virtual public Base {
public:
	char *sex;
};

class Derived3 : public Derived1 , public Derived2 {
public:
	void print() {
		cout << "名前 : " << name;
		cout << "\t年齢 : " << age;
		cout << "\t性別 : " << sex << '\n';
	}
} obj ;

int main() {
	obj.name = "前原しのぶ";
	obj.age = 13;
	obj.sex = "女";
	obj.print();
	return 0;
}