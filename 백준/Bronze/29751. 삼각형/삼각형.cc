 #include <iostream>

 using namespace std;

 int main(void)
{
    double W;
    double H;

    cin >> W;
    cin >> H;

    cout << fixed;
    cout.precision(1);
    cout << W * H / 2 << endl;

    return 0;
}