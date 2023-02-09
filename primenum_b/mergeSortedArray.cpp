class Solution {
public:
    void merge(vector<int>& ar1, int n, vector<int>& ar2, int m) {
    int i = 0, j = 0, k = 0;
    vector<int> result(n + m);
    while (i < n && j < m) {
        if (ar1[i] < ar2[j]) {
            result[k] = ar1[i];
            i++;
        } else {
            result[k] = ar2[j];
            j++;
        }
        k++;
    }
    while (i < n) {
        result[k] = ar1[i];
        i++;
        k++;
    }
    while (j < m) {
        result[k] = ar2[j];
        j++;
        k++;
    }
    ar1 = result;
}
};