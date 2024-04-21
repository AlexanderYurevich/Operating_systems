#include <iostream>
#include <vector>
#include <Windows.h>

volatile double max;
volatile double min;
volatile double mean;

DWORD WINAPI min_max(LPVOID arr)
{
    double **arr1 = reinterpret_cast<double**>(arr);
    int n = (*arr1)[0];
    if (n == 0) return 0;
    min = (*arr1)[1];
    max = (*arr1)[1];
    for (int i = 2; i <= n; ++i)
    {
        max = (*arr1)[i] > max ? (*arr1)[i] : max;
        Sleep(7);
        min = (*arr1)[i] < min ? (*arr1)[i] : min;
        Sleep(7);
    }
    std::cout << "Min element: " << min << "\n";
    std::cout << "Max element: " << max << "\n";
    return 0;
}

DWORD WINAPI average(LPVOID arr)
{
    double** arr1 = reinterpret_cast<double**>(arr);
    int n = (*arr1)[0];
    if (n == 0) return 0;
    mean = (*arr1)[1];
    for (int i = 2; i <= n; ++i)
    {
        
        mean += (*arr1)[i];
        Sleep(12);
        
    }
    mean = mean / n;
    std::cout << "Mean: " << mean << "\n";
    return 0;
}
int main()
{
    int n;
    std::cout << "Enter length: ";
    std::cin >> n;
    std::cout << "Enter elements: ";
    double* arr = new double[n+1];
    arr[0] = n;
    for (int i = 1; i <= n; ++i)
        std::cin >> arr[i];
    DWORD   dwThreadId[2];
    HANDLE  hThread[2];
    hThread[0] = CreateThread(NULL, 0, min_max, &arr, 0, &dwThreadId[0]);
    if (hThread[0] == NULL)
        return GetLastError();
    hThread[1] = CreateThread(NULL, 0, average, &arr, 0, &dwThreadId[1]);
    if (hThread[1] == NULL)
        return GetLastError();
    if(WaitForMultipleObjects(2, hThread, TRUE, INFINITE) == WAIT_FAILED)
    {
        std::cout << "Wait for multiple objects failed.\n";
        std::cout << "Press any key to exit.\n";
    }
    CloseHandle(hThread[0]);
    CloseHandle(hThread[1]);
    std::cout << "Edited array:\n";
    for (int i = 1; i <= n; ++i)
    {
        arr[i] = arr[i] == max ? mean : arr[i];
        arr[i] = arr[i] == min ? mean : arr[i];
        std::cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}