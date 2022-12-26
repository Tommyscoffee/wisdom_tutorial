#include <iostream>
//関数の受け渡しは値渡し
using namespace std;

class Kitty{
	public:
	char *str;
	~Kitty();
} obj;

Kitty::~Kitty()
{
	cout << str << endl;
}

void func(Kitty *obj)
{
	(*obj).str = "hogehoge";
}
//ここでは、関数の受け渡しでオブジェクトを渡すと、ビット単位で複製されることが確認dケイル
// int main()
// {
// 	obj.str = "Kitty on your lap";
// 	func(obj);
// 	return (0);
// } 

int main()
{
	obj.str = "main";
	func(&obj);//アドレスを渡せば、オブジェクトは複製されないので、デストラクタも1回しか呼ばれない
	return (0);
}