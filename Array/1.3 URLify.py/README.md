# 1.3 URLify . .

## Question
Write a method to replace all spaces in a string with '%20: You may assume that the string </br>
has sufficient space at the end to hold the additional characters, and that you are given the "true" </br>
length of the string. (Note: If implementing in Java, please use a character array so that you can </br>
perform this operation in place.


## Solution

Sol 1: 指针遍历所有位置,當遇到空白將後面字元全部往後移動2字元,並將陣列依序改成%20 

``` java
    void URLify(char[] str, int trueLength)
    {
       int index = 0;
      
       while(index < str.length())
       {    
            if (str[index] == ' ')
            {                
                trueLength += 2;
                int p = trueLength - 1 ;              
                while (p >= index + 3)
                {
                    str[p] = str[p - 2];
                    p = p - 1;	                    
                }
                str[index]= '%';
                str[index + 1]= '2';
                str[index + 2]= '0';
                index += 3;
            }
            else
                index += 1; 
           
       }     
    } 
```

Sol 2:
Time:O(N)

``` java
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
```    

