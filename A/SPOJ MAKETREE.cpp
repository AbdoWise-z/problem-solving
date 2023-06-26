
int arr[100000];

//set the boss of j to be i
void setBoss(int i, int j) {
    if (arr[j] == 0) {
        arr[j] = i + 1;
        return;
    }
    setBoss(i, arr[j] - 1);
}

int main() {
    using namespace std;
    FAST_IO;

    int n, k;
    cin >> n >> k;

    memset(arr, 0, sizeof(int) * n);

    for (int i = 0; i < k; i++) {
        int j;
        cin >> j;
        while (j--) {
            int b;
            cin >> b;
            setBoss(i , b - 1);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}
