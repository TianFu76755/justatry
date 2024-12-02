#include <iostream>
#include <string>
using namespace std;

bool fun(const string& str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();  // 忽略上一行输入的换行符

    for (int i = 0; i < n; ++i) {
        string input;
        getline(cin, input);

        if (fun(input)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}

