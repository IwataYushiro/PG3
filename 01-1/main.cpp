#include <iostream>
#include <typeinfo>

using namespace std;

//�摜��`��
void drawImage() {
	cout << "�摜��`��" << endl;
}
//int x,y
int drawImage(int x, int y) {
	cout << "�摜��`��" << " x : " << x << " y : " << y << endl;
	return 0;
}

//z�ǉ���
int drawImage(int x, int y, int z) {
	cout << "�摜��`��" << " x : " << x << " y : " << y << " z : " << z << endl;
	return 0;
}

int main() {
	//���̂��
	drawImage();
	//2�̒l
	int x = 1450;
	int y = 1279;
	drawImage(x, y);

	//3�̒l
	int a = 1741;
	int b = 2134;
	int c = 2221;
	drawImage(a, b, c);

	return 0;
}