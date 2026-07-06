#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    do {
        cout << "1.Add 2.Sub 3.Mul 4.Div 5.Exit\n";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cin >> num1 >> num2;
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                cout << result << endl;
                break;
            case 2:
                result = num1 - num2;
                cout << result << endl;
                break;
            case 3:
                result = num1 * num2;
                cout << result << endl;
                break;
            case 4:
                if (num2 == 0)
                    cout << "Error\n";
                else
                    cout << num1 / num2 << endl;
                break;
        }

    } while (choice != 5);

    return 0;
}
