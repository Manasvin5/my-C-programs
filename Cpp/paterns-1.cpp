#include <iostream>
#include <string>
using namespace std;

void solidSquare(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << "* ";
        cout << endl;
    }
}

void solidRectangle(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) cout << "* ";
        cout << endl;
    }
}

void hollowSquare(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) 
            cout << ((i == 0 || i == n - 1 || j == 0 || j == n - 1) ? "* " : "  ");
        cout << endl;
    }
}

void hollowRectangle(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) 
            cout << ((i == 0 || i == rows - 1 || j == 0 || j == cols - 1) ? "* " : "  ");
        cout << endl;
    }
}

void halfPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << endl;
    }
}

void hollowHalfPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) 
            cout << ((j == 1 || j == i || i == n) ? "* " : "  ");
        cout << endl;
    }
}

void invertedHalfPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << endl;
    }
}

void invertedHollowHalfPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) 
            cout << ((j == 1 || j == i || i == n) ? "* " : "  ");
        cout << endl;
    }
}

void numericHalfPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << j << " ";
        cout << endl;
    }
}

void invertedNumericHalfPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << j << " ";
        cout << endl;
    }
}

void fullPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << "  ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "* ";
        cout << endl;
    }
}

void invertedFullPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) cout << "  ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "* ";
        cout << endl;
    }
}

void diamondPattern(int n) {
    fullPyramid(n);
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) cout << "  ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "* ";
        cout << endl;
    }
}

void hollowPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << "  ";
        for (int j = 1; j <= 2 * i - 1; j++) 
            cout << ((j == 1 || j == 2 * i - 1 || i == n) ? "* " : "  ");
        cout << endl;
    }
}

void invertedHollowPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) cout << "  ";
        for (int j = 1; j <= 2 * i - 1; j++) 
            cout << ((j == 1 || j == 2 * i - 1 || i == n) ? "* " : "  ");
        cout << endl;
    }
}

int main() {
    int n = 5, rows = 4, cols = 7;

    cout << "Solid Square:\n";
    solidSquare(n);

    cout << "\nSolid Rectangle:\n";
    solidRectangle(rows, cols);

    cout << "\nHollow Square:\n";
    hollowSquare(n);

    cout << "\nHollow Rectangle:\n";
    hollowRectangle(rows, cols);

    cout << "\nHalf Pyramid:\n";
    halfPyramid(n);

    cout << "\nHollow Half Pyramid:\n";
    hollowHalfPyramid(n);

    cout << "\nInverted Half Pyramid:\n";
    invertedHalfPyramid(n);

    cout << "\nInverted Hollow Half Pyramid:\n";
    invertedHollowHalfPyramid(n);

    cout << "\nNumeric Half Pyramid:\n";
    numericHalfPyramid(n);

    cout << "\nInverted Numeric Half Pyramid:\n";
    invertedNumericHalfPyramid(n);

    cout << "\nFull Pyramid:\n";
    fullPyramid(n);

    cout << "\nInverted Full Pyramid:\n";
    invertedFullPyramid(n);

    cout << "\nDiamond Pattern:\n";
    diamondPattern(n);

    cout << "\nHollow Pyramid:\n";
    hollowPyramid(n);

    cout << "\nInverted Hollow Pyramid:\n";
    invertedHollowPyramid(n);

    return 0;
}

