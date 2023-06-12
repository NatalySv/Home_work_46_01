#include <QCoreApplication>
#include <iostream>

int fact(int x)
{
    int result;
    result = 1;

    for (int i = 1; i <= x; i++)
    {
        result = result * i;
    }
    return result;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int n;
    std::cout << "\nInput a natural number h <= 10:\n";
    std::cin >> n;
    if (n<=10)
    {
        std::cout << "Factorial \"" << n << "\" = " << fact(n);
    }
    else {
        std::cout << "Illegal data";
    }

    return a.exec();
}
