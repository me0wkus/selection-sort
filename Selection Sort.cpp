#include <iostream>

using namespace std;


int main()
{
    const int N = 10;
    int array[N] = { 3, 5, 7, 4, 9, 2, 6, 1, 8, 10 };
    int min;
    int i;
    

        /*сортировка*/
        for (int i = 0; i < N - 1; i++)
        {
            min = i; 
            for (int j = i + 1; j < N; j++)
            {
                if (array[j] < array[min])
                {
                    min = j;
                }
            }
            //перебираем
            int buf = array[i];
            array[i] = array[min];
            array[min] = buf;

        }
        for (i = 0; i < N; i++) {
            cout << array[i] << '\t';
            cout << endl; 
        }
    return 0;
}