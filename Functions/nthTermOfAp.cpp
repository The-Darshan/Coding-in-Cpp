#include <iostream>
using namespace std;

int AP(int n)
{
    return (3 * n + 7);
}

int main()
{

    int nth_Term;
    cout << "Enter the nth Term : ";
    cin >> nth_Term;

    cout << "nth Term of AP is : " << AP(nth_Term);

    return 0;
}