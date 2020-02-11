import java.util.*;

public class gym
{
    public static void main(String [] args)
    {
    int x;
    Scanner scn =  new Scanner(System.in);
    x=scn.nextInt();
    while(x>0)
    {
        int n,q;
        n=scn.nextInt();
        q= scn.nextInt();
        int sum=0;
        int[] arr=new int[n+1];
        for(int i=1;i<=n;i++)
        {
            arr[i]=i;
        }
        for(int i=0;i<n;i++)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        for(int c=1;c<=q;c++)
        {
            
            int t;
            t=scn.nextInt();
            if(t==1)
            {
                int p;
                p=scn.nextInt();
                p=(sum%n)+p;
                arr[p]=0;

            }
            else
            {
                int p,b;
                p=scn.nextInt();
                b=scn.nextInt();
                int max=0;
                p=(sum%n)+p;
                b=(sum%n)+q;
                for(int i=b;i>=p;i--)
                {
                    if(arr[i]>max)
                    {
                        max=arr[i];
                        break;
                        
                    }
                }
                sum+=max;
                System.out.println(max);



            
            }
            for(int i=0;i<n;i++)
            {
                System.out.print(arr[i]+" ");
            }
            System.out.println();
            
        }




        x--;

    }
}
}