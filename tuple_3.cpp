#include<iostream>
#include<tuple>

using namespace std;

int main() {

    tuple <char, int, int, char, float> t;
    t = make_tuple('a', 75, 5, 'z', 5.5);

    int i;

    cout << "The size of tuple is = ";
    cout << tuple_size<decltype(t)>::value << endl;

    return 0;
}