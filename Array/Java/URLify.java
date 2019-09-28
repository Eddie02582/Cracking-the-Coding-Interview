import java.util.*;
public class URLify {
   public static void main(String[] args) {

        URLify array = new URLify();
        char [] str = "Mr John Smith    ".toCharArray(); 
        array.replaceSpaces(str,13);     
        assert array.URLify("Mr John Smith    ",13) == "Mr%2eJohn%2eSmith";  
    
    }


    String URLify(String str, int trueLength)
    {
       int index = 0;
       char [] arr = str.toCharArray();
       while(index < str.length())
       {    
            if (arr[index] == ' ')
            {                
                trueLength += 2;
                int p = trueLength - 1 ;              
                while (p >= index + 3)
                {
                    arr[p] = arr[p - 2];
                    p = p - 1;	                    
                }
                arr[index]= '%';
                arr[index + 1]= '2';
                arr[index + 2]= '0';
                index += 3;
            }
            else
                index += 1; 
           
       }
       return new String(arr);
    } 


    void replaceSpaces(char[] str, int trueLength) {
        int spaceCount = 0, index, i = 0;
        
        for (i = 0 ; i < trueLength; i++) {
            if (str[i] == ' ') {
                spaceCount++;
            }
        }
   
        index = trueLength + spaceCount * 2;
        
        if (trueLength < str.length) str[trueLength] ='\0';
        for (i = trueLength - 1 ; i >=0; i --) {
   
            if (str[i] == ' ') {
                str[index - 1] ='0';
                str[index - 2] = '2';
                str[index - 3] = '%';
            index = index - 3;
            } else {
    
                str[index - 1] = str[i];
                index--;
            }
        }
    } 

}