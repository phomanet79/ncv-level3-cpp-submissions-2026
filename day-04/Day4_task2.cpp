#include <iostream>

using namespace std;


void populateArray(int arr[], int size);
int countEven(int arr[], int size);
void displayOdd(int arr[], int size);
void sortArrayAsc(int arr[], int size);
void displayArray(int arr[], int size);

int main() {
    const int SIZE = 5;
    int num[SIZE];

    populateArray(num, SIZE);
    int evenCount = countEven(num, SIZE);
    cout << "Number of even numbers inside the array: " << evenCount << endl;

    displayOdd(num, SIZE);

    sortArrayAsc(num, SIZE);

    cout << "Sorted values: ";
    displayArray(num, SIZE);

    return 0;
}

void populateArray(int arr[], int size)
 {
    cout << "Please supply " << size << " numbers:\n";

    for (int i = 0; i < size; i++)
        {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> arr[i];
    }
}

int countEven(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
        {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

void displayOdd(int arr[], int size)
 {
    cout << "Odd numbers inside the array: ";
    bool Oddnum = false;
    for (int i = 0; i < size; i++)
        {
        if (arr[i] % 2 != 0)
            {
            cout << arr[i] << " ";
            Oddnum = true;
        } else
        {
            cout <<"None";
        }
    }

 }
void sortArrayAsc(int arr[], int size)
 {
    for (int i = 0; i < size - 1; i++)
        {
        for (int j = 0; j < size - i - 1; j++)
         {
            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

}

void displayArray(int arr[], int size)
 {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "<< endl;
    }

}
