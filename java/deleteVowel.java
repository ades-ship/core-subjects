import java.util.*;

public class deleteVowel {
    deleteVowel() {
        System.out.println("hello");
    }

    public static void main(String[] k) {
        Scanner sc = new Scanner(System.in);
        String st = "adesh";
        StringBuffer sb = new StringBuffer(st);
        int i = 0;
        while (i < sb.length()) {
            if (sb.charAt(i) == 'a') {
                sb.replace(i, i + 1, "");
            }
            i++;
        }
        System.out.println(sb);
        int n = sc.nextInt();
        deleteVowel obj[] = new deleteVowel[n + 1];
        i=0;
        for(int i1=0; i1<n; i1++)
        {

            obj[i1] = new deleteVowel();
        }
        
    }

}
