import java.util.*;
public class StringCompression{
   public static void main(String[] args) {

    StringCompression array = new StringCompression();
    array.compress("aabcccccaaa");
  
    }

    String compress(String str)
    {
        String compressedString = "";
        int count = 0 ;
        for (int i =0; i<str.length();i++)
        {
            count += 1;
            if (i + 1 >=str.length()  || str.charAt(i) != str.charAt(i+1)){
                compressedString += str.charAt(i) + count;
                count = 0;
            }

        }


        return compressedString;


    }
}