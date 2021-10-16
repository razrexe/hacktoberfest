class Solution {
public:
    int maxNumberOfBalloons(string text) 
    {
        unordered_map<char, int> mm;
        for (char i : text) mm[i] += 1;
        return min(mm['b'], min(mm['a'], min(mm['l']/2, min(mm['o']/2, mm['n']))));
    }
};
