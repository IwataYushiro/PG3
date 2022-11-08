#include <iostream>
#include <typeinfo>

using namespace std;

//‰æ‘œ‚ð•`‰æ
void drawImage() {
	cout << "‰æ‘œ‚ð•`‰æ" << endl;
}
//int x,y
int drawImage(int x, int y) {
	cout << "‰æ‘œ‚ð•`‰æ" << " x : " << x << " y : " << y << endl;
	return 0;
}

//z’Ç‰Á”Å
int drawImage(int x, int y, int z) {
	cout << "‰æ‘œ‚ð•`‰æ" << " x : " << x << " y : " << y << " z : " << z << endl;
	return 0;
}

int main() {
	//Œ³‚Ì‚â‚Â
	drawImage();
	//2‚Â‚Ì’l
	int x = 1450;
	int y = 1279;
	drawImage(x, y);

	//3‚Â‚Ì’l
	int a = 1741;
	int b = 2134;
	int c = 2221;
	drawImage(a, b, c);

	return 0;
}