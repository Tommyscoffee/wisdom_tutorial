#include<iostream>
using namespace std;

//演算子の拡張

// class Integer {
// 	int value;
// public:
// 	int operator + (Integer obj) {//演算子のオーバーロード
// 		return this->value + obj.value;//"+"の左辺のオペラんどは暗黙的にthisポインタである。今回はthis->valueが指定されていうr
// 	}
// 	Integer(int value) { this->value = value; }
// };

// int main() {
// 	Integer obj1(10) , obj2(100);
// 	cout << obj1 + obj2;//この呼び出しの手順は、obj1がIntegerクラスなので次に"+"が来たら次のオブジェクトを引数に取るということです。
// 	return 0;
// }

////////
//=演算子のオーバーロードでは以下を保証すべき
// op1 = op2 = op3 = op4

// class String {
// public:
// 	char *str;
// 	String operator =(char *str) {
// 		this->str = str;
// 		return *this;
// 	}
// };

// int main() {
// 	String str1 , str2;
// 	str1 = str2 = "Kitty on your lap\n";
// 	cout << str1.str << str2.str;
// 	return 0;
// }


class POINT {
public:
	long x;
	long y;
	void operator ++(int n) {
		x++; y++;
	}
	POINT operator ++() {
		++x; ++y;
		return *this;
	}
} obj1 , obj2 ;

int main() {
	obj1.x = 10; obj2.y = 5;
	obj2 = ++obj1;
	obj2++;

	cout << "x = " << obj1.x << "\ty = " << obj1.y << '\n';
	cout << "x = " << obj2.x << "\ty = " << obj2.y << '\n';
	return 0;
}