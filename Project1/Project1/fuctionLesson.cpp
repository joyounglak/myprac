#include<iostream>
#include<math.h>

using namespace std;

template<class T> T test(T a, T b) {
	return a + b;
}

int square(int num) {
	return num * num;
}

int cube(int num) {
	return num * num * num;
}

double square_root(int num) {
	return sqrt(num);
}

double sum(int arr[], int len, int(*pfuc)(int)) {
	int summary = 0;
	//for (int i : arr); ????
	return summary;
}

int length(int arr[]) {
	return sizeof(arr) / sizeof(arr[0]);
}

int main() {
	char* a;
	int arr[] = { 1, 2, 3, 4, 5 };
	cout << test(1,1) << endl;
	cout << test<int>(1.5, 1.3) << endl;
	cout << test<int>(1.5, 1.3) << endl;
	cout << sum(arr, length(arr), cube) << endl;
	for (int i : arr);
	cin.getline(a, 1);
}


// �Լ� ������ > � �Լ����� ���� ��ҿ��� �پ��� �Լ��� ����Ҷ�, 
//		�ڵ带 ������ �ۼ��� �ʿ���� �Լ��� �ּҸ� �����Ͽ� �����͸� �̿��� ����Ѵ�.

