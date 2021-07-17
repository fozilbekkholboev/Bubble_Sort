#include <iostream>

using namespace std;

void display(int* arr, int n);
void Bubble_Sort(int* arr, int n);

int main()
{
    int arr[6] = {11, 2, 48, 13, 9, 21};

    cout << "\nUnsorted array:  ";
    display(arr, 6);

    Bubble_Sort(arr, 6);

    cout << "\n\nSorted array:  ";
    display(arr, 6);

    puts("\n\n");
    return 0;
}

void display(int* arr, int n)
{
    for(int i=0; i<n; ++i)
        cout << arr[i] << "  ";
}

void Bubble_Sort(int* arr, int n)
{
    for(int i=0; i<n; ++i)
    {
        for(int j=i+1; j<n; ++j)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}