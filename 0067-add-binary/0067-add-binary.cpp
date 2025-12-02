class Solution {
public:
    string addBinary(string a, string b) {
        int aa = 0, i = 0, j = 0, n = a.size(), m = b.size();
        string A;
        i = n - 1;
        j = m - 1;
        while (i >= 0 && j >= 0) {
            if (a[i] == '0' && b[j] == '0' && aa == 0) {
                A = '0' + A;
                aa = 0;
            } else if (a[i] == '0' && b[j] == '0' && aa == 1) {
                A = '1' + A;
                aa = 0;
            } else if (a[i] == '0' && b[j] == '1' && aa == 0) {
                A = '1' + A;
                aa = 0;
            } else if (a[i] == '0' && b[j] == '1' && aa == 1) {
                A = '0' + A;
                aa = 1;
            } else if (a[i] == '1' && b[j] == '0' && aa == 0) {
                A = '1' + A;
                aa = 0;
            } else if (a[i] == '1' && b[j] == '0' && aa == 1) {
                A = '0' + A;
                aa = 1;
            } else if (a[i] == '1' && b[j] == '1' && aa == 0) {
                A = '0' + A;
                aa = 1;
            } else if (a[i] == '1' && b[j] == '1' && aa == 1) {
                A = '1' + A;
                aa = 1;
            }
            i--;
            j--;
        }
        while (i >= 0) {
            if (a[i] == '1' && aa == 1) {
                A = '0' + A;
            } else if (a[i] == '0' && aa == 1) {
                A = '1' + A;
                aa = 0;
            } else {
                A = a[i] + A;
            }
            i--;
        }
        while (j >= 0) {
            if (b[j] == '1' && aa == 1) {
                A = '0' + A;
            } else if (b[j] == '0' && aa == 1) {
                A = '1' + A;
                aa = 0;
            } else {
                A = b[j] + A;
            }
            j--;
        }
        if (aa == 1 && i < 0 && j < 0) {
            A = '1' + A;
        }
        return A;
    }
};