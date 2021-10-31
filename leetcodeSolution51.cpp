#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    vector<vector<string>> ans;

        
 
     bool isItSafeToPlace(vector<vector<int>> &arr,int row,int col)
        {
            for (int curRow= row-1; curRow>=0; curRow--)
            {
                if (arr[curRow][col]==1) return false;
            }
            
            for (int curRow= row-1, curCol= col-1; curRow>=0 && curCol>=0; curRow--,curCol--)
            {
                if (arr[curRow][curCol]==1) return false;
            }
            
            for (int curRow= row-1, curCol= col+1; curRow>=0 && curCol<arr.size(); curRow--,curCol++)
            {
                if (arr[curRow][curCol]==1) return false;
            }  
 
         return true;
     }
    
    
    void nQueens(vector<vector<int>> &board,int row)
    {
        if(row==board.size())
        {
        
            vector<string> curAns;
            
            for(int indr=0;indr<board.size();indr++)
            {
                string str="";
                
                for(int indc=0;indc<board[0].size();indc++)
                {
                   // str+= board[indr][indc] ? 'Q' : '.';
                    
                    if(board[indr][indc]==0)
                        str+=".";
                    else
                        str+="Q";
                }
                
                curAns.push_back(str);
            }
            
            ans.push_back(curAns);
            
            return;
        }
        
        for(int curCol=0;curCol<board.size();curCol++)
        {
            if(isItSafeToPlace(board,row,curCol))
            {
        
                board[row][curCol]=1;
                
                nQueens(board,row+1);
                
                // board[row][curCol]=0;
            }
            
            // else 
                board[row][curCol]=0;
        }
        
        // for(int ind=0;ind<board.size();ind++)
        // {
        //     for(int indj=0;indj<board[0].size();indj++)
        //     {
        //         cout<<board[ind][indj];
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
    }
    
    vector<vector<string>> solveNQueens(int n) 
    {
        // vector<vector<int>> board(n,vector<int>(n));
        
        vector<vector<int>> board;
        
        for(int ind=0;ind<n;ind++)
        {
            vector<int> temp;
            
            for(int indj=0;indj<n;indj++)
            {
                temp.push_back(0);
            }
            
            board.push_back(temp);
        }
        
//         for(int ind=0;ind<board.size();ind++)
//         {
//             for(int indj=0;indj<board[0].size();indj++)
//             {
//                 cout<<board[ind][indj];
//             }
//         }
        
        nQueens(board,0);
        
        return ans;
    } 
    
};
   