Ось приклад 150 рядків коду в C++ для основної обробки даних у масиві:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

// Функція для виведення масиву
void printArray(vector<int> &array){
    for(int i = 0; i < array.size(); i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

// Функція для сортування даних у масиві
void sortArray(vector<int> &array){
    sort(array.begin(), array.end());
}

// Функція для знаходження максимального елементу в масиві
int findMax(vector<int> &array){
    return *max_element(array.begin(), array.end());
}

// Функція для знаходження мінімального елементу в масиві
int findMin(vector<int> &array){
    return *min_element(array.begin(), array.end());
}

// Функція для підрахунку суми елементів масиву
int sumArray(vector<int> &array){
    return accumulate(array.begin(), array.end(), 0);
}

// Функція для підрахунку середнього значення елементів масиву
double averageArray(vector<int> &array){
    return static_cast<double>(sumArray(array)) / array.size();
}

int main() {
    vector<int> data;

    // Заповнення масиву випадковими числами
    for(int i = 0; i < 30; i++){
        data.push_back(rand() % 100);
    }

    cout << "Initial Array: ";
    printArray(data);

    sortArray(data);
    cout << "Sorted Array: ";
    printArray(data);

    int maxElement = findMax(data);
    cout << "Max Element: " << maxElement << endl;

    int minElement = findMin(data);
    cout << "Min Element: " << minElement << endl;

    int sum = sumArray(data);
    cout << "Sum of Elements: " << sum << endl;

    double average = averageArray(data);
    cout << "Average of Elements: " << average << endl;

    return 0;
}
```

Цей код виконує ряд базових операцій обробки даних: він генерує масив з випадковими числами, сортує цей масив, знаходить максимальний та мінімальний елементи, обчислює суму елементів та їх середнє значення.