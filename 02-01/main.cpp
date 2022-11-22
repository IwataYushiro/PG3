#include <list>
#include <stdio.h>

using namespace std;	//�����std::���ȗ��\

int main(void) {

	//�R���e�i��
	list<const char*> yamanotesenn =
	{
		"Tokyo",
		"Kanda",
		"Akihabara",
		"Okachimachi",
		"Ueno",
		"Uguisudani",
		"Nippori",
		"Tabata"
	};

	//1970�N
	printf("-1970-\n");
	for (auto itr = yamanotesenn.begin();
		itr != yamanotesenn.end(); itr++)
	{
		printf("%s\n", *itr);
	}
	//���s
	printf("\n");

	//2019�N
	//1971�N�A�c�[�̑O�ɁA���闢�̌�ɐ����闢���ǉ�
	printf("-2019-\n");
	for (auto itr = yamanotesenn.begin();
		itr != yamanotesenn.end(); ++itr)
	{
		if (strcmp(*itr, "Tabata") == 0)
		{
			itr = yamanotesenn.insert(itr, "Nishi-Nippori");
			itr++;
			//brack�ł���
		}
	}
	for (auto itr = yamanotesenn.begin();
		itr != yamanotesenn.end(); itr++)
	{
		printf("%s\n", *itr);
	}
	//���s
	printf("\n");

	//2022�N
	printf("-2022-\n");
	//2020�N�ɍ��փQ�[�g�E�F�C���ǉ������
	yamanotesenn.push_back("Takanawa-Gateway");		
	
	for (auto itr = yamanotesenn.begin();
		itr != yamanotesenn.end(); itr++)
	{
		printf("%s\n", *itr);
	}
	
	//���s
	printf("\n");

	return 0;
}