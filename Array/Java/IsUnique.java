import java.util.*;
public class IsUnique {
    public static void main(String[] args) {

        IsUnique array = new IsUnique();
        array.IsUniqueChars("abcd") == true;   
        array.IsUniqueChars("abcda") == false; 
        array.IsUnique_non_space("abcda") == false; 
    
    }
    //Time O(N)
    //Space O(N)
    boolean IsUniqueChars(String str)
    {
        if (str.length()>128)
            return false;
        boolean []char_set = new boolean[128];
        
        for (int i = 0; i < str.length(); i++)
        {
            int val = str.charAt(i);
            if (char_set[val])
                return false;
        }
        return true;
    }
    //non extra space
    //Time O(N*N)
    //space O(1)
    public boolean IsUnique_non_space(String str)
    {  
        for (int i = 0; i < str.length(); i++)
        {  
            for (int j = i + 1; i < str.length(); j++)
            if (str.charAt(i) == str.charAt(j))
            {
                return false;
            }

        }
        return true;
    }
    //if only a-z
    boolean isUniqueChars_bit(String str) {
        int checker = 0;
        for ( int i = 0; i < str.length(); i++) {
            int val = str.charAt(i) - 'a';
            if ((checker & (1 << val)) > 0) {
                return false;
            }
            checker |= (1 << val);
        }
        return true;
    }    
    
    //if can modify array
    //sort array NlogN
    //Time O(NlogN)
    public boolean IsUniqueChars_Sort(String str)
    {        
        char[] charArray = str.toCharArray();
        Arrays.sort(charArray);
        for (int i = 1; i < charArray.length(); i++)
        {           
            if (charArray[i] == charArray[i-1])
            {
                return false;
            }

        }
        return true;
    }
    
    public boolean IsUnique_Set(char[] arr)
    {        
        HashSet<Character> set=new HashSet<Character>();   
        for (int i = 0; i < arr.length; i++)
        {     
            set.add(arr[i]);  
        }        
        return set.size() == arr.length;
    }  
}