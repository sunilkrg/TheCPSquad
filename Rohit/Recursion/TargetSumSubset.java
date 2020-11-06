import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        int tar=sc.nextInt();
         
         printTargetSumSubsets(arr,0,"",0,tar);
    }

    // set is the subset
    // sos is sum of subset
    // tar is target
    public static void printTargetSumSubsets(int[] arr, int idx, String set, int sos, int tar) {
        
        if(sos==tar)
        {
            System.out.println(set);
            return;
        }
        if(idx>=arr.length || sos>tar)
        {
            return;
        }
        Integer temp=arr[idx];
        printTargetSumSubsets(arr,idx+1,set+", "+temp.toString(),sos+arr[idx],tar);
        
         printTargetSumSubsets(arr,idx+1,set,sos,tar);
    }

}