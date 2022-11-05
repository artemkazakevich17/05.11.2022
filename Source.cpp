#include <iostream>
#include <ctime>
using namespace std;
int main() {
	//const int n = 10;
	//int mas[n];
	//srand(time(nullptr));
	//for (int i = 0; i < n; i++) {
	//	mas[i] = rand() % 51 - 20;//%51 дает диапозон о т 0 до 50
	//	//rand() выдает случайное число от -32768 до 32767
	//	cout << mas[i] << ' ';
	//}
	//cout << endl;
	//for (int i = n - 1; i >= 0; i -= 2) {
	//	cout << mas[i] << ' ';
	//}
	// дан массив целых чисел размера n. заполнить его случайными числами из диапозона от -20 до 20.найти колво
	//отрицательных элементов
	/*const int size = 10;
	int arr[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 41 - 20;
		cout << arr[i] << ' ';
	}
	cout << endl;
	int k = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			k++;
		}
	}
	cout << "k (<0) = " << k << endl;*/
	//дан массив целых чисел размера n. Заполнить его случайными числами из диапозона от -10 до 10. найти сумму четных
	/*const int size = 20;
	int arr[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 21 - 10;
		cout << arr[i] << ' ';
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i > size; i++) {
		if (arr[i]%2 == 0) {
			sum+= arr[i];
		}
	}
	cout << sum << endl;*/
	//Сам2 Дан массив целых чисел размера N.Заполнить его случайными числами из диапазона от - 10 до 20. 
	//Вывести на экран только те элементы, которые делятся на 3
	/*const int size = 30 ;
	int arr[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 31 - 10;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 3 != 0) {
			cout << arr[i] << ' ';
		
		}
	}*/
	//Сам3 Дан массив целых чисел размера N. Заполнить его случайными числами из диапазона от - 30 до 20. 
	//Найти произведение элементов, которые не делятся на 7
	const int size = 30;
	int arr[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 41 - 10;
		cout << arr[i] << ' ';
    }
	cout << endl;
	long long p = 1;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 7 != 0) {
			p *= arr[i];
		}
	}
	


}