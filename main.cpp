//
// Created by liuxiong on 2021/11/20.
//

#include "memory"
#include "iostream"

using namespace std;

int main() {
    int *array = new int[2]{2, 3};
    for (int *q = array; q != array + 2; q++) {
        cout << *q << endl;
    }
    array = array + 1;
    delete[] array;
    for (int *q = array; q != array + 2; q++) {
        cout << *q << endl;
    }
}