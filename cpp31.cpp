#include <iostream>
using namespace std;
//仮想関数
//関数のオーバーライド
//派生元の関数は、汎用的な情報しか持たない
//継承した関数で関数を再定義できる
//このような関数を仮想関数という。
//基本クラスで定義しておく必要がある
//virtual member-function-declaration
//virtualキーワードは基本クラスでしか用いない
//仮想関数の再定義は通常のオブジェクト操作では役に立たない
//前回行ったポインタへの代入で威力を発揮する
//ポインタが仮想変数を呼び出した場合、オブジェクトの方によって関数が決定数r


class Kitty{//仮想関数を含むクラスはポリモーフィッククラスと呼ぶ
	public:
		virtual void paint(){cout << "基本クラス" << endl;}//仮想関数の宣言

		~Kitty(){ 
			cout << "デストラクタは全て基本クラスの仮想関数が呼ばれる :";
			this->paint();}
} obj;
class Derived: public Kitty{
	public:
		void paint(){ cout << "Derived2\n";}
		void func(){
			cout << "Call destructor Derived class";
			Kitty::paint();
		}
} obj2;

class Derived2: public Derived{
	public:
		void paint(){cout << "Derived3" << endl;}
} obj3;
class Derived3: public Derived2{
	//仮想関数をオーバーライドしない場合、最後に再定義したメンバ関数を参照する。
	//もしこれまで継承したクラスの中で、再定義してなかったら、基本クラスの仮想関数が呼び出される。
} obj4;

int main()
{
	Kitty *po1 = &obj;
	Kitty *po2 = &obj2;
	Kitty *po3 = &obj3;
	unsigned char ch;

	po1->paint();
	po2->paint();
	po3->paint();

	obj2.paint();
	obj3.paint();

	cout << "==========" << endl;
	cout << "y/n? >";
	cin >> ch;

	if (ch == 'y') po1 = &obj;
	else po1 = &obj2;

	po1->paint();
	//デストラクタの憂鬱
	//デストラクタは派生クラスから基本クラスへ向かって順番位呼び出される。
	//もし、デストラクタで仮想関数を呼び出しても、実態関数にアクセスせずにデストラクタが発生しているクラスの仮想関数を呼び出す。
	//これは参照回数などを管理する特殊な構造を設計する時に注意する必要がある。


	return (0);
}