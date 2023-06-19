ll arr[100000];
 
 
int main() {
    using namespace std;
    FAST_IO;
 
    int n;
    cin >> n;
 
    ll mi = LLONG_MAX, ma = LLONG_MIN;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mi = min(arr[i], mi);
        ma = max(arr[i], ma);
    }
 
    ll k = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > mi && arr[i] < ma)
            k++;
    }
 
    cout << k;
 
}
