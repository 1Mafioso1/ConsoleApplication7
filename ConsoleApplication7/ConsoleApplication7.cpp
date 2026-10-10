#include <iostream>
using namespace std;

// Завдання 1
//void printRectangle(int N, int K, char S) {
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < K; j++) {
//            cout << S;
//        }
//        cout << '\n';
//    }
//}

// Завдання 2
//int factorial(int n) {
//    int result = 1;
//    for (int i = 1; i <= n; i++) {
//        result *= i;
//    }
//    return result;
//}

// Завдання 3
//bool isPrime(int n) {
//    if (n < 2) return false;
//
//    for (int i = 2; i * i <= n; i++) {
//        if (n % i == 0) return false;
//    }
//    return true;
//}

// Завдання 4
//int cube(int n) {
//    return n * n * n;
//}

// Завдання 5
//int maxNumber(int a, int b) {
//    return (a > b) ? a : b;
//}

// Завдання 6
//bool isPositive(int n) {
//    return n > 0;
//}

// Завдання 7
//void printMinMax(const int arr[], int size) {
//    if (size <= 0) return;
//
//    int min = arr[0];
//    int max = arr[0];
//    int minIndex = 0;
//    int maxIndex = 0;
//
//    for (int i = 1; i < size; i++) {
//        if (arr[i] < min) {
//            min = arr[i];
//            minIndex = i;
//        }
//
//        if (arr[i] > max) {
//            max = arr[i];
//            maxIndex = i;
//        }
//    }
//
//    cout << "Minimum: " << min
//        << ", index: " << minIndex << '\n';
//
//    cout << "Maximum: " << max
//        << ", index: " << maxIndex << '\n';
//}

// Завдання 8
//template<typename T>
//void reverseArray(T arr[], int size) {
//    for (int i = 0; i < size / 2; i++) {
//        T temp = arr[i];
//        arr[i] = arr[size - 1 - i];
//        arr[size - 1 - i] = temp;
//    }
//}

// Завдання 9
//int countPrimes(const int arr[], int size) {
//    int count = 0;
//
//    for (int i = 0; i < size; i++) {
//        if (isPrime(arr[i])) {
//            count++;
//        }
//    }
//
//    return count;
//}

int main() {
    // Завдання 1
    //cout << "Task 1:\n";
    //printRectangle(3, 5, '*');

    //// Завдання 2
    //cout << "\nTask 2:\n";
    //cout << factorial(5) << '\n';

    // Завдання 3
    //cout << "\nTask 3:\n";
    //cout << (isPrime(7) ? "Prime" : "Not prime") << '\n';

    // Завдання 4
    //cout << "\nTask 4:\n";
    //cout << cube(3) << '\n';

    // Завдання 5
    //cout << "\nTask 5:\n";
    //cout << maxNumber(10, 20) << '\n';

    // Завдання 6
    //cout << "\nTask 6:\n";
    //cout << (isPositive(5) ? "true" : "false") << '\n';

    //int arr[] = { 12, -5, 3, 0, 7, 2 };
    //int size = sizeof(arr) / sizeof(arr[0]);

    // Завдання 7
    //cout << "\nTask 7:\n";
    //printMinMax(arr, size);

    // Завдання 8
    //cout << "\nTask 8:\n";
    //reverseArray(arr, size);

    //for (int i = 0; i < size; i++) {
    //    cout << arr[i] << " ";
    //}
    //cout << '\n';

    // Завдання 9
    //cout << "\nTask 9:\n";
    //cout << "Prime numbers: "
    //    << countPrimes(arr, size) << '\n';

    //return 0;
}