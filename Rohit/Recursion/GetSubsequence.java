import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        ArrayList<String> ans=gss(str);
        System.out.println(ans);

    }

    public static ArrayList<String> gss(String str) {
        
         ArrayList<String> ans=new ArrayList<>();
         gss(str,"",ans);
         return ans;
    }
    
     public static void gss(String str,String ans,ArrayList<String> fans)
     {
         if(str.length()==1)
         {
             fans.add(ans);
             fans.add(ans+str.charAt(0));
             return;
         }
         
         gss(str.substring(1),ans,fans);
         gss(str.substring(1),ans+str.charAt(0),fans);
         
     }

}
