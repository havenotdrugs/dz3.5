#include <iostream>
using namespace std;

int main() {
  int numbers[20], sum = 0;
  cout << "Задай 20 чисел для массива!\n";
  for (int i = 0; i < 20; i++) cin >> numbers[i];
  for (int number : numbers) {
    if (number % 2 != 0) sum += number;
  }
  cout << sum << " - сумма нечетных чисел в массиве";
}
