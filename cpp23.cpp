#include <iostream>
using namespace std;
//フレンド
//関数から非公開領域アクセス
//非公開メンバへのアクセスは同一クラス内の関数からのみだが、関数から非公開メンバへのアクセスができると便利なこともある
//c++では関数の中でも特別なフレンド関数というものがある。
//フレンド関数は、メンバ関数ではないが非公開面はと被保護メンバへのアクセスできる。
//フレンド関数を定義するにはまずクラスのメンバ宣言部にfrinedキーワードを付加した関数のプロトタイプを宣言する。

// classs
/////////////
//複数のクラスに同じfriend関数を定義できる

// class Age;//クラスの前方宣言

// class Name {
// 	char *name;
// public:
// 	friend void print(Name & , Age &);
// 	Name(char *name) { Name::name = name; }
// } n_obj("Rena") ;

// class Age {
// 	int age;
// public:
// 	friend void print(Name & , Age &);
// 	Age(int age) { Age::age = age; }
// } a_obj(15) ;

// void print(Name &n , Age &a) {
// 	cout << "名前 : " << n.name << "\t年齢 : " << a.age << '\n';
// }

// int main() {
// 	print(n_obj , a_obj);
// 	return 0;
// }

///////////
//フレンドクラス
//そのクラスの非公開メンバへ自由にアクセスできる
//フレンドクラスは、前メンバ関数が特定のクラスのフレンド関数であるクラス。
class Neko;

class Kitty{
	char *str;
public:
friend Neko;
Kitty(char *str){Kitty::str = str;}
}obj("kitty");

class Neko{
	public:
	Neko(Kitty &obj){
		cout << obj.str << endl;
	}
};

int main()
{
	Neko obj(::obj);
	return (0);
}

