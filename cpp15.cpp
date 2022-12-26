#include <iostream>

//this ポインタ
//メンバ関数は通常の関数とは異なりthisポインタを存在します。
//thisポインタは綿が関数が伊jっこうされた時のオブジェクトのポインタをさす。
//thisを使わなくても名指しでも使えたけど、thisポインタで省略できる。
//メンバ関数内で自分のおぶえ＝ジェクトを操作するときに必要になる。例えば、メンバ関数から他の関数に自分のオブジェクトを渡すときに使う
using namespace std;
class Kitty{
	public:
		char *str;
		Kitty(char *str) { Kitty::str = str;}
		void func() {cout << this->str;}
		void call();
} obj[3] = {"kitty\n", "puppy", "ram"};//静的記憶期間のオブジェクトを生成

void print(Kitty *obj)
{
	cout << obj->str << endl;
}

void Kitty::call(void)
{
	print(this);
}

int main()
{
	for(int i = 0; i < 3 ; i++) obj[i].func();
	return 0;
}