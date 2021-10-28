import java.util.Stack;

class maxReactangle {
    public int maximalRectangle(char[][] matrix) {
        if(matrix.length==0 || matrix.length==0 || matrix[0].length==0) return 0;
        int n = matrix.length;
        int m = matrix[0].length;
        int[] heights = new int[m];
        int max_rectangle = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(matrix[i][j]=='0') heights[j] = 0;
                else heights[j]+=(matrix[i][j]-'0');
               
            }
             max_rectangle = Math.max(max_rectangle,maxHistogram(heights));
        }
        return max_rectangle;
        
    }
    public int maxHistogram(int[] heights){
        int n = heights.length;
        int[] NSR = NSR(heights);
        int[] NSL = NSL(heights);
        int[] result = new int[n];
        int max_area = Integer.MIN_VALUE;
        for(int i = 0;i<n;i++){
            result[i] = NSR[i]-NSL[i]-1;
            max_area = Math.max(max_area,result[i]*heights[i]);
        }
        return max_area;
        
    }
    public int[] NSR(int[] heights){
        int n = heights.length;
        int[] result = new int[n];
        result[n-1] = n;
        Stack<Integer> stack = new Stack<>();
        stack.push(n-1);
        for(int i = n-1;i>=0;i--){
            while(!stack.isEmpty()&& heights[stack.peek()]>=heights[i]){
                stack.pop();
            }
            if(stack.isEmpty()){
                result[i] = n;
            }else{
                result[i] = stack.peek();
            }
            stack.push(i);
        }
        return result;
    }
    public int[] NSL(int[] heights){
        int n = heights.length;
        int[] result = new int[n];
        result[0] = -1;
        Stack<Integer> stack = new Stack<>();
        stack.push(0);
        for(int i = 1;i<n;i++){
            while(!stack.isEmpty() && heights[stack.peek()]>=heights[i]){
                stack.pop();
            }
            if(stack.isEmpty()){
                result[i] = -1;
            }else{
                result[i] = stack.peek();
            }
            stack.push(i);
            
        }
        return result;
    }
}
