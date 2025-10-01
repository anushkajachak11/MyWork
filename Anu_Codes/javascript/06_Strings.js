const name = "Shravni";
const repoCount = 100;

//console.log(name + repoCount);

//console.log(`Hello my name is ${name} and my repo Count is ${repoCount}`);

const gameName  = new String(`Anushka-ac`);

//console.log(gameName[0]);
//console.log(gameName.__proto__);


//console.log(gameName.length);
//console.log(gameName.toUpperCase());
//console.log(gameName.charAt(2));
//console.log(gameName.indexOf('a')); 
//console.log(gameName.toLowerCase());

const newString = gameName.substring(1,5);
console.log(newString);

const anotherString = gameName.slice(-6,7);
console.log(anotherString);

const newStringOne = "    Anushka   ";
console.log(newStringOne);
console.log(newStringOne.trim());

//const url = "https://anushka.com/anushka-jachak"
//console.gameNlog(url.replace ('-','*'));

const url = "https://anushka.com/anushka%20jachak"
console.log(url.replace ('%20','-'));


console.log(url.includes('anushka'));

console.log(gameName.split('-'));


//String - use karna sikha
//substring
//trim
//slice
//trim
//replace
//includes
//split