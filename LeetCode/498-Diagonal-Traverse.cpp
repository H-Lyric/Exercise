//My submission, runtime 260ms, memory usage 15MB
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        vector<int> output;
        if (!matrix.empty()){
            int row = matrix.size();
            int col = matrix[0].size();
            int i, j, s;
            for (s = 0; s <= row + col - 2; s++){
                if (s % 2 == 0){
                    for (i = s, j = 0; j <= s; i--, j++){
                        if (i < row & j < col)
                        output.push_back(matrix[i][j]);
                    }
                }
                else {
                    for (i = 0, j = s; i <= s; i++, j--){
                        if (j < col & i < row)
                        output.push_back(matrix[i][j]);
                    }
                }
            }
        }
        return output;
    }
};

//Sample submission, runtime 84ms
/*
class Solution {
public:
    
    int m, n;
    //边界条件
    inline bool in(int i, int j) { 
        return i >= 0 && i < m && j >= 0 && j < n;
    }
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        vector<int> ret;
        if (matrix.empty() || matrix.back().empty()) return ret;
        
        m = matrix.size(), n = matrix.back().size();
        int i = 0, j = 0; ret.push_back(matrix[i][j]);
        for ( ; ; ) {
            //没碰到边界就--i,++j，输出matrix[i][j]
            while (in(i - 1, j + 1)) --i, ++j, ret.push_back(matrix[i][j]);
            if (i + j == m + n - 2) break; //判断是否是矩阵的最后一个元素
            //改变方向 
            if (j < n - 1) ++j; 
            else ++i;
            ret.push_back(matrix[i][j]);
            //没碰到边界就--i,++j，输出matrix[i][j]
            while (in(i + 1, j - 1)) ++i, --j, ret.push_back(matrix[i][j]);            
            if (i + j == m + n - 2) break; //判断是否是矩阵的最后一个元素
            //改变方向 
            if (i < m - 1) ++i; 
            else ++j;
            ret.push_back(matrix[i][j]);
        }
        return ret;
    }
};
*/
