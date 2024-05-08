import java.util.Arrays;

public class permutation_in_String {
    public boolean checkInclusion(String s1, String s2) {
        if (s1.length() > s2.length() || s1.length() == 0)
            return false;

        int[] array1 = new int[26];
        int[] array2 = new int[26];

        for (int i = 0; i < s1.length(); i++) {
            array1[s1.charAt(i) - 'a']++;
            array2[s2.charAt(i) - 'a']++;
        }

        boolean isEqual = Arrays.equals(array1, array2);

        for (int i = s1.length(); i < s2.length(); i++) {
            if (isEqual)
                return true;

            array2[s2.charAt(i - s1.length()) - 'a']--;
            array2[s2.charAt(i) - 'a']++;

            isEqual = Arrays.equals(array1, array2);
        }

        return isEqual;
    }
}
