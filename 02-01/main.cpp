#include <list>

using namespace std;	//�����std::���ȗ��\

int main(void) {

	//list<int> lst(33,4);
	list<int> list{ 1,4,5,6,9 };//�����ݒ胊�X�g

	for (std::list<int>::iterator itr=list.begin(); itr != list.end(); ++itr)
	{
		if (*itr==4)
		{
			itr = list.insert(itr, 0);
			++itr;		//�d�v
		}
	}
	return 0;
}