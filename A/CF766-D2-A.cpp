
int main() {
    using namespace std;
    FAST_IO;

    string a, b;
    cin >> a >> b;
    
    if (a.length() != b.length())
        cout << max(a.length(), b.length());
    else if (a == b)
        cout << -1;
    else cout << a.length();
}
