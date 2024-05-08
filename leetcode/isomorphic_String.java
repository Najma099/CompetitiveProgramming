public class isomorphic_String {
    class Solution {
        public boolean isIsomorphic(String s, String t) {
            if (s.length() != t.length())
                return false;
            int[] sToTMap = new int[256];
            int[] tToSMap = new int[256];
    
            for (int i = 0; i < s.length(); i++) {
                char chS = s.charAt(i);
                char chT = t.charAt(i);
    
                if(sToTMap[chS] != tToSMap[chT])
                    return false;
                // if (sToTMap[chS] == '\0') {
                //     sToTMap[chS] = chT;
                // } else {
                //     if (sToTMap[chS] != chT)
                //         return false;
                // }
    
                // if (tToSMap[chT] == '\0') {
                //     tToSMap[chT] = chS;
                // } else {
                //     if (tToSMap[chT] != chS)
                //         return false;
                // }
                sToTMap[chS] = i + 1;
                tToSMap[chT] = i + 1;
            }
    
            return true;
        }
    }
    
    
}
