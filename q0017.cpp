/* 
Expected Example

replace("Hi!") === "H!!"
replace("!Hi! Hi!") === "!H!! H!!"
replace("aeiou") === "!!!!!"
replace("ABCDE") === "!BCD!"
/*

char *replace(const char *s){
    
    char vowels[] = "aeiouAEIOU";
    char *newS = strdup(s);
    
    for (char *temp = newS; *pc; pc++){
        if ( strchr(vowels, *pc)){
            *temp = '!';
        }
    }
    return newS;

}
