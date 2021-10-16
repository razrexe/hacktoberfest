morse_code = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        morse_values = []
        for i in words:
            val = ''
            for j in i:
                val += morse_code[ord(j)-97]
            morse_values.append(val)
        return len(list(set(morse_values)))
