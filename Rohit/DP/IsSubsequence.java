class Solution {
     public boolean isSubsequence(String s, String t,int si,int ti)
     {
        
         if(si>=s.length())
         {
             return true;
         }
         
         if(ti>=t.length())
         {
             return false;
         }
          
         
         
         if(s.charAt(si)==t.charAt(ti))
         {
             return isSubsequence(s,t,si+1,ti+1);
         }
         else
         {
             return isSubsequence(s,t,si,ti+1);
         }
         
         
     }
    
    
    public boolean isSubsequence(String s, String t) {
         if(s.equals(t))
         {
             return true;
         }
        return isSubsequence(s,t,0,0);
        
    }
}
