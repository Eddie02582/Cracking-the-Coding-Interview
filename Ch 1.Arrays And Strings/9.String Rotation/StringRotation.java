import java.util.*;
public class StringRotation{
   public static void main(String[] args) {

    StringRotation array = new StringRotation();
    array.isRotation("waterbottle","erbottlewat");
  
    }

    public boolean isRotation(String s1, String s2)
    {
        if (s1.length() == s2.length())
            return (s1+s1).contains(s2);
        return false;


    }
}