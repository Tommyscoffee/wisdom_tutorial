#include <iostream>
using namespace std;
//派生クラスのポインタ

// class Base {
// public:
// 	char *str;
// };

// class Derived : public Base {
// public:
// 	int i;
// } obj ;

// int main() {
// 	obj.str = "Kitty on your lap";

// 	Base *po = &obj;
// 	cout << po->str;

// 	return 0;
// }

//obj変数はbaseクラスの派生クラスのDreivedのおぶえkつお
//これに対してポインタ変数poはBaseクラス型のポインタ変数。
//Base *po = &obj;
//これは派生クラスDerivedがBase暮らしのメンバを持っているので有効　参照でも同じ

class Base{
	public:
		char *str;
};

class Derived: public Base{
	public:
		int i;
} obj;

void getRef(Base &obj)
{
	cout << obj.str;
	// cout << obj.i;
}

int main()
{
	obj.str = "hollo";
	getRef(obj);
	return (0);	
}

//ポインタが示すオブジェクトは基本クラスの情報しかない