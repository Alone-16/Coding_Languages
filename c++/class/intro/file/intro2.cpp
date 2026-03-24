# include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(n % 2 == 0){
        n += 7;
    }
    if(n % 2 != 0){
        n -= 4;
    }

    if(n >= 14){
        n *= 3;
    }
    if(n <= 10){
        n /= 5;
    }

    cout << "Result: " << n << endl;
}   