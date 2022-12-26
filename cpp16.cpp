#include <iostream>
using namespace std;
// //ポリモフィズム　オブジェクト指向言語特有の機能で、プログラムの多様性。
// //つまり、一つの識別子（インターフェース）（typedefと同じようなものでinterfaceというものもある。）で複数の実装があることを示す。（関数名が同じ）
// //
// void Kitty(){
// 	cout << "Kitty()" <<endl;
// }

// void Kitty(int argc)
// {

// 	cout << "Kitty(int argc) :" << argc << endl;
// }
// int main()
// {
// 	Kitty();
// 	Kitty(5);
// }


//コンストラクタのオーバーロード

class Kitty{
	public:
	char *str;
	Kitty() {
		cout << "Kitty() コンストラクタ" << endl;
		this->str = "kitty on your lap\n";
		}
	Kitty(char *str){
		cout << "Kitty(str) コンストラクタ" << endl;
		this->str = str;
	}
} obj, ary[3] = {"hitokage", "zenigame", "husigidane"};

int main()
{
	cout << obj.str;
	for (int i = 0; i < 3; i++) cout << ary[i].str;
	return 0;	
}
