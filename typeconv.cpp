/* type conversion = conversion a value of one data type to another

implicit = automatic
explicit = precede value with new data type(int)*/
#include <iostream>

int main()
{
    double x = (int)3.144354543;

    std::cout << x << "\n";

    int y = (double)5.44343;

    std::cout << y << "\n";

    char ok = 100;
    std::cout << ok << "\n";
    // this will directly convert to the ascii representation

    int correct = 8;
    int questions = 10;
    // double score = correct/questions*100;
    // questions is of int data type we trumpcating the decimal point
    double score = correct / (double)questions * 100;

    std::cout << score << "% \n";
}
