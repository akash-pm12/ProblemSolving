import java.util.*;
public class KarenAndCoffee {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int q = sc.nextInt();
        int[] diff = new int[200002];
        for (int i = 0; i < n; i++) {
            int l = sc.nextInt();
            int r = sc.nextInt();
            diff[l]++;
            diff[r + 1]--;
        }
        int[] cnt = new int[200001];
        for (int i = 1; i <= 200000; i++) {
            cnt[i] = cnt[i - 1] + diff[i];
        }
        int[] pref = new int[200001];
        for (int i = 1; i <= 200000; i++) {
            if (cnt[i] >= k)
                pref[i] = pref[i - 1] + 1;
            else
                pref[i] = pref[i - 1];
        }
        while (q-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            System.out.println(pref[b] - pref[a - 1]);
        }
    }
}