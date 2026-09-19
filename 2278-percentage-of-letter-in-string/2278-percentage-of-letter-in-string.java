class Solution {
    public int percentageLetter(String s, char letter) {
        int letter_appearances = 0;
        for(int i=0;i<s.length();i++){
            char z = s.charAt(i);
            if(z == letter)
            letter_appearances++;
        }
        int percentage = (letter_appearances *100)/s.length();
        return percentage;
    }
}