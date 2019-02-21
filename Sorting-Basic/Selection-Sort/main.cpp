#include <iostream>

using namespace std;

void selectionSort( int arr[], int n )
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

    printf( "123" );

    system( "pause" );

    return 0;
}