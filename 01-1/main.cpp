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
}