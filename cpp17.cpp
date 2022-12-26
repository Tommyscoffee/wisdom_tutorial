#include <iostream>
using namespace std;

//コピーコンストラクタ
//関数の受け渡しでオブジェクトを渡すときに値渡しされ、オブジェクトがビット単位でコピーされてしまい、デストラクタでダブルフリーの危険性があるので、それを防ぐためにコピーコンストラクタを定義する。
//

// class Kitty{
// 	public:
// 	char *str;
// 	Kitty() {
// 		cout << "Kitty() コンストラクタ" << endl;
// 		this->str = "kitty on your lap\n";
// 		}
// 	Kitty(char *str){
// 		cout << "Kitty(str) コンストラクタ" << endl;
// 		this->str = str;
// 	}
// 	Kitty(const Kitty &obj)//引数にconstがついているものはコピーコンストラクタである。宣言時、引数、戻り値の３つのどうせでコピーが取られたときに実行される。
// 	{
// 		str = "copi_constructor";
// 	}
// }g_obj;

// int main()
// {
// 	Kitty obj = g_obj;//本来この形でオブジェクトを代入すると、ビット単位でコピーされて、メンバ変数にポインタ型があったときに、destructorでダブルフリーしてしまうが、コピーコンストラクタが定義されているので
// 	cout << g_obj.str;
// 	cout << obj.str;
// 	return 0;
// }
////////////////////////////////

// class Kitty {
// public:
// 	Kitty() { cout << "Kitty on your lap\n"; }
// 	Kitty(const Kitty &obj) { cout << "Di Gi Gharat\n"; }
// };

// Kitty getKitty(Kitty obj) {
// 	return obj;
// }

// int main() {
// 	Kitty obj;
// 	obj = getKitty(obj);
// 	return 0;
// }
//////////////////////////////////////

class Kitty {
	int *x;//intのポインタ変数
public:
	Kitty();
	Kitty(const Kitty &);
	~Kitty();
	void printX();
} g_obj ;

Kitty::Kitty() {
	x = (int *)malloc(5 * sizeof(int ));
	for (int i = 0 ; i < 5 ; i++) *(x + i) = i * 2;
}

Kitty::Kitty(const Kitty &obj) { 
	x = (int *)malloc(5 * sizeof(int ));
	for (int i = 0 ; i < 5 ; i++) *(x + i) = i;
}

Kitty::~Kitty() { free(x); }

void Kitty::printX() {
	for (int i = 0 ; i < 5 ; i++) cout << *(x + i) << " ";
	cout << '\n';
}

int main() {
	Kitty obj = g_obj;//オブジェクトの初期化でコピーコンストラクタが呼び出される。
	g_obj.printX();
	obj.printX();
	return 0;
}