#include <bits/stdc++.h>
using namespace std;

bool isPossible(int matrix[9][9], int r, int c, int k){
    for(int i=0;i<9;i++){
        if(matrix[i][c] == k){
            return false;
        }
        if(matrix[r][i] == k){
            return false;
        }
    }
    int rstart = 3 * (r/3);
    int cstart = 3 * (c/3);
    for(int i=rstart;i<rstart+3;i++){
        for(int j=cstart;j<cstart+3;j++){
            if(matrix[i][j] == k){
                return false;
            }
        }
    }
    return true;
}
bool isItSudoku(int matrix[9][9]) {
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(matrix[i][j] == 0){
                for(int k=1;k<=9;k++){
                    if(isPossible(matrix, i, j, k)){
                        matrix[i][j] = k;
                        if(isItSudoku(matrix)){
                            return true;
                        }
                        matrix[i][j] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}
int main() {
    int matrix[9][9];
    cout <<"Enter the sudoku matrix: " <<endl;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin >>matrix[i][j];
        }
    }
    if(isItSudoku(matrix)){
        cout <<"The solved sudoku is: " <<endl;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cout <<matrix[i][j] <<" ";
            }
            cout <<endl;
        }
    }
    else{
        cout <<"The sudoku is not solvable" <<endl;
    }
}