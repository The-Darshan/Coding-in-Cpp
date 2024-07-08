// Assumed that 1 st term is 1
#include <iostream>
using namespace std;

int Fibonacci(int n)
{
    int a = 1, b = 1, ans = 0;
    if (n == 1 || n == 2)
    {
        return a;
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            ans = a + b;
            a = b;
            b = ans;
        }
        return ans;
    }
}

int main()
{

    int nth_term;
    cout << "Enter the term no. : ";
    cin >> nth_term;

    cout << nth_term<<"rd Term of fibonacci series is : " << Fibonacci(nth_term);

    return 0;
}