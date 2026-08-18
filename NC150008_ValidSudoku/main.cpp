#include <bits/stdc++.h>
using namespace std;

int main() {
    // inp
    vector<vector<char>> board(9, vector<char>(9));
    char x;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> x;
            board[i][j] = x;
        }
    }

    unordered_map<char, int> row;
    unordered_map<char, int> column;
    unordered_map<char, int> box;

    // rows and columns
    for (int i = 0; i < 9; i++) {

        for (int j = 0; j < 9; j++) {

            if (board[i][j] != '.') {
                ++row[board[i][j]];
            }

            if (board[j][i] != '.') {
                ++column[board[j][i]];
            }
        }

        for (auto& [key, value] : row) {
            if (value > 1) {
                cout << "false";
                return 0;
            }
        }

        for (auto& [key, value] : column) {
            if (value > 1) {
                cout << "false";
                return 0;
            }
        }

        row.clear();
        column.clear();
    }

    // 3x3 boxes
    for (int boxRow = 0; boxRow < 9; boxRow += 3) {
        for (int boxCol = 0; boxCol < 9; boxCol += 3) {

            box.clear();

            for (int i = boxRow; i < boxRow + 3; i++) {
                for (int j = boxCol; j < boxCol + 3; j++) {

                    if (board[i][j] != '.') {
                        ++box[board[i][j]];
                    }
                }
            }

            for (auto& [key, value] : box) {
                if (value > 1) {
                    cout << "false";
                    return 0;
                }
            }
        }
    }

    cout << "true";

    return 0;
}