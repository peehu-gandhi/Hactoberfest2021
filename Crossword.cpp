#include<bits/stdc++.h>
using namespace std;
#define n 10

bool isValidVertical(vector<string>& grid, int row, int col, string word){
    int j = row;
    for(int i=0;i<word.size();i++){
        if(j>9){
            return false;
        }
        if(grid[i+row][col] == '-' || grid[i+row][col] == word[i]){
            j++;
        }
        if(grid[i+row][col] == '+' || (grid[i+row][col] != '-' && grid[i+row][col] != word[i])){
            return false;
        }
    }
    return true;
}

bool isValidHorizontal(vector<string>& grid, int row, int col, string word){
    int j = col;
    for(int i=0;i<word.size();i++){
        if(j>9){
            return false;
        }
        if(grid[row][col+i] == '-' || grid[row][col+i] == word[i]){
            j++;
        }
        if(grid[row][col+i] == '+' || (grid[row][col+i] != '-' && grid[row][col+i] != word[i])){
            return false;
        }
    }
    return true;
}

void setVertical(vector<string>& grid, int row, int col, string word, vector<bool>& arr){
    for(int i=0;i<word.size();i++){
        if(grid[row+i][col] == '-'){
            grid[row+i][col] = word[i];
            arr.push_back(true);
        }
        else{
            arr.push_back(false);
        }
    }
}

void setHorizontal(vector<string>& grid, int row, int col, string word, vector<bool>& arr){
    for(int i=0;i<word.size();i++){
        if(grid[row][col+i] == '-'){
            grid[row][col+i] = word[i];
            arr.push_back(true); 
        }
        else{
            arr.push_back(false);
        }
    }
}

void resetVertical(vector<string>& grid, int row, int col, string word, vector<bool>& arr){
    for(int i=0;i<word.size();i++){
        if(arr[i]){
            grid[row+i][col] = '-';
        }
    }
}

void resetHorizontal(vector<string>& grid, int row, int col, string word, vector<bool>& arr){
    for(int i=0;i<word.size();i++){
        if(arr[i]){
            grid[row][col+i] = '-';
        }
    }
}

bool crosswordSolver(vector<string>& grid, vector<string>v, int index){
    if(index == v.size()){
        for(int i=0;i<n;i++){
            cout <<grid.at(i) <<endl;
        }
        return true;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j] == '-' || grid[i][j] == v[index][0]){
                if(isValidVertical(grid, i, j, v[index])){  // checks if the given word is valid to be filled vertically at given i,j
                    vector<bool>arr;     //Array to keep check where '-' is present, to help in resetting
                    setVertical(grid, i, j, v[index], arr);
                    if(crosswordSolver(grid, v, index+1)){
                        return true;
                    }
                    resetVertical(grid, i, j, v[index], arr);  // resets them to '-', if other words don't fit in (backtracking) 
                }
                if(isValidHorizontal(grid, i, j, v[index])){   //checks if the given word is valid to be filled horizontally at given i,j
                    vector<bool> arr;
                    setHorizontal(grid, i, j, v[index], arr);
                    if(crosswordSolver(grid, v, index+1)){
                        return true;
                    }
                    resetHorizontal(grid, i, j, v[index], arr);
                }
            }
        }
    }
    return false;
}

int main() {
    vector<string>grid;
    for(int i=0;i<n;i++){
        string line;
        cin >>line;
        grid.push_back(line);
    }
    string s;
    cin >>s;
    int i=0;
    vector<string> words;
    while(i<s.size()){
        string tmp;
        while(s[i]!=';' && i<s.size()){
            tmp+=s[i];
            i++;
        }
        words.push_back(tmp);
        i++;
    }
    crosswordSolver(grid, words, 0);
}