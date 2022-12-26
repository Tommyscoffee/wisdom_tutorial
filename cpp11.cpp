#include <iostream>
using namespace std;

//参照：変数の別名
//ポインタは、不釣的なメモリアドレスを示す独立した変数だが、参照は必ず何らかの変数を示す。
//参照を宣言するには、宣言時に変数の前に&を指定する。変数のアドレスを出力する&演算子とは異なる
// type &ref = var;
//参照は、通常　関数間のオブジェkつおの受け渡しなどで使用する。
//変数の別名として参照を持ち理有方法を独立参照と呼ぶ
// int main()
// {
// 	int i = 100;
// 	int &ref = i;

// 	ref++;

// 	cout << i << ":" << ref << endl;
// 	cout << &i << ":" << &ref << endl;
// }
////////////////
//オブジェクトの参照を作成もできる
//また、const指定した参照を宣言して、定数として使うこともできる

class Kitty{
	public:
		char *str;
} obj;

int main()
{
	Kitty &ref = obj;
	ref.str = "hello";
	 cout << obj.str;
	 return (0);
}
// type & ref
//オブジェクトの参照をさ宣言する
//参照はオブbジェクトのアドレスを格納するが、構文的にはオブジェクトそのものと同じ。

// type : 参照するオブジェクトの型を指定
// ref : 参照の名前を指定s