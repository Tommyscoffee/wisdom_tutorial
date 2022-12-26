#include<iostream>
using namespace std;
//多段継承>直列継承
// class Neko {
// public:
// 	Neko() { cout << "A house cat\n"; }
// };

// class Kitty : public Neko {
// public:
// 	Kitty() { cout << "Kitty on your lap\n"; }
// };

// class Zoo : public Kitty {
// public:
// 	Zoo() { cout << "Nekoneko Zoo\n"; }
// } obj ;
   
// int main() {
// 	return 0;
// }

///////並列継承

// class Neko {
// public:
// 	Neko() { cout << "A house cat\n"; }
// };

// class Kitty {
// public:
// 	Kitty() { cout << "Kitty on your lap\n"; }
// };

// class Zoo : public Kitty , public Neko {//複数の基本クラスから継承している並列継承 コンストラクタは左から順に呼び出される
// public:
// 	Zoo() { cout << "Nekoneko Zoo\n"; }
// } obj ;

// int main() {
// 	return 0;
// }

///////

//派生クラスから基本クラスにコンストラクタの引数を渡す
class Neko {
public:
	Neko(char *str) { cout << "Neko" << str << endl; }
};

class Kitty {
public:
	Kitty(char *str) { cout << "Kitty" << str << endl; }
};

class Zoo : public Kitty , public Neko {
public:
	Zoo(char *base1 , char *base2) : Kitty(base1) , Neko(base2) {
		cout << "Nekoneko Zoo\n";
	}
} obj("Kitty on your lap\n" , "A house cat\n") ;

int main() {
	Zoo a("test1", "test2");
	return 0;
}