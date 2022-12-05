/**
 * @param {string} s
 * @return {character}
 */
var repeatedCharacter = function(s) {
     const mp= new Set();
    for(i of s)
        {
            if(mp.has(i))
                return i;
            
            mp.add(i);
        }
    return '\0';
};