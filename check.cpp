#include <bits/stdc++.h>
using namespace std;
void unique2(int arr[], int n)
{
    int xorS = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        xorS ^= arr[i];
    }
    int i = 0;
    while (1)
    {
        if ((xorS & (1 << i)) != 0)
            break;
        i++;
    }
    int xorM = 0;
    for (int j = 0; j <= n - 1; j++)
    {
        if (((1 << i) & arr[j]) != 0)
            xorM ^= arr[j];
    }
    cout << "The 2 unlike numbers are " << xorM << " and " << (xorM ^ xorS);
}

void uniqueof3(int arr[], int n){
    
    int num = 0;
    int temp[64] = {0};
    for (int i = 0; i <= 63; i++){
        for (int j = 0; j <= n - 1; j++){
            if (arr[j] & (1 << i))
                temp[i]++;
        }
        cout << temp[i] << " ";
        if (temp[i] % 3 != 0)
        num=(num | (1<<i));
    }
    cout << "The num that occurs only once is " << num;
}
void subset(char arr[], int n){
    int num = pow(2, n);
    int temp = 0;
    while (temp != num){
        for (int i = 0; i <= n; i++){
            if (((1 << i) & temp) != 0)
                cout << arr[i] << ",";
        }
        cout << endl;
        temp++;
    }
}
void isPower2(int n){
    int i = 0;
    int count = 0;
    while ((1 << i) <= n){
        if ((1 << i) == n)
            count++;
        i++;
    }
    if (count == 1)
        cout << "Power of 2";
    else
        cout << "Not a power of 2";
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n - 1; i++){
        cin >> arr[i];
    }
    uniqueof3(arr, n);
}