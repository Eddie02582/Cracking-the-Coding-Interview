import java.util.*;
public class Palindrome{
   public static void main(String[] args) {

    PalindromePermutation array = new PalindromePermutation();
      
        //array.isPermutationOfPalindrom_array("Tact Coa");
        //array.isPermutationOfPalindrom_array("Tact Coa"); 
        array.isPermutationOfPalindrom_dict("Tact Coa") ; 
        array.isPermutationOfPalindrom_solutions("Tact Coa"); 
    }

    boolean isPermutationOfPalindrom_dict(String phrase)
    {
        phrase = phrase.toLowerCase();      
       
        HashMap <Character,Integer>counts = new HashMap<Character,Integer>();

       for ( int i = 0; i < phrase.length();i++)
       {
            char c = phrase.charAt(i);
            if (Character.isLetter(c))
            {
                if (!counts.containsKey(c))
                {
                    counts.put(c, 1);  
                }
                else{
                    int count = counts.get(c); 
                    counts.put(c, count + 1); 

                }

            }
       }             
       int odd_count = 0;
       for (Character key : counts.keySet()) {
            int count = counts.get(key);
            if (count %2 != 0)
                odd_count += 1;
        }

       return odd_count <= 1;
    } 

    //Solutions
    boolean isPermutationOfPalindrom_solutions(String phrase)
    {
       phrase = phrase.toLowerCase();
       int[] table = buildCharFrequencyTable(phrase);
       return checkMaxOneOdd(table);
    }  
    
    boolean checkMaxOneOdd(int[] table) {
        boolean foundOdd = false;
        for (int count : table) 
        {
            if (count % 2 == 1) 
            {
                if (foundOdd) 
                {
                    return false;
                }
                foundOdd = true;
            }
        }
        return true ;
    }    
    
    int getCharNumber(Character c)
    {
        int a = Character.getNumericValue('a');
        int z = Character.getNumericValue('z');        
        int val = Character.getNumericValue(c);
        if (a <= val && val <= z) 
        {
            return val - a;
        }
        return -1;
    }
    
    int[] buildCharFrequencyTable(String phrase) 
    {
        int[] table = new int[Character.getNumericValue('z') -Character.getNumericValue('a') + 1];
        for (char c : phrase.toCharArray()) 
        {
            int x = getCharNumber(c);    
            if (x != -1) 
            {
                table[x]++;
            }
        }
        return table;
    }        
    
}