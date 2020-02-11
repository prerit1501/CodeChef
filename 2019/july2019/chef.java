import java.util.*;

public class chef
{
    public static void main(String[] args)
    {
        Scanner scn=new Scanner(System.in);
        int t;
        t=scn.nextInt();
        while(t>0)
        {
            int n;
            n=scn.nextInt();
            double[] arr=new double[n];
            double sum=0;
            for(int i=0;i<n;i++)
            {
                arr[i]=scn.nextDouble();
                sum+=arr[i];
                // cout<<arr[i]<<" ";
            }
            double mean=sum/n;
            // cout<<endl<<mean<<endl;
            for(int i=0;i<n;i++)
            {
                if(mean==arr[i])
                {
                    System.out.println(i+1);
                    break;
                }
                else if(i==n-1)
                {
                    System.out.println("Impossible");
                }
    
            }
        t--;
    
        }
    scn.close();
    }
}