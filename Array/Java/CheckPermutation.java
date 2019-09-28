import java.util.*;

public class CheckPermutation {
    public static void main(String[] args) {

        CheckPermutation array = new CheckPermutation();
        assert array.permutation("abcd","bdca") == true;   
        assert array.permutation("goc","dog") == false; 
        assert array.permutation_sort("abcda","abdca") == true;   
      

       
    
    }
    //Time O(N) or use dict
    boolean permutation(String s , String t)
    {
        if (s.length() != t.length())
            return false;
        
        int [] count = new int [256];
        for (int i = 0 ;i < s.length();i++){
            int val = s.charAt(i);           
            count[val] += 1;  
        }
        for (int i = 0 ;i < t.length();i++){
            int val = t.charAt(i); 
            count[val] -= 1;
            if (count[val] < 0)
                return false;
        }
        return true;
    }
    //Time O(NlogN) 
    boolean permutation_sort(String s , String t)
    {
        if (s.length() != t.length())
            return false;
        char []char_s = s.toCharArray();
        char []char_t = t.toCharArray() ;
        Arrays.sort(char_s);
        Arrays.sort(char_t);
        return char_s == char_t;
    }
    

}