import java.util.*;

public class beauty
{
    public static void main(String[] args) 
    {
        int t;
        Scanner scn=new Scanner(System.in);
        t=scn.nextInt();
        while(t>0)
        {
            String s;
            s=scn.nextLine();
            int count=0;
            for (int i = 0; i < s.length(); i++) 
            {
                for (int j = i+1; j <= s.length(); j++) 
                {
                      String temp=s.substring(i,j);
                      int tl=temp.length();
                      int count0=0,count1=0;

                      for(int k=0;k<tl;k++)
                      {
                          if(temp.charAt(k)=='0')
                          {
                              count0++;
                          }
                          else if(temp.charAt(k)=='1')
                          {
                              count1++;

                          }
                      }
                      if(count0==(count1*count1))
                      {
                          count++;
                      }

               
                }
            }
            System.out.println(count);




            t--;

        }
        scn.close();
    }
}