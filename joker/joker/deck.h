#pragma once

#include <stack>
#include <iostream>
#include <cstdlib>
#include <ctime>

using std::stack;
using std::string;

class Deck {
	private:
		const string cards[52] = {
			"��A","��2","��3","��4","��5","��6","��7","��8","��9","��0","��J","��Q","��K",
			"��A","��2","��3","��4","��5","��6","��7","��8","��9","��0","��J","��Q","��K",
			"��A","��2","��3","��4","��5","��6","��7","��8","��9","��0","��J","��Q","��K",
			"��A","��2","��3","��4","��5","��6","��7","��8","��9","��0","��J","��Q","��K"
		};// 0 = 10
		short numbers[52] = { 
			0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
			10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
			20, 21, 22, 23, 24, 25, 26, 27, 28, 29,
			30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
			40, 41, 42, 43, 44, 45, 46, 47, 48, 49,
			50, 51 
		};
		stack<string> deck;

	public:
		void shuffle();
		string deal();
		~Deck();
};