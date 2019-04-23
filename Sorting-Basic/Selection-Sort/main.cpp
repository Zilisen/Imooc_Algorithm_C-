#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

template<typename T>
void selectionSort( T arr[], int n )
{
    for( int i = 0; i < n - 1; ++i )
    {
        int min = i;
        for( int j = i + 1; j < n; ++j )
        {
            if( arr[j] < arr[min] )
            {
                min = j;
            }
        }

        if (min != i)
        {
            swap( arr[i], arr[min] ); //c++ 11 中此函数位于std中
            /*int swap = arr[i];
            arr[i] = arr[min];
            arr[min] = swap;  */
        }

    }
}


int main()
{
    int array[] = {3, 6, 4, 1, 3, 9, 11, 2323, 1, 332, 43};
    selectionSort( array, 11 );
    for (int i = 0; i < 11; ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    float array1[] = {4.4, 854.2, 545.1, 0.01, -9.2, 7896.2, 10};
    selectionSort( array1, 7 );
    for( int i = 0; i < 7; ++i )
    {
        cout << array1[i] << " ";
    }
    cout << endl;

    string array2[] = {"A", "D", "C", "B", "a"};
    selectionSort( array2, 5 );
    for( int i = 0; i < 5; ++i )
    {
        cout << array2[i] << " ";
    }
    cout << endl;

    Student d[4] = {{"D", 91}, {"C", 97}, {"A", 88}, {"B", 97}};
    selectionSort( d, 4 );
    for( int i = 0; i < 4; ++i )
    {
        cout << d[i];
    }
    cout << endl;

    system( "pause" );

    return 0;
}
