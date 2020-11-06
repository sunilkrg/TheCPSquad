import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        int[][] arr=new int[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                arr[i][j]=sc.nextInt();
            }
        }
        boolean[][] visited=new boolean[n][m];
        floodfill(arr,0,0,"",visited);
        
        // write your code here
    }

    public static void floodfill(int[][] maze, int i, int j, String psf, boolean[][] visited){
        
        int rows=maze.length;
        int cols=maze[0].length;
        if(i==rows-1 && j==cols-1)
        {
            System.out.println(psf);
            return;
        }
        if(maze[i][j]==1 || visited[i][j])
        {
            return;
        }
        if(i<0 || j<0 )
        {
            return;
        }
        if( i>=rows || j>=cols)
        {
            return;
        }
        visited[i][j]=true;
        floodfill(maze,i+1,j,psf+"d",visited);
        floodfill(maze,i,j+1,psf+"r",visited);
        floodfill(maze,i-1,j,psf+"t",visited);
        floodfill(maze,i,j-1,psf+"l",visited);
        visited[i][j] = false;
    }
}
