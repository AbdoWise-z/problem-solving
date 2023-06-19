
ll arr[100000 * 2];

int main() {
    using namespace std;
    FAST_IO;

    ll n;
    cin >> n;

    ll prev = LLONG_MIN;
    for (int i = 0; i < n; i++) {
        ll k;
        cin >> k;
        arr[i * 2]     = k - prev;
        arr[i * 2 + 1] = k;
        if (i != 0)
            arr[(i - 1) * 2] = min(arr[ (i - 1) * 2 ], k - prev);
        if (i == 1)
            arr[0] = k - prev;

        prev = k;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i * 2] << " " << max(arr[i * 2 + 1] - arr[1], arr[n * 2 - 1] - arr[i * 2 + 1]) << endl;
    }

}
