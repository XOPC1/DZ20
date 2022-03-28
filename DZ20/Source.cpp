//������������ ������ ������� �++
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;

template <typename T> void showArr(T arr[], int l) {
    cout << "[";
    for (int i = 0; i < l; i++)
        cout << arr[i] << ", ";
    cout << "\b\b]\n";
}
template <typename T> int searchInd(T arr[], int l, T key, int begin) {
    for (int i = begin; i < l; i++)
        if (arr[i] == key)
            return i;
    return -1;
}
template <typename T> int searchLastInd(T arr[], int l, T key, int begin) {
    for (int i = l - 1; i >= 0; i--)
        if (arr[i] == key)
            return i;
    return-1;
}
template <typename T> int maxEl(T arr[], int l) {
    int max = -100;
    for (int i = 0; i < l; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}
template <typename T> int minEl(T arr[], int l) {
    int min = 100;
    for (int i = 0; i < l; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}
template <typename T> int meanValue(T arr[], int l) {
    int sum = 0;
    for (int i = 0; i < l; i++)
        sum += arr[i];
    return sum / l;
}
template <typename T> void range(T arr[], int l,T start,T last) {
    if (start > last)
        swap(start, last);
    cout << "[";
    for (int i = 0; i < l; i++)
        if (arr[i] >= start && arr[i] <= last)
            cout << arr[i] << ", ";
    cout << "\b\b]\n";
}
template <typename T> int counter(T arr[], int l, int a) {
    int count = 0;
    for (int i = 0; i < l; i++)
        if (arr[i] == a)
            count++;
    return count;
}
int main() {
	setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int arr[100];
    for (int i = 0; i < 100; i++)
        arr[i] = rand() % 201 - 100;
    cout << "������ ��� c������:\n";
    showArr(arr, 100);
    cout << "������ ������� ��������� �������� � ������: " << searchInd(arr, 100, 55, 0) << endl;
    cout << "������ ���������� ��������� �������� � ������: " << searchLastInd(arr, 100, 32, 0) << endl;
    cout << "������������ ������� �������: " << maxEl(arr, 100) << endl;
    cout << "����������� ������� �������: " << minEl(arr, 100) << endl;
    cout << "C������ �������������� ���� ��������� �������: " << meanValue(arr, 100) << endl;
    int a, b;
    cout << "������� ������ � ����� ���������-> ";
    cin >> a >> b;
    cout << "��� �������� �������, ������� ������ � ���������� � ������� ��������: ";
    range(arr, 100, a, b);
    int c;
    cout << "������� �������� ��������-> ";
    cin >> c;
    cout << "���������� ��������� ����������� �������� � ������: " << counter(arr, 100, c) << endl;
	return 0;
}