/*
�\�����[�V�����̐؂�ւ���
�X�^�[�g�A�b�v�v���W�F�N�g�ɐݒ������

�֐��I�[�o�[���[�h
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

���K���
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


�֐��e���v���[�g
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

�ۑ�
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

	printf("�����ȊO�͑���o���܂���\n");
	return 0;
}

int main() {
	printf("%d\n", min<int>(184, 8239));
	printf("%f\n", min<float>(18.4f, 18.4f));
	printf("%f\n", min<double>(18.4, 1.4));
	printf("%c\n", min<char>('a','b'));

	return 0;
}


���K���
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
	//int�̒l���r
	int x = 184;
	int y = 8239;

	cout << "x : " << x << "�� y : " << y << "���r" << endl;
	auto a = Max<int>(x, y);
	cout << "�傫���l��" << a  << endl;
	cout << "a�̌^�� : " << typeid(a).name() << endl;

	//float�̒l���r
	float u = 1450.0f;
	float v = 1279.0f;

	cout << "u : " << u << "�� v : " << v << "���r" << endl;
	auto b = Max<float>(u, v);
	cout << "�傫���l��" << b << endl;
	cout << "b�̌^�� : " << typeid(b).name() << endl;
	return 0;
}
*/