#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukr");
    int n, i;
    int arr[100];
    int b, c, s;
    cout << "Кiлькiсть елементiв масиву ";
    cin >> n;
        cout << "Номери масиву ";
    cin >> b >> c;
    cout << "елементи масиву ";
    for (i = 1; i <= n; i++) {
        
        cin >> arr[i];
    }
    s = (arr[b] + arr[c]) / 2;
   
    cout << "Вiдповiдь " << endl;
    
    for (i = 1; i <= n; i++) {
        if (arr[i] % s == 0) {
            cout  << arr[i] << endl;
        }
    }

    return 0;
}