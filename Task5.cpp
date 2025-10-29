#include <iostream>
using namespace std;

int main()
 {
    int n;
    cout << "number of elements: ";
    cin >> n;

    int arr[n];
       int sum = 0;

    cout << "Enter " << n << " numbers: ";

    for (int i = 0; i < n; i++)
        {
        cin >> arr[i];
        sum = sum + arr[i];
}


       float average = (float)sum / n;

    cout << "Average value = " << average << endl;




    return 0;
}
