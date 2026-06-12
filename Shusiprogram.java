import java.util.*;
public class Shusiprogram {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int r,c;
        System.out.print("Enter no of shari: ");
        r=sc.nextInt();
        System.out.print("\nEnter no of neta: ");
        c=sc.nextInt();
        System.out.println("\nEnter shari elements: ");
        int[] sh=new int[r];
        int[] ne=new int[c];
        for(int i=0;i<r;i++){
            sh[i]=sc.nextInt();
        }
        System.out.println("\nEnter neta elements: ");
        for(int i=0;i<c;i++){
            ne[i]=sc.nextInt();
        }
        int l=r-1,t=c-1;
        Arrays.sort(sh);
        Arrays.sort(ne);
        int count=0;
        while(l>-1 && t>-1){
            if(ne[t]<=sh[l]*2){
                count++;
                l--;
                t--;
            }
            else{
                t--;
            }
        }
        System.out.println("Maximum no of shushi: "+count);
    }
}
