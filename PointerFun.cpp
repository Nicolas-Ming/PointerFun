#include <iostream>
using namespace std;


void pointerDisplay(int* a, int* b);
int main()
{
    int A = 0;
    int B = 0;

    cout << "Give me two numbers, A and B, and I will display their values through pointer referencing!" << endl;
    cin >> A;
    cin >> B;
    cout << endl;

    pointerDisplay(&A, &B);
}
void pointerDisplay(int* a, int* b) {
    cout << "The value for A is " << *a << " and the value for B is " << *b << "!" << endl;
    delete a;
    delete b;
    a = nullptr;
    b = nullptr;
}
