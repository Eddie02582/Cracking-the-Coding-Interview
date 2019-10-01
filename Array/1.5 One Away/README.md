# 1.5 One Away . .

## Question
There are three types of edits that can be performed on strings: insert a character, </br>
remove a character, or replace a character. Given two strings, write a function to check if they are </br>
one edit (or zero edits) away. </br>

## Solution

Sol 1:

考慮三種情況</br>
<ul>
    <li><strong>Replacement</strong>考慮兩個字串,ex bale 和 pale,可以藉由取代一字元,由 bale變成成pale,這意味著它們只在一個地方不同。</li>
    <li><strong>Insert</strong>兩個字串,ex apple 和 aple</li>
    <li><strong>Remove</strong>反過來的Insert</li>
</ul>

``` python 

def One_Away(s1,s2):    
    if len(s1) == len(s2):
        return oneEditReplace(s1,s2)
    elif len(s1) == len(s2) + 1  :
        return oneEditlnsert(s1,s2)
    elif len(s2) == len(s1) + 1  :
        return oneEditlnsert(s2,s1)   
    
    return False
    
def oneEditReplace(s1,s2):
    foundDifference = False
    for i in range(len(s1)):
        if s1[i] != s2[i]:
            if foundDifference:
                return False
            foundDifference = True

    return True
    
def oneEditlnsert(s1,s2):
    index1,index2 = 0,0
    while index1 < len(s1) and index2 < len(s2):
        if s1[index1] != s2[index1]:
            if index1 != index2:
               return False
            index2 += 1
        else:
            index1 += 1
            index2 += 1
    return True   
    


```