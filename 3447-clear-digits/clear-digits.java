class Solution {
    public String clearDigits(String s) {
        String res = "";
         for (char c : s.toCharArray()) {
      if (Character.isDigit(c) && !res.isEmpty()) {
        res = res.substring(0, res.length() - 1); 
      } else if (!Character.isDigit(c)) {
        res += c;
      }
    }
    return res;

    }
}