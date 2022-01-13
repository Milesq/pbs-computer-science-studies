#include <iostream>
#include <functional>
#include <ctime>
#include <utility>

using namespace std;

template <typename T>
void fill(T *arr, size_t size, function<T(size_t)> cb)
{
    for (size_t i = 0; i < size; ++i)
    {
        arr[i] = cb(i);
    }
}

template <typename T>
pair<T, T> minmax(T *arr, size_t size)
{
    T min = arr[0];
    T max = arr[0];

    for (size_t i = 1; i < size; ++i)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return make_pair(min, max);
}

template <typename T>
void array_info(T *arr, size_t size)
{
    for (size_t i = 0; i < 10; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "5th element: " << *(arr + 4) << endl;
    cout << "10th element: " << *(arr + 9) << endl;

    auto arr_minmax = minmax(arr, 10);

    cout << "Min: " << arr_minmax.first << endl;
    cout << "Max: " << arr_minmax.second << endl;
}

int main()
{
    srand(time(NULL));

    int arr[10];
    fill<int>(arr, 10, [](size_t)
              { return rand() % 100; });

    float arr2[10];
    fill<float>(arr2, 10, [](size_t)
                { return static_cast<float>(rand()) / static_cast<float>(RAND_MAX); });

    cout << "Arr1: \n";
    array_info(arr, 10);

    cout << "\nArr2: \n";
    array_info(arr2, 10);

    return 0;
}
