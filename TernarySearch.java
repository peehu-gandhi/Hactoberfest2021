package AllSearchingAlg;
//ternary search is quite similar to binary search
//ternary search takes longer time than binary search in worst case
//it divides the array in 3 parts
public class TernarySearch {
    public static void main(String[] args) {
        int [] arr= {3,5,11,14,19,40,76};
        int target= 14;
        int result= search(arr,0,arr.length-1,target);
        System.out.println(result);
    }
    private static int search(int[] arr, int start,int end,int target) {
        if(end>=start){
            int mid1= start +(end- start)/3;
            int mid2= mid1+(end-start)/3;
            if(target==arr[mid1]){
                return mid1;
            }
            if(target==arr[mid2]){
                return mid2;
            }
            if(target<arr[mid1]){
                return search(arr,start,mid1-1,target);//recursive call of ternary function
            }
            if(target>arr[mid2]){
                return search(arr,mid2+1,end,target);//recursive call of ternary function
            }else{
                return search(arr,mid1+1,mid2-1,target);
            }
        }return -1;
    }
}
