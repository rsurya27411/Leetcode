/**
 * @param {string} s
 * @return {string}
 */
var greatestLetter = function(s) {
    let str1="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(let i=str1.length;i>=0;i--)
    {
        if(s.includes(str1[i]) && s.includes(str1[i].toLowerCase()))
        return str1[i];
    }
    return "";
};