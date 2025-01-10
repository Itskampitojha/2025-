/**
 * @param {string[]} words1
 * @param {string[]} words2
 * @return {string[]}
 */
var wordSubsets = function(words1, words2) {
    const count = (word) => {
        const freq = new Array(26).fill(0);
        for (const char of word) freq[char.charCodeAt(0) - 97]++;
        return freq;
    };

    const maxFreq = new Array(26).fill(0);
    for (const word of words2) {
        const freq = count(word);
        for (let i = 0; i < 26; i++) {
            maxFreq[i] = Math.max(maxFreq[i], freq[i]);
        }
    }

    return words1.filter(word => {
        const freq = count(word);
        return maxFreq.every((val, i) => freq[i] >= val);
    });
};
