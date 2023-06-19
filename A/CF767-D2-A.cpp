
int arr[100000];

int main() {
    using namespace std;
    FAST_IO;

    int n;
    cin >> n;
    int l = n;

    memset(arr, 0, sizeof(int) * n);

    while (n--) {
        int k;
        cin >> k;
        arr[k - 1] = 1;
        while ( l > 0 && arr[l - 1]) {
            arr[--l] = 0;
            cout << l+1 << " ";
        }
        cout << endl;
    }
}
