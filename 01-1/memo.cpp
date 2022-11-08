/*
ソリューションの切り替えは
スタートアッププロジェクトに設定を押す

関数オーバーロード
#include <stdio.h>

int calc(int a, int b) {
	return a + b;
}

float calc(float d, float e) {
	return d + e + 10;
}

int main() {
	int x = 114;
	int y = 514;
	printf("%d\n", calc(x, y));

	float l = 3.64f;
	float m = 3.64f;
	printf("%f\n", calc(l, m));

	return 0;
}

練習問題
#include <iostream>
#include <typeinfo>

using namespace std;

//画像を描画
void drawImage() {
	cout << "画像を描画" << endl;
}
//int x,y
int drawImage(int x, int y) {
	cout << "画像を描画" << " x : " << x << " y : " << y << endl;
	return 0;
}

//z追加版
int drawImage(int x, int y, int z) {
	cout << "画像を描画" << " x : " << x << " y : " << y << " z : " << z << endl;
	return 0;
}

int main() {
	//元のやつ
	drawImage();
	//2つの値
	int x = 1450;
	int y = 1279;
	drawImage(x, y);

	//3つの値
	int a = 1741;
	int b = 2134;
	int c = 2221;
	drawImage(a, b, c);

	return 0;


関数テンプレート
#include <stdio.h>

template <typename T>
T add(T a, T b) {
	return static_cast<T>(a + b);
}

int main() {
	printf("%d\n", add<int>(114, 514));
	printf("%f\n", add<float>(11.4f, 51.4f));

	return 0;
}

課題
#include <stdio.h>
#include <math.h>

template <typename T>
T min(T a, T b) {
	if (a < b)
	{
		return static_cast<T>(a);
	}
	if (a > b)
	{
		return static_cast<T>(b);
	}
	if (a == b)
	{
		return static_cast<T>(a);
	}
}
template<>
char min(char a, char b) {

	printf("数字以外は代入出来ません\n");
	return 0;
}

int main() {
	printf("%d\n", min<int>(184, 8239));
	printf("%f\n", min<float>(18.4f, 18.4f));
	printf("%f\n", min<double>(18.4, 1.4));
	printf("%c\n", min<char>('a','b'));

	return 0;
}


練習問題
#include <iostream>
#include <typeinfo>

using namespace std;

template <typename Type>
Type Max(Type a, Type b) {
	if (a > b)
	{
		return static_cast<Type>(a);
	}
	if (a < b)
	{
		return static_cast<Type>(b);
	}
	if (a == b)
	{
		return static_cast<Type>(a);
	}
}

int main() {
	//intの値を比較
	int x = 184;
	int y = 8239;

	cout << "x : " << x << "と y : " << y << "を比較" << endl;
	auto a = Max<int>(x, y);
	cout << "大きい値は" << a  << endl;
	cout << "aの型は : " << typeid(a).name() << endl;

	//floatの値を比較
	float u = 1450.0f;
	float v = 1279.0f;

	cout << "u : " << u << "と v : " << v << "を比較" << endl;
	auto b = Max<float>(u, v);
	cout << "大きい値は" << b << endl;
	cout << "bの型は : " << typeid(b).name() << endl;
	return 0;
}
*/