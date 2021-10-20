import java.util.*;
class Changeit
{
   public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int ans[]=new int[t],z=0;
        for(int i=0;i<t;i++)
        {
            int n=sc.nextInt();
            int ar[]=new int[n];
            int m=0,k=0,k1=0,c=0;
            for(int j=0;j<n;j++)
            {
                ar[j]=sc.nextInt();
                
            }
            for(int j=0;j<n;j++)
            {
                k=0;
                for(int l=0;l<n;l++)
                {
                    if(ar[j]==ar[l])
                    {
                        k++;
                        
                    }
                    if(k>k1)
                    {
                        k1=k;
                        k=0;
                        m=ar[j];
                    }
                    
                }
                
            }
            for(int j=0;j<n;j++)
                if(ar[j]!=m)
                    c++;
            ans[z++]=c;
        }
            for(int j=0;j<t;j++)
            System.out.println(ans[j]);
            
    }
}














