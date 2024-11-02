 #include <iostream>

 using namespace std;

 int main(void)
{
    double a;
    double b;

    cin >> a;
    cin >> b;

    cout << fixed;
    cout.precision(9);
    cout << a / b << endl;

    return 0;
}