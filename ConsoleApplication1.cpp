// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int findMax(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    int maxRest = findMax(arr, n - 1);
    return (maxRest > arr[n - 1]) ? maxRest : arr[n - 1];
}
int main() {
    setlocale(LC_ALL, "ru");
    int n;
    cout << "Введите число элементов для первого массива:";;
    cin >> n;
    if (n > 10 || n < 1) { cout <<endl<< "Вы ввели некорректное число элементов!"<<endl;
    cin.clear();
    while (cin.get() != '\n');
    return 1;
    }

    srand(time(0));


    int arr[10];


    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; 
    }

    
    cout << "сгенерированный массив :" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int maxElement = findMax(arr, n);
    cout << endl <<"Максимальный элемент первого массива: " << maxElement << endl;


    int arr1[10];
    int n1;
    cout << endl << "Введите число элементов для второго массива:";
    cin >> n1;
    if (n1 > 10 || n1 < 1) { cout << endl << "Вы ввели некорректное число элементов!" << endl;
    cin.clear();
    while (cin.get() != '\n');
    return 1;
    }
    for (int i = 0; i < n1; i++) {
        arr1[i] = rand() % 100;
    }


    cout << "сгенерированный массив:" << endl;
    for (int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }
    int maxElement1 = findMax(arr1, n1);
    cout << endl << "Максимальный элемент второго массива: " << maxElement1<<endl;



    int arr2[10];
    int n2;
    cout << endl << "Введите число элементов для третьего массива:";
    cin >> n2;
    if (n2 > 10 || n2 < 1)
    { 
        cout << endl << "Вы ввели некорректное число элементов!" << endl;
        cin.clear();
        while (cin.get() != '\n');
        return 1;
    }
    for (int i = 0; i < n2; i++) {
        arr2[i] = rand() % 100;
    }


    cout<< endl << "сгенерированный массив:" << endl;
    for (int i = 0; i < n2; i++) {
        cout << arr2[i] << " ";
    }
  
    int maxElement2 = findMax(arr2, n2);
    cout << endl << "Максимальный элемент третьего массива: " << maxElement2<<endl;
    return 0;
}