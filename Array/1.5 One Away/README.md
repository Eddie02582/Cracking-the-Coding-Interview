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

