#include <iostream>
using namespace std;
//継承時のコンストラクタ

class Kitty{
	public:
	Kitty(){cout << "constructor" << endl;}
};

class DERIVED: public Kitty{
	public:
	DERIVED(){cout << "derived:public" << endl;}
} obj;//　基本クラスのコンストラクタが先に呼ばれて、継承クラスのコンストラクタが次に呼ばれる。

int main()
{
	return (0);

}//ここでは、基本クラスのコンストラクタに引数を渡せないので以下につながる

////////////////
// derived(arg-list): vase(arg-list){
// 	statements...
// }
//derived(0は派生暗usのコンストラクタ、base()は基本クラスのコンストラクタです。)

// class Kitty{
// 	public:
// 	Kitty(char *str){ cout << "Kitty" <<str<<endl;}
// };

// class derived:public Kitty{
// 	public:
// 	derived():Kitty("this is Kitty"){//派生クラスのコンストラクタから基本クラスのコンストラクタに引数を渡す方法
// 		cout << "derived" <<endl;
// 	}
// }obj;

// int main()
// {
// 	return (0);
// }

//デストラクタ
