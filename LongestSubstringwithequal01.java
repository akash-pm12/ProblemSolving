import java.util.*;
public class LongestSubstringwithequal01{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        HashMap<Integer,Integer> map=new HashMap<>();
        int maxlen=0,sum=0;
        System.out.println("Enter a string with 0's and 1's: ");
        String str=sc.nextLine();
        map.put(0,-1);
        for(int i=0;i<str.length();i++){
            if(str.charAt(i)=='0'){
                sum+=-1;
            }
            else{
                sum+=1;
            }
            if(map.containsKey(sum)){
                maxlen=Math.max(maxlen,i-map.get(sum));
            }
            else{
                map.put(sum,i);
            }
        }
        System.out.println("Longest substring length: "+maxlen);
    }
}