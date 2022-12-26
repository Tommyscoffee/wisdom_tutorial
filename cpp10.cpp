#include <iostream>
using namespace std;
//オブジェクトのアドレス
//オブジェクトのポインタの宣言と代入方法
//class-name *po;
//po = &obj;
//おぶえj区とのポインタからメンバ変数や関数にアクセスするには、これも構図お対同様にアロー演算子
//po->member;

// class Kitty{
// 	public:
// 	char *str;
// } obj;

// int main()
// {
// 	obj.str = "hello";
// 	Kitty *po = &obj;
// 	Kitty obj2;
// 	obj2.str = "obj2";
// 	po->str = "Kitty";

// 	cout << "obj.str = " << obj.str << endl;
// 	cout << "po->str= " << po->str << endl;
// 	cout << "obj2.str= " << obj2.str << endl;
// }

////////////////
//c言語ではアドレスの演算ができ、オブジェクトの配列などの物理的に並んだデータに非常に有効

class Kitty{
	public:
	char *str;
	Kitty(char *);
};

Kitty::Kitty(char *str){
	Kitty::str = str;
}

int main(){
	Kitty *po, obj[2] = {"hello", "hello2"};
	po = &obj[0];

	cout << "po->str : " << po->str << endl;;
	cout << "po+1 : " << (po + 1)->str << endl;
}