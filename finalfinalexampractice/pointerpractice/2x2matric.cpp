#include <iostream>

using namespace std;

// Make a 2x2 matrix and then multiply them to get the product of both matrices.
int main() {
    int mat1[1][1];
    int mat2[1][1];
    int productmat[1][1];
    cout << "Enter elements for first matrix" << endl; // Enter elements for the first matrix.
    for (int i = 0; i <= 1; ++i) {
        for (int j = 0; j <= 1; ++j) {
            cout << "Enter the data for mat1["<<i<<']'<<'['<<j<<']';
            cin >> mat1[i][j];
}
cout <<endl;}
    for (int i = 0; i <= 1; ++i) {
        for (int j = 0; j <= 1; ++j) {
            cout << "Enter the data for mat2["<<i<<']'<<'['<<j<<']';
            cin >> mat2[i][j];
}
cout <<endl;}
   for (int i = 0; i <= 1; ++i) {
        for (int j = 0; j <= 1; ++j) {
            productmat[i][j] = mat1[i][j]*mat2[i][j];

}
cout <<endl;}
   for (int i = 0; i <= 1; ++i) {
        for (int j = 0; j <= 1; ++j) {
            cout << productmat[i][j];
}cout << endl;}
}