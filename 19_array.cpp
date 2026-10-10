#include <iostream>
using namespace std;
int main()
{
    int i;
    int arr[5];
    cout << "enter array element : " << endl;
    for (i = 0; i < 5; i++) // 2
    {
        cin >> arr[i];
    }
    cout << "array elements are : " << endl;
    for (i = 0; i < 5; i++) // 2
    {
        cout << arr[i] << endl;
    }

    return 0;
}