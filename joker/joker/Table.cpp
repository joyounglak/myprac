#include "Table.h"

void Table::open(unsigned short index, Player* player, int n)
{
	hands[n][index] = player->getHands(index);
}

void Table::view()
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 7; j++)
			cout << hands[i][j].c_str() << " ";
		cout << endl;
	}
	cout << endl;
/*
14(����)  20(2��)

\n 20(3��) 8(��) 20(4��) \n

14(����) 20(1��)

14 20(�� �ڵ� 1��)
*/
}

void Table::bettingMoney(int& n)
{
	money += n;
}

int Table::ForWinner()
{
	int res = money;
	money = 0;
	return res;
}

Table::~Table() { }
