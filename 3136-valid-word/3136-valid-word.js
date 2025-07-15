/**
 * @param {string} word
 * @return {boolean}
 */
var isValid = function(word) {
    if(word.length < 3)
    return 0;
    if(word.includes('@'))
    return 0;
    if(word.includes('#'))
    return 0;
    if(word.includes('$'))
    return 0;
    let str1="0123456789";
    let str2="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    let flag=false;
    for(let char of word)
    if(str1.includes(char) || str2.includes(char))
    {
        flag=true;
        break;
    }
    if(flag===false)
    return 0;
    flag=false;
    let str3="AEIOUaeiou";
    for(let char of word)
    if(str3.includes(char))
    {
        flag=true;
        break;
    }
    if(flag===false)
    return 0;
    flag=false;
    let str4="bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    for(let char of word)
    if(str4.includes(char))
    {
        flag=true;
        break;
    }
    if(flag===false)
    return 0;
    return 1;
};